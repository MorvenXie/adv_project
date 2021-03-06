// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/map/proto/map_yield_sign.proto

#include "modules/map/proto/map_yield_sign.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace apollo {
namespace hdmap {
PROTOBUF_CONSTEXPR YieldSign::YieldSign(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.stop_line_)*/{}
  , /*decltype(_impl_.overlap_id_)*/{}
  , /*decltype(_impl_.id_)*/nullptr} {}
struct YieldSignDefaultTypeInternal {
  PROTOBUF_CONSTEXPR YieldSignDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~YieldSignDefaultTypeInternal() {}
  union {
    YieldSign _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 YieldSignDefaultTypeInternal _YieldSign_default_instance_;
}  // namespace hdmap
}  // namespace apollo
static ::_pb::Metadata file_level_metadata_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto = nullptr;

const uint32_t TableStruct_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::hdmap::YieldSign, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::hdmap::YieldSign, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::apollo::hdmap::YieldSign, _impl_.id_),
  PROTOBUF_FIELD_OFFSET(::apollo::hdmap::YieldSign, _impl_.stop_line_),
  PROTOBUF_FIELD_OFFSET(::apollo::hdmap::YieldSign, _impl_.overlap_id_),
  0,
  ~0u,
  ~0u,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, -1, sizeof(::apollo::hdmap::YieldSign)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::apollo::hdmap::_YieldSign_default_instance_._instance,
};

const char descriptor_table_protodef_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n&modules/map/proto/map_yield_sign.proto"
  "\022\014apollo.hdmap\032\036modules/map/proto/map_id"
  ".proto\032$modules/map/proto/map_geometry.p"
  "roto\"w\n\tYieldSign\022\034\n\002id\030\001 \001(\0132\020.apollo.h"
  "dmap.Id\022&\n\tstop_line\030\002 \003(\0132\023.apollo.hdma"
  "p.Curve\022$\n\noverlap_id\030\003 \003(\0132\020.apollo.hdm"
  "ap.Id"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto_deps[2] = {
  &::descriptor_table_modules_2fmap_2fproto_2fmap_5fgeometry_2eproto,
  &::descriptor_table_modules_2fmap_2fproto_2fmap_5fid_2eproto,
};
static ::_pbi::once_flag descriptor_table_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto = {
    false, false, 245, descriptor_table_protodef_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto,
    "modules/map/proto/map_yield_sign.proto",
    &descriptor_table_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto_once, descriptor_table_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto_deps, 2, 1,
    schemas, file_default_instances, TableStruct_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto::offsets,
    file_level_metadata_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto, file_level_enum_descriptors_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto,
    file_level_service_descriptors_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto_getter() {
  return &descriptor_table_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto(&descriptor_table_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto);
namespace apollo {
namespace hdmap {

// ===================================================================

class YieldSign::_Internal {
 public:
  using HasBits = decltype(std::declval<YieldSign>()._impl_._has_bits_);
  static const ::apollo::hdmap::Id& id(const YieldSign* msg);
  static void set_has_id(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::apollo::hdmap::Id&
YieldSign::_Internal::id(const YieldSign* msg) {
  return *msg->_impl_.id_;
}
void YieldSign::clear_id() {
  if (_impl_.id_ != nullptr) _impl_.id_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
void YieldSign::clear_stop_line() {
  _impl_.stop_line_.Clear();
}
void YieldSign::clear_overlap_id() {
  _impl_.overlap_id_.Clear();
}
YieldSign::YieldSign(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:apollo.hdmap.YieldSign)
}
YieldSign::YieldSign(const YieldSign& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  YieldSign* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.stop_line_){from._impl_.stop_line_}
    , decltype(_impl_.overlap_id_){from._impl_.overlap_id_}
    , decltype(_impl_.id_){nullptr}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_id()) {
    _this->_impl_.id_ = new ::apollo::hdmap::Id(*from._impl_.id_);
  }
  // @@protoc_insertion_point(copy_constructor:apollo.hdmap.YieldSign)
}

inline void YieldSign::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.stop_line_){arena}
    , decltype(_impl_.overlap_id_){arena}
    , decltype(_impl_.id_){nullptr}
  };
}

YieldSign::~YieldSign() {
  // @@protoc_insertion_point(destructor:apollo.hdmap.YieldSign)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void YieldSign::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.stop_line_.~RepeatedPtrField();
  _impl_.overlap_id_.~RepeatedPtrField();
  if (this != internal_default_instance()) delete _impl_.id_;
}

void YieldSign::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void YieldSign::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.hdmap.YieldSign)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.stop_line_.Clear();
  _impl_.overlap_id_.Clear();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(_impl_.id_ != nullptr);
    _impl_.id_->Clear();
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* YieldSign::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional .apollo.hdmap.Id id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_id(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .apollo.hdmap.Curve stop_line = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_stop_line(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else
          goto handle_unusual;
        continue;
      // repeated .apollo.hdmap.Id overlap_id = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_overlap_id(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* YieldSign::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.hdmap.YieldSign)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional .apollo.hdmap.Id id = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::id(this),
        _Internal::id(this).GetCachedSize(), target, stream);
  }

  // repeated .apollo.hdmap.Curve stop_line = 2;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_stop_line_size()); i < n; i++) {
    const auto& repfield = this->_internal_stop_line(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(2, repfield, repfield.GetCachedSize(), target, stream);
  }

  // repeated .apollo.hdmap.Id overlap_id = 3;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_overlap_id_size()); i < n; i++) {
    const auto& repfield = this->_internal_overlap_id(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(3, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.hdmap.YieldSign)
  return target;
}

size_t YieldSign::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.hdmap.YieldSign)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .apollo.hdmap.Curve stop_line = 2;
  total_size += 1UL * this->_internal_stop_line_size();
  for (const auto& msg : this->_impl_.stop_line_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .apollo.hdmap.Id overlap_id = 3;
  total_size += 1UL * this->_internal_overlap_id_size();
  for (const auto& msg : this->_impl_.overlap_id_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // optional .apollo.hdmap.Id id = 1;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.id_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData YieldSign::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    YieldSign::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*YieldSign::GetClassData() const { return &_class_data_; }


void YieldSign::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<YieldSign*>(&to_msg);
  auto& from = static_cast<const YieldSign&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:apollo.hdmap.YieldSign)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.stop_line_.MergeFrom(from._impl_.stop_line_);
  _this->_impl_.overlap_id_.MergeFrom(from._impl_.overlap_id_);
  if (from._internal_has_id()) {
    _this->_internal_mutable_id()->::apollo::hdmap::Id::MergeFrom(
        from._internal_id());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void YieldSign::CopyFrom(const YieldSign& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.hdmap.YieldSign)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool YieldSign::IsInitialized() const {
  return true;
}

void YieldSign::InternalSwap(YieldSign* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _impl_.stop_line_.InternalSwap(&other->_impl_.stop_line_);
  _impl_.overlap_id_.InternalSwap(&other->_impl_.overlap_id_);
  swap(_impl_.id_, other->_impl_.id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata YieldSign::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto_getter, &descriptor_table_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto_once,
      file_level_metadata_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace hdmap
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::hdmap::YieldSign*
Arena::CreateMaybeMessage< ::apollo::hdmap::YieldSign >(Arena* arena) {
  return Arena::CreateMessageInternal< ::apollo::hdmap::YieldSign >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
