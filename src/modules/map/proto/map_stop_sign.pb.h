// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/map/proto/map_stop_sign.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_modules_2fmap_2fproto_2fmap_5fstop_5fsign_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_modules_2fmap_2fproto_2fmap_5fstop_5fsign_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3020000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3020001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "modules/map/proto/map_id.pb.h"
#include "modules/map/proto/map_geometry.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_modules_2fmap_2fproto_2fmap_5fstop_5fsign_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_modules_2fmap_2fproto_2fmap_5fstop_5fsign_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fmap_2fproto_2fmap_5fstop_5fsign_2eproto;
namespace apollo {
namespace hdmap {
class StopSign;
struct StopSignDefaultTypeInternal;
extern StopSignDefaultTypeInternal _StopSign_default_instance_;
}  // namespace hdmap
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> ::apollo::hdmap::StopSign* Arena::CreateMaybeMessage<::apollo::hdmap::StopSign>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace apollo {
namespace hdmap {

enum StopSign_StopType : int {
  StopSign_StopType_UNKNOWN = 0,
  StopSign_StopType_ONE_WAY = 1,
  StopSign_StopType_TWO_WAY = 2,
  StopSign_StopType_THREE_WAY = 3,
  StopSign_StopType_FOUR_WAY = 4,
  StopSign_StopType_ALL_WAY = 5
};
bool StopSign_StopType_IsValid(int value);
constexpr StopSign_StopType StopSign_StopType_StopType_MIN = StopSign_StopType_UNKNOWN;
constexpr StopSign_StopType StopSign_StopType_StopType_MAX = StopSign_StopType_ALL_WAY;
constexpr int StopSign_StopType_StopType_ARRAYSIZE = StopSign_StopType_StopType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* StopSign_StopType_descriptor();
template<typename T>
inline const std::string& StopSign_StopType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, StopSign_StopType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function StopSign_StopType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    StopSign_StopType_descriptor(), enum_t_value);
}
inline bool StopSign_StopType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, StopSign_StopType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<StopSign_StopType>(
    StopSign_StopType_descriptor(), name, value);
}
// ===================================================================

