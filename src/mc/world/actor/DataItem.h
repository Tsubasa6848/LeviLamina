#pragma once

#include "ll/api/base/Meta.h"
#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/world/actor/ActorDataIDs.h"
#include "mc/world/actor/DataItemType.h"
#include "mc/world/level/BlockPos.h"

class DataItem {
public:
    using TypeList = ll::meta::TypeList<schar, short, int, float, std::string, CompoundTag, BlockPos, int64, Vec3>;

    ::DataItemType mType;
    ::ActorDataIDs mId;
    bool           mDirty = true;

    template <typename T>
        requires(DataItem::TypeList::contains<T>)
    [[nodiscard]] constexpr optional_ref<T const> getData() const;
    template <typename T>
        requires(DataItem::TypeList::contains<T>)
    [[nodiscard]] constexpr optional_ref<T> getData();
    template <typename T>
        requires(DataItem::TypeList::contains<std::remove_cvref_t<T>>)
    constexpr bool setData(T&& value);

    DataItem() = delete;

    template <typename T>
        requires(DataItem::TypeList::contains<std::remove_cvref_t<T>>)
    [[nodiscard]] static LL_CONSTEXPR23 std::unique_ptr<DataItem> create(ushort key, T&& value);
    [[nodiscard]] static LL_CONSTEXPR23 std::unique_ptr<DataItem> create(ushort key, bool value) {
        return create(key, (schar)value);
    }
    template <typename T>
        requires(DataItem::TypeList::contains<std::remove_cvref_t<T>>)
    [[nodiscard]] static LL_CONSTEXPR23 std::unique_ptr<DataItem> create(::ActorDataIDs key, T&& value) {
        return create(static_cast<std::underlying_type_t<::ActorDataIDs>>(key), std::forward<T>(value));
    }
    [[nodiscard]] static LL_CONSTEXPR23 std::unique_ptr<DataItem> create(::ActorDataIDs key, bool value) {
        return create(key, (schar)value);
    }

protected:
    constexpr DataItem(::DataItemType type, ::ActorDataIDs id) : mType(type), mId(id) {}

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DataItem();

    // vIndex: 1
    virtual bool isDataEqual(class DataItem const&) const;

    // vIndex: 2
    virtual std::unique_ptr<class DataItem> clone() const = 0;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI bool isDataEqual$(class DataItem const&) const;

    // NOLINTEND
};

template <typename T>
    requires(DataItem::TypeList::contains<T>)
class DataItem2 : public DataItem {
public:
    T mValue;

    [[nodiscard]] std::unique_ptr<DataItem> clone() const override;

    [[nodiscard]] constexpr T const& value() const { return mValue; };

    [[nodiscard]] constexpr T& value() { return mValue; };

    [[nodiscard]] constexpr explicit operator T const&() const { return mValue; };

    [[nodiscard]] constexpr explicit operator T&() { return mValue; };

    template <class T2>
    constexpr void setData(T2&& value) {
        mDirty = true;
        mValue = value;
    }
    template <class T2>
    constexpr DataItem2<T>& operator=(T2&& value) {
        setData(value);
        return *this;
    }
    template <class... Args>
    constexpr explicit DataItem2(ushort key, Args&&... args)
    : DataItem((::DataItemType)DataItem::TypeList::index<T>, (::ActorDataIDs)key),
      mValue(std::forward<Args>(args)...) {}
};

template <typename T>
    requires(DataItem::TypeList::contains<T>)
constexpr optional_ref<T const> DataItem::getData() const {
    if (this->mType == (::DataItemType)TypeList::index<T>) return ((DataItem2<T>*)this)->mValue;
    return nullptr;
}

template <typename T>
    requires(DataItem::TypeList::contains<T>)
constexpr optional_ref<T> DataItem::getData() {
    if (this->mType == (::DataItemType)TypeList::index<T>) return ((DataItem2<T>*)this)->mValue;
    return nullptr;
}

template <typename T>
    requires(DataItem::TypeList::contains<std::remove_cvref_t<T>>)
constexpr bool DataItem::setData(T&& value) {
    if (this->mType == (::DataItemType)TypeList::index<T>) return false;
    ((DataItem2<T>*)this)->setData(std::forward<T>(value));
    return true;
}

template <typename T>
    requires(DataItem::TypeList::contains<std::remove_cvref_t<T>>)
LL_CONSTEXPR23 std::unique_ptr<DataItem> DataItem::create(ushort key, T&& value) {
    return std::make_unique<DataItem2<std::remove_cvref_t<T>>>(key, std::forward<T>(value));
}
