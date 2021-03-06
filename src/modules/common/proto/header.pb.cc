// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/common/proto/header.proto

#include "modules/common/proto/header.pb.h"

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
namespace common {
PROTOBUF_CONSTEXPR Header::Header(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.module_name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.frame_id_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.status_)*/nullptr
  , /*decltype(_impl_.timestamp_sec_)*/0
  , /*decltype(_impl_.lidar_timestamp_)*/uint64_t{0u}
  , /*decltype(_impl_.camera_timestamp_)*/uint64_t{0u}
  , /*decltype(_impl_.radar_timestamp_)*/uint64_t{0u}
  , /*decltype(_impl_.sequence_num_)*/0u
  , /*decltype(_impl_.version_)*/1u} {}
struct HeaderDefaultTypeInternal {
  PROTOBUF_CONSTEXPR HeaderDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~HeaderDefaultTypeInternal() {}
  union {
    Header _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 HeaderDefaultTypeInternal _Header_default_instance_;
}  // namespace common
}  // namespace apollo
static ::_pb::Metadata file_level_metadata_modules_2fcommon_2fproto_2fheader_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_modules_2fcommon_2fproto_2fheader_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_modules_2fcommon_2fproto_2fheader_2eproto = nullptr;

const uint32_t TableStruct_modules_2fcommon_2fproto_2fheader_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::common::Header, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::common::Header, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::apollo::common::Header, _impl_.timestamp_sec_),
  PROTOBUF_FIELD_OFFSET(::apollo::common::Header, _impl_.module_name_),
  PROTOBUF_FIELD_OFFSET(::apollo::common::Header, _impl_.sequence_num_),
  PROTOBUF_FIELD_OFFSET(::apollo::common::Header, _impl_.lidar_timestamp_),
  PROTOBUF_FIELD_OFFSET(::apollo::common::Header, _impl_.camera_timestamp_),
  PROTOBUF_FIELD_OFFSET(::apollo::common::Header, _impl_.radar_timestamp_),
  PROTOBUF_FIELD_OFFSET(::apollo::common::Header, _impl_.version_),
  PROTOBUF_FIELD_OFFSET(::apollo::common::Header, _impl_.status_),
  PROTOBUF_FIELD_OFFSET(::apollo::common::Header, _impl_.frame_id_),
  3,
  0,
  7,
  4,
  5,
  6,
  8,
  2,
  1,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 15, -1, sizeof(::apollo::common::Header)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::apollo::common::_Header_default_instance_._instance,
};