class StopSign final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.hdmap.StopSign) */ {
 public:
  inline StopSign() : StopSign(nullptr) {}
  ~StopSign() override;
  explicit PROTOBUF_CONSTEXPR StopSign(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  StopSign(const StopSign& from);
  StopSign(StopSign&& from) noexcept
    : StopSign() {
    *this = ::std::move(from);
  }

  inline StopSign& operator=(const StopSign& from) {
    CopyFrom(from);
    return *this;
  }
  inline StopSign& operator=(StopSign&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const StopSign& default_instance() {
    return *internal_default_instance();
  }
  static inline const StopSign* internal_default_instance() {
    return reinterpret_cast<const StopSign*>(
               &_StopSign_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(StopSign& a, StopSign& b) {
    a.Swap(&b);
  }
  inline void Swap(StopSign* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(StopSign* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  StopSign* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<StopSign>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const StopSign& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const StopSign& from) {
    StopSign::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(StopSign* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.hdmap.StopSign";
  }
  protected:
  explicit StopSign(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef StopSign_StopType StopType;
  static constexpr StopType UNKNOWN =
    StopSign_StopType_UNKNOWN;
  static constexpr StopType ONE_WAY =
    StopSign_StopType_ONE_WAY;
  static constexpr StopType TWO_WAY =
    StopSign_StopType_TWO_WAY;
  static constexpr StopType THREE_WAY =
    StopSign_StopType_THREE_WAY;
  static constexpr StopType FOUR_WAY =
    StopSign_StopType_FOUR_WAY;
  static constexpr StopType ALL_WAY =
    StopSign_StopType_ALL_WAY;
  static inline bool StopType_IsValid(int value) {
    return StopSign_StopType_IsValid(value);
  }
  static constexpr StopType StopType_MIN =
    StopSign_StopType_StopType_MIN;
  static constexpr StopType StopType_MAX =
    StopSign_StopType_StopType_MAX;
  static constexpr int StopType_ARRAYSIZE =
    StopSign_StopType_StopType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  StopType_descriptor() {
    return StopSign_StopType_descriptor();
  }
  template<typename T>
  static inline const std::string& StopType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, StopType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function StopType_Name.");
    return StopSign_StopType_Name(enum_t_value);
  }
  static inline bool StopType_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      StopType* value) {
    return StopSign_StopType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kStopLineFieldNumber = 2,
    kOverlapIdFieldNumber = 3,
    kIdFieldNumber = 1,
    kTypeFieldNumber = 4,
  };
  // repeated .apollo.hdmap.Curve stop_line = 2;
  int stop_line_size() const;
  private:
  int _internal_stop_line_size() const;
  public:
  void clear_stop_line();
  ::apollo::hdmap::Curve* mutable_stop_line(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::hdmap::Curve >*
      mutable_stop_line();
  private:
  const ::apollo::hdmap::Curve& _internal_stop_line(int index) const;
  ::apollo::hdmap::Curve* _internal_add_stop_line();
  public:
  const ::apollo::hdmap::Curve& stop_line(int index) const;
  ::apollo::hdmap::Curve* add_stop_line();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::hdmap::Curve >&
      stop_line() const;

  // repeated .apollo.hdmap.Id overlap_id = 3;
  int overlap_id_size() const;
  private:
  int _internal_overlap_id_size() const;
  public:
  void clear_overlap_id();
  ::apollo::hdmap::Id* mutable_overlap_id(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::hdmap::Id >*
      mutable_overlap_id();
  private:
  const ::apollo::hdmap::Id& _internal_overlap_id(int index) const;
  ::apollo::hdmap::Id* _internal_add_overlap_id();
  public:
  const ::apollo::hdmap::Id& overlap_id(int index) const;
  ::apollo::hdmap::Id* add_overlap_id();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::hdmap::Id >&
      overlap_id() const;

  // optional .apollo.hdmap.Id id = 1;
  bool has_id() const;
  private:
  bool _internal_has_id() const;
  public:
  void clear_id();
  const ::apollo::hdmap::Id& id() const;
  PROTOBUF_NODISCARD ::apollo::hdmap::Id* release_id();
  ::apollo::hdmap::Id* mutable_id();
  void set_allocated_id(::apollo::hdmap::Id* id);
  private:
  const ::apollo::hdmap::Id& _internal_id() const;
  ::apollo::hdmap::Id* _internal_mutable_id();
  public:
  void unsafe_arena_set_allocated_id(
      ::apollo::hdmap::Id* id);
  ::apollo::hdmap::Id* unsafe_arena_release_id();

  // optional .apollo.hdmap.StopSign.StopType type = 4;
  bool has_type() const;
  private:
  bool _internal_has_type() const;
  public:
  void clear_type();
  ::apollo::hdmap::StopSign_StopType type() const;
  void set_type(::apollo::hdmap::StopSign_StopType value);
  private:
  ::apollo::hdmap::StopSign_StopType _internal_type() const;
  void _internal_set_type(::apollo::hdmap::StopSign_StopType value);
  public:

  // @@protoc_insertion_point(class_scope:apollo.hdmap.StopSign)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::hdmap::Curve > stop_line_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::hdmap::Id > overlap_id_;
    ::apollo::hdmap::Id* id_;
    int type_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_modules_2fmap_2fproto_2fmap_5fstop_5fsign_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// StopSign

// optional .apollo.hdmap.Id id = 1;
inline bool StopSign::_internal_has_id() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.id_ != nullptr);
  return value;
}
inline bool StopSign::has_id() const {
  return _internal_has_id();
}
inline const ::apollo::hdmap::Id& StopSign::_internal_id() const {
  const ::apollo::hdmap::Id* p = _impl_.id_;
  return p != nullptr ? *p : reinterpret_cast<const ::apollo::hdmap::Id&>(
      ::apollo::hdmap::_Id_default_instance_);
}
inline const ::apollo::hdmap::Id& StopSign::id() const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.StopSign.id)
  return _internal_id();
}
inline void StopSign::unsafe_arena_set_allocated_id(
    ::apollo::hdmap::Id* id) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.id_);
  }
  _impl_.id_ = id;
  if (id) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:apollo.hdmap.StopSign.id)
}
inline ::apollo::hdmap::Id* StopSign::release_id() {
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::apollo::hdmap::Id* temp = _impl_.id_;
  _impl_.id_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::apollo::hdmap::Id* StopSign::unsafe_arena_release_id() {
  // @@protoc_insertion_point(field_release:apollo.hdmap.StopSign.id)
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::apollo::hdmap::Id* temp = _impl_.id_;
  _impl_.id_ = nullptr;
  return temp;
}
inline ::apollo::hdmap::Id* StopSign::_internal_mutable_id() {
  _impl_._has_bits_[0] |= 0x00000001u;
  if (_impl_.id_ == nullptr) {
    auto* p = CreateMaybeMessage<::apollo::hdmap::Id>(GetArenaForAllocation());
    _impl_.id_ = p;
  }
  return _impl_.id_;
}
inline ::apollo::hdmap::Id* StopSign::mutable_id() {
  ::apollo::hdmap::Id* _msg = _internal_mutable_id();
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.StopSign.id)
  return _msg;
}
inline void StopSign::set_allocated_id(::apollo::hdmap::Id* id) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.id_);
  }
  if (id) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(id));
    if (message_arena != submessage_arena) {
      id = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, id, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.id_ = id;
  // @@protoc_insertion_point(field_set_allocated:apollo.hdmap.StopSign.id)
}

