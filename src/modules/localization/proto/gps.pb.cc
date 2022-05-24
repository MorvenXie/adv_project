// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/localization/proto/gps.proto

#include "modules/localization/proto/gps.pb.h"

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
namespace localization {
PROTOBUF_CONSTEXPR Gps::Gps(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.header_)*/nullptr
  , /*decltype(_impl_.localization_)*/nullptr} {}
struct GpsDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GpsDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~GpsDefaultTypeInternal() {}
  union {
    Gps _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GpsDefaultTypeInternal _Gps_default_instance_;
}  // namespace localization
}  // namespace apollo
static ::_pb::Metadata file_level_metadata_modules_2flocalization_2fproto_2fgps_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_modules_2flocalization_2fproto_2fgps_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_modules_2flocalization_2fproto_2fgps_2eproto = nullptr;

const uint32_t TableStruct_modules_2flocalization_2fproto_2fgps_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::localization::Gps, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::localization::Gps, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::apollo::localization::Gps, _impl_.header_),
  PROTOBUF_FIELD_OFFSET(::apollo::localization::Gps, _impl_.localization_),
  0,
  1,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, -1, sizeof(::apollo::localization::Gps)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::apollo::localization::_Gps_default_instance_._instance,
};

const char descriptor_table_protodef_modules_2flocalization_2fproto_2fgps_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n$modules/localization/proto/gps.proto\022\023"
  "apollo.localization\032!modules/common/prot"
  "o/header.proto\032%modules/localization/pro"
  "to/pose.proto\"]\n\003Gps\022%\n\006header\030\001 \001(\0132\025.a"
  "pollo.common.Header\022/\n\014localization\030\002 \001("
  "\0132\031.apollo.localization.Pose"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_modules_2flocalization_2fproto_2fgps_2eproto_deps[2] = {
  &::descriptor_table_modules_2fcommon_2fproto_2fheader_2eproto,
  &::descriptor_table_modules_2flocalization_2fproto_2fpose_2eproto,
};
static ::_pbi::once_flag descriptor_table_modules_2flocalization_2fproto_2fgps_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_modules_2flocalization_2fproto_2fgps_2eproto = {
    false, false, 228, descriptor_table_protodef_modules_2flocalization_2fproto_2fgps_2eproto,
    "modules/localization/proto/gps.proto",
    &descriptor_table_modules_2flocalization_2fproto_2fgps_2eproto_once, descriptor_table_modules_2flocalization_2fproto_2fgps_2eproto_deps, 2, 1,
    schemas, file_default_instances, TableStruct_modules_2flocalization_2fproto_2fgps_2eproto::offsets,
    file_level_metadata_modules_2flocalization_2fproto_2fgps_2eproto, file_level_enum_descriptors_modules_2flocalization_2fproto_2fgps_2eproto,
    file_level_service_descriptors_modules_2flocalization_2fproto_2fgps_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_modules_2flocalization_2fproto_2fgps_2eproto_getter() {
  return &descriptor_table_modules_2flocalization_2fproto_2fgps_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_modules_2flocalization_2fproto_2fgps_2eproto(&descriptor_table_modules_2flocalization_2fproto_2fgps_2eproto);
namespace apollo {
namespace localization {

// ===================================================================

class Gps::_Internal {
 public:
  using HasBits = decltype(std::declval<Gps>()._impl_._has_bits_);
  static const ::apollo::common::Header& header(const Gps* msg);
  static void set_has_header(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::apollo::localization::Pose& localization(const Gps* msg);
  static void set_has_localization(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

const ::apollo::common::Header&
Gps::_Internal::header(const Gps* msg) {
  return *msg->_impl_.header_;
}
const ::apollo::localization::Pose&
Gps::_Internal::localization(const Gps* msg) {
  return *msg->_impl_.localization_;
}
void Gps::clear_header() {
  if (_impl_.header_ != nullptr) _impl_.header_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
void Gps::clear_localization() {
  if (_impl_.localization_ != nullptr) _impl_.localization_->Clear();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
Gps::Gps(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:apollo.localization.Gps)
}
Gps::Gps(const Gps& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Gps* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.header_){nullptr}
    , decltype(_impl_.localization_){nullptr}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_header()) {
    _this->_impl_.header_ = new ::apollo::common::Header(*from._impl_.header_);
  }
  if (from._internal_has_localization()) {
    _this->_impl_.localization_ = new ::apollo::localization::Pose(*from._impl_.localization_);
  }
  // @@protoc_insertion_point(copy_constructor:apollo.localization.Gps)
}

inline void Gps::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.header_){nullptr}
    , decltype(_impl_.localization_){nullptr}
  };
}

Gps::~Gps() {
  // @@protoc_insertion_point(destructor:apollo.localization.Gps)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Gps::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.header_;
  if (this != internal_default_instance()) delete _impl_.localization_;
}

void Gps::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Gps::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.localization.Gps)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(_impl_.header_ != nullptr);
      _impl_.header_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(_impl_.localization_ != nullptr);
      _impl_.localization_->Clear();
    }
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Gps::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional .apollo.common.Header header = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_header(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .apollo.localization.Pose localization = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_localization(), ptr);
          CHK_(ptr);
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

uint8_t* Gps::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.localization.Gps)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional .apollo.common.Header header = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::header(this),
        _Internal::header(this).GetCachedSize(), target, stream);
  }

  // optional .apollo.localization.Pose localization = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::localization(this),
        _Internal::localization(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.localization.Gps)
  return target;
}

size_t Gps::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.localization.Gps)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional .apollo.common.Header header = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.header_);
    }

    // optional .apollo.localization.Pose localization = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.localization_);
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Gps::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Gps::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Gps::GetClassData() const { return &_class_data_; }


void Gps::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Gps*>(&to_msg);
  auto& from = static_cast<const Gps&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:apollo.localization.Gps)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_mutable_header()->::apollo::common::Header::MergeFrom(
          from._internal_header());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_mutable_localization()->::apollo::localization::Pose::MergeFrom(
          from._internal_localization());
    }
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Gps::CopyFrom(const Gps& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.localization.Gps)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Gps::IsInitialized() const {
  return true;
}

void Gps::InternalSwap(Gps* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Gps, _impl_.localization_)
      + sizeof(Gps::_impl_.localization_)
      - PROTOBUF_FIELD_OFFSET(Gps, _impl_.header_)>(
          reinterpret_cast<char*>(&_impl_.header_),
          reinterpret_cast<char*>(&other->_impl_.header_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Gps::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_modules_2flocalization_2fproto_2fgps_2eproto_getter, &descriptor_table_modules_2flocalization_2fproto_2fgps_2eproto_once,
      file_level_metadata_modules_2flocalization_2fproto_2fgps_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace localization
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::localization::Gps*
Arena::CreateMaybeMessage< ::apollo::localization::Gps >(Arena* arena) {
  return Arena::CreateMessageInternal< ::apollo::localization::Gps >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>