const char descriptor_table_protodef_modules_2fcommon_2fproto_2fheader_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n!modules/common/proto/header.proto\022\rapo"
  "llo.common\032%modules/common/proto/error_c"
  "ode.proto\"\345\001\n\006Header\022\025\n\rtimestamp_sec\030\001 "
  "\001(\001\022\023\n\013module_name\030\002 \001(\t\022\024\n\014sequence_num"
  "\030\003 \001(\r\022\027\n\017lidar_timestamp\030\004 \001(\004\022\030\n\020camer"
  "a_timestamp\030\005 \001(\004\022\027\n\017radar_timestamp\030\006 \001"
  "(\004\022\022\n\007version\030\007 \001(\r:\0011\022\'\n\006status\030\010 \001(\0132\027"
  ".apollo.common.StatusPb\022\020\n\010frame_id\030\t \001("
  "\t"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_modules_2fcommon_2fproto_2fheader_2eproto_deps[1] = {
  &::descriptor_table_modules_2fcommon_2fproto_2ferror_5fcode_2eproto,
};
static ::_pbi::once_flag descriptor_table_modules_2fcommon_2fproto_2fheader_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_modules_2fcommon_2fproto_2fheader_2eproto = {
    false, false, 321, descriptor_table_protodef_modules_2fcommon_2fproto_2fheader_2eproto,
    "modules/common/proto/header.proto",
    &descriptor_table_modules_2fcommon_2fproto_2fheader_2eproto_once, descriptor_table_modules_2fcommon_2fproto_2fheader_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_modules_2fcommon_2fproto_2fheader_2eproto::offsets,
    file_level_metadata_modules_2fcommon_2fproto_2fheader_2eproto, file_level_enum_descriptors_modules_2fcommon_2fproto_2fheader_2eproto,
    file_level_service_descriptors_modules_2fcommon_2fproto_2fheader_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_modules_2fcommon_2fproto_2fheader_2eproto_getter() {
  return &descriptor_table_modules_2fcommon_2fproto_2fheader_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_modules_2fcommon_2fproto_2fheader_2eproto(&descriptor_table_modules_2fcommon_2fproto_2fheader_2eproto);
namespace apollo {
namespace common {

// ===================================================================

class Header::_Internal {
 public:
  using HasBits = decltype(std::declval<Header>()._impl_._has_bits_);
  static void set_has_timestamp_sec(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_module_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_sequence_num(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
  static void set_has_lidar_timestamp(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_camera_timestamp(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_radar_timestamp(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_version(HasBits* has_bits) {
    (*has_bits)[0] |= 256u;
  }
  static const ::apollo::common::StatusPb& status(const Header* msg);
  static void set_has_status(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_frame_id(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

const ::apollo::common::StatusPb&
Header::_Internal::status(const Header* msg) {
  return *msg->_impl_.status_;
}
void Header::clear_status() {
  if (_impl_.status_ != nullptr) _impl_.status_->Clear();
  _impl_._has_bits_[0] &= ~0x00000004u;
}
Header::Header(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:apollo.common.Header)
}
Header::Header(const Header& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Header* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.module_name_){}
    , decltype(_impl_.frame_id_){}
    , decltype(_impl_.status_){nullptr}
    , decltype(_impl_.timestamp_sec_){}
    , decltype(_impl_.lidar_timestamp_){}
    , decltype(_impl_.camera_timestamp_){}
    , decltype(_impl_.radar_timestamp_){}
    , decltype(_impl_.sequence_num_){}
    , decltype(_impl_.version_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.module_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.module_name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_module_name()) {
    _this->_impl_.module_name_.Set(from._internal_module_name(), 
      _this->GetArenaForAllocation());
  }
  _impl_.frame_id_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.frame_id_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_frame_id()) {
    _this->_impl_.frame_id_.Set(from._internal_frame_id(), 
      _this->GetArenaForAllocation());
  }
  if (from._internal_has_status()) {
    _this->_impl_.status_ = new ::apollo::common::StatusPb(*from._impl_.status_);
  }
  ::memcpy(&_impl_.timestamp_sec_, &from._impl_.timestamp_sec_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.version_) -
    reinterpret_cast<char*>(&_impl_.timestamp_sec_)) + sizeof(_impl_.version_));
  // @@protoc_insertion_point(copy_constructor:apollo.common.Header)
}

inline void Header::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.module_name_){}
    , decltype(_impl_.frame_id_){}
    , decltype(_impl_.status_){nullptr}
    , decltype(_impl_.timestamp_sec_){0}
    , decltype(_impl_.lidar_timestamp_){uint64_t{0u}}
    , decltype(_impl_.camera_timestamp_){uint64_t{0u}}
    , decltype(_impl_.radar_timestamp_){uint64_t{0u}}
    , decltype(_impl_.sequence_num_){0u}
    , decltype(_impl_.version_){1u}
  };
  _impl_.module_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.module_name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.frame_id_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.frame_id_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Header::~Header() {
  // @@protoc_insertion_point(destructor:apollo.common.Header)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Header::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.module_name_.Destroy();
  _impl_.frame_id_.Destroy();
  if (this != internal_default_instance()) delete _impl_.status_;
}

void Header::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Header::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.common.Header)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.module_name_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.frame_id_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(_impl_.status_ != nullptr);
      _impl_.status_->Clear();
    }
  }
  if (cached_has_bits & 0x000000f8u) {
    ::memset(&_impl_.timestamp_sec_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.sequence_num_) -
        reinterpret_cast<char*>(&_impl_.timestamp_sec_)) + sizeof(_impl_.sequence_num_));
  }
  _impl_.version_ = 1u;
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Header::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional double timestamp_sec = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 9)) {
          _Internal::set_has_timestamp_sec(&has_bits);
          _impl_.timestamp_sec_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // optional string module_name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_module_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "apollo.common.Header.module_name");
          #endif  // !NDEBUG
        } else
          goto handle_unusual;
        continue;
      // optional uint32 sequence_num = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_sequence_num(&has_bits);
          _impl_.sequence_num_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint64 lidar_timestamp = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _Internal::set_has_lidar_timestamp(&has_bits);
          _impl_.lidar_timestamp_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint64 camera_timestamp = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _Internal::set_has_camera_timestamp(&has_bits);
          _impl_.camera_timestamp_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint64 radar_timestamp = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 48)) {
          _Internal::set_has_radar_timestamp(&has_bits);
          _impl_.radar_timestamp_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 version = 7 [default = 1];
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 56)) {
          _Internal::set_has_version(&has_bits);
          _impl_.version_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .apollo.common.StatusPb status = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 66)) {
          ptr = ctx->ParseMessage(_internal_mutable_status(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string frame_id = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 74)) {
          auto str = _internal_mutable_frame_id();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "apollo.common.Header.frame_id");
          #endif  // !NDEBUG
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

uint8_t* Header::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.common.Header)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional double timestamp_sec = 1;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(1, this->_internal_timestamp_sec(), target);
  }

  // optional string module_name = 2;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_module_name().data(), static_cast<int>(this->_internal_module_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "apollo.common.Header.module_name");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_module_name(), target);
  }

  // optional uint32 sequence_num = 3;
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(3, this->_internal_sequence_num(), target);
  }

  // optional uint64 lidar_timestamp = 4;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(4, this->_internal_lidar_timestamp(), target);
  }

  // optional uint64 camera_timestamp = 5;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(5, this->_internal_camera_timestamp(), target);
  }

  // optional uint64 radar_timestamp = 6;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(6, this->_internal_radar_timestamp(), target);
  }

  // optional uint32 version = 7 [default = 1];
  if (cached_has_bits & 0x00000100u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(7, this->_internal_version(), target);
  }

  // optional .apollo.common.StatusPb status = 8;
  if (cached_has_bits & 0x00000004u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(8, _Internal::status(this),
        _Internal::status(this).GetCachedSize(), target, stream);
  }

  // optional string frame_id = 9;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_frame_id().data(), static_cast<int>(this->_internal_frame_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "apollo.common.Header.frame_id");
    target = stream->WriteStringMaybeAliased(
        9, this->_internal_frame_id(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.common.Header)
  return target;
}