// repeated .apollo.hdmap.Curve stop_line = 2;
inline int StopSign::_internal_stop_line_size() const {
  return _impl_.stop_line_.size();
}
inline int StopSign::stop_line_size() const {
  return _internal_stop_line_size();
}
inline ::apollo::hdmap::Curve* StopSign::mutable_stop_line(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.StopSign.stop_line)
  return _impl_.stop_line_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::hdmap::Curve >*
StopSign::mutable_stop_line() {
  // @@protoc_insertion_point(field_mutable_list:apollo.hdmap.StopSign.stop_line)
  return &_impl_.stop_line_;
}
inline const ::apollo::hdmap::Curve& StopSign::_internal_stop_line(int index) const {
  return _impl_.stop_line_.Get(index);
}
inline const ::apollo::hdmap::Curve& StopSign::stop_line(int index) const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.StopSign.stop_line)
  return _internal_stop_line(index);
}
inline ::apollo::hdmap::Curve* StopSign::_internal_add_stop_line() {
  return _impl_.stop_line_.Add();
}
inline ::apollo::hdmap::Curve* StopSign::add_stop_line() {
  ::apollo::hdmap::Curve* _add = _internal_add_stop_line();
  // @@protoc_insertion_point(field_add:apollo.hdmap.StopSign.stop_line)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::hdmap::Curve >&
StopSign::stop_line() const {
  // @@protoc_insertion_point(field_list:apollo.hdmap.StopSign.stop_line)
  return _impl_.stop_line_;
}

// repeated .apollo.hdmap.Id overlap_id = 3;
inline int StopSign::_internal_overlap_id_size() const {
  return _impl_.overlap_id_.size();
}
inline int StopSign::overlap_id_size() const {
  return _internal_overlap_id_size();
}
inline ::apollo::hdmap::Id* StopSign::mutable_overlap_id(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.StopSign.overlap_id)
  return _impl_.overlap_id_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::hdmap::Id >*
StopSign::mutable_overlap_id() {
  // @@protoc_insertion_point(field_mutable_list:apollo.hdmap.StopSign.overlap_id)
  return &_impl_.overlap_id_;
}
inline const ::apollo::hdmap::Id& StopSign::_internal_overlap_id(int index) const {
  return _impl_.overlap_id_.Get(index);
}
inline const ::apollo::hdmap::Id& StopSign::overlap_id(int index) const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.StopSign.overlap_id)
  return _internal_overlap_id(index);
}
inline ::apollo::hdmap::Id* StopSign::_internal_add_overlap_id() {
  return _impl_.overlap_id_.Add();
}
inline ::apollo::hdmap::Id* StopSign::add_overlap_id() {
  ::apollo::hdmap::Id* _add = _internal_add_overlap_id();
  // @@protoc_insertion_point(field_add:apollo.hdmap.StopSign.overlap_id)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::hdmap::Id >&
StopSign::overlap_id() const {
  // @@protoc_insertion_point(field_list:apollo.hdmap.StopSign.overlap_id)
  return _impl_.overlap_id_;
}

// optional .apollo.hdmap.StopSign.StopType type = 4;
inline bool StopSign::_internal_has_type() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool StopSign::has_type() const {
  return _internal_has_type();
}
inline void StopSign::clear_type() {
  _impl_.type_ = 0;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::apollo::hdmap::StopSign_StopType StopSign::_internal_type() const {
  return static_cast< ::apollo::hdmap::StopSign_StopType >(_impl_.type_);
}
inline ::apollo::hdmap::StopSign_StopType StopSign::type() const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.StopSign.type)
  return _internal_type();
}
inline void StopSign::_internal_set_type(::apollo::hdmap::StopSign_StopType value) {
  assert(::apollo::hdmap::StopSign_StopType_IsValid(value));
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.type_ = value;
}
inline void StopSign::set_type(::apollo::hdmap::StopSign_StopType value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:apollo.hdmap.StopSign.type)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace hdmap
}  // namespace apollo

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::apollo::hdmap::StopSign_StopType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::hdmap::StopSign_StopType>() {
  return ::apollo::hdmap::StopSign_StopType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_modules_2fmap_2fproto_2fmap_5fstop_5fsign_2eproto