size_t Header::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.common.Header)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    // optional string module_name = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_module_name());
    }

    // optional string frame_id = 9;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_frame_id());
    }

    // optional .apollo.common.StatusPb status = 8;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.status_);
    }

    // optional double timestamp_sec = 1;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 8;
    }

    // optional uint64 lidar_timestamp = 4;
    if (cached_has_bits & 0x00000010u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_lidar_timestamp());
    }

    // optional uint64 camera_timestamp = 5;
    if (cached_has_bits & 0x00000020u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_camera_timestamp());
    }

    // optional uint64 radar_timestamp = 6;
    if (cached_has_bits & 0x00000040u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_radar_timestamp());
    }

    // optional uint32 sequence_num = 3;
    if (cached_has_bits & 0x00000080u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_sequence_num());
    }

  }
  // optional uint32 version = 7 [default = 1];
  if (cached_has_bits & 0x00000100u) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_version());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Header::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Header::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Header::GetClassData() const { return &_class_data_; }


void Header::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Header*>(&to_msg);
  auto& from = static_cast<const Header&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:apollo.common.Header)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_module_name(from._internal_module_name());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_set_frame_id(from._internal_frame_id());
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_internal_mutable_status()->::apollo::common::StatusPb::MergeFrom(
          from._internal_status());
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.timestamp_sec_ = from._impl_.timestamp_sec_;
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.lidar_timestamp_ = from._impl_.lidar_timestamp_;
    }
    if (cached_has_bits & 0x00000020u) {
      _this->_impl_.camera_timestamp_ = from._impl_.camera_timestamp_;
    }
    if (cached_has_bits & 0x00000040u) {
      _this->_impl_.radar_timestamp_ = from._impl_.radar_timestamp_;
    }
    if (cached_has_bits & 0x00000080u) {
      _this->_impl_.sequence_num_ = from._impl_.sequence_num_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  if (cached_has_bits & 0x00000100u) {
    _this->_internal_set_version(from._internal_version());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Header::CopyFrom(const Header& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.common.Header)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Header::IsInitialized() const {
  return true;
}

void Header::InternalSwap(Header* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.module_name_, lhs_arena,
      &other->_impl_.module_name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.frame_id_, lhs_arena,
      &other->_impl_.frame_id_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Header, _impl_.sequence_num_)
      + sizeof(Header::_impl_.sequence_num_)
      - PROTOBUF_FIELD_OFFSET(Header, _impl_.status_)>(
          reinterpret_cast<char*>(&_impl_.status_),
          reinterpret_cast<char*>(&other->_impl_.status_));
  swap(_impl_.version_, other->_impl_.version_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Header::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_modules_2fcommon_2fproto_2fheader_2eproto_getter, &descriptor_table_modules_2fcommon_2fproto_2fheader_2eproto_once,
      file_level_metadata_modules_2fcommon_2fproto_2fheader_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace common
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::common::Header*
Arena::CreateMaybeMessage< ::apollo::common::Header >(Arena* arena) {
  return Arena::CreateMessageInternal< ::apollo::common::Header >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
