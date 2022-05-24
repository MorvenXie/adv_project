// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/map/relative_map/proto/navigator_config.proto

#include "modules/map/relative_map/proto/navigator_config.pb.h"

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
namespace relative_map {
PROTOBUF_CONSTEXPR SampleParam::SampleParam(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.straight_sample_interval_)*/3
  , /*decltype(_impl_.small_kappa_sample_interval_)*/1
  , /*decltype(_impl_.middle_kappa_sample_interval_)*/0.4
  , /*decltype(_impl_.large_kappa_sample_interval_)*/0.1
  , /*decltype(_impl_.small_kappa_)*/0.002
  , /*decltype(_impl_.middle_kappa_)*/0.008
  , /*decltype(_impl_.large_kappa_)*/0.02} {}
struct SampleParamDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SampleParamDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SampleParamDefaultTypeInternal() {}
  union {
    SampleParam _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SampleParamDefaultTypeInternal _SampleParam_default_instance_;
PROTOBUF_CONSTEXPR NavigatorConfig::NavigatorConfig(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.sample_param_)*/nullptr
  , /*decltype(_impl_.enable_navigator_downsample_)*/true} {}
struct NavigatorConfigDefaultTypeInternal {
  PROTOBUF_CONSTEXPR NavigatorConfigDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~NavigatorConfigDefaultTypeInternal() {}
  union {
    NavigatorConfig _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 NavigatorConfigDefaultTypeInternal _NavigatorConfig_default_instance_;
}  // namespace relative_map
}  // namespace apollo
static ::_pb::Metadata file_level_metadata_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto = nullptr;

const uint32_t TableStruct_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::relative_map::SampleParam, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::relative_map::SampleParam, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::apollo::relative_map::SampleParam, _impl_.straight_sample_interval_),
  PROTOBUF_FIELD_OFFSET(::apollo::relative_map::SampleParam, _impl_.small_kappa_sample_interval_),
  PROTOBUF_FIELD_OFFSET(::apollo::relative_map::SampleParam, _impl_.middle_kappa_sample_interval_),
  PROTOBUF_FIELD_OFFSET(::apollo::relative_map::SampleParam, _impl_.large_kappa_sample_interval_),
  PROTOBUF_FIELD_OFFSET(::apollo::relative_map::SampleParam, _impl_.small_kappa_),
  PROTOBUF_FIELD_OFFSET(::apollo::relative_map::SampleParam, _impl_.middle_kappa_),
  PROTOBUF_FIELD_OFFSET(::apollo::relative_map::SampleParam, _impl_.large_kappa_),
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  PROTOBUF_FIELD_OFFSET(::apollo::relative_map::NavigatorConfig, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::relative_map::NavigatorConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::apollo::relative_map::NavigatorConfig, _impl_.enable_navigator_downsample_),
  PROTOBUF_FIELD_OFFSET(::apollo::relative_map::NavigatorConfig, _impl_.sample_param_),
  1,
  0,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 13, -1, sizeof(::apollo::relative_map::SampleParam)},
  { 20, 28, -1, sizeof(::apollo::relative_map::NavigatorConfig)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::apollo::relative_map::_SampleParam_default_instance_._instance,
  &::apollo::relative_map::_NavigatorConfig_default_instance_._instance,
};

const char descriptor_table_protodef_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n5modules/map/relative_map/proto/navigat"
  "or_config.proto\022\023apollo.relative_map\"\203\002\n"
  "\013SampleParam\022#\n\030straight_sample_interval"
  "\030\001 \001(\001:\0013\022&\n\033small_kappa_sample_interval"
  "\030\002 \001(\001:\0011\022)\n\034middle_kappa_sample_interva"
  "l\030\003 \001(\001:\0030.4\022(\n\033large_kappa_sample_inter"
  "val\030\004 \001(\001:\0030.1\022\032\n\013small_kappa\030\005 \001(\001:\0050.0"
  "02\022\033\n\014middle_kappa\030\006 \001(\001:\0050.008\022\031\n\013large"
  "_kappa\030\007 \001(\001:\0040.02\"t\n\017NavigatorConfig\022)\n"
  "\033enable_navigator_downsample\030\001 \001(\010:\004true"
  "\0226\n\014sample_param\030\002 \001(\0132 .apollo.relative"
  "_map.SampleParam"
  ;
static ::_pbi::once_flag descriptor_table_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto = {
    false, false, 456, descriptor_table_protodef_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto,
    "modules/map/relative_map/proto/navigator_config.proto",
    &descriptor_table_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto::offsets,
    file_level_metadata_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto, file_level_enum_descriptors_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto,
    file_level_service_descriptors_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto_getter() {
  return &descriptor_table_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto(&descriptor_table_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto);
namespace apollo {
namespace relative_map {

// ===================================================================

class SampleParam::_Internal {
 public:
  using HasBits = decltype(std::declval<SampleParam>()._impl_._has_bits_);
  static void set_has_straight_sample_interval(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_small_kappa_sample_interval(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_middle_kappa_sample_interval(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_large_kappa_sample_interval(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_small_kappa(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_middle_kappa(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_large_kappa(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
};

SampleParam::SampleParam(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:apollo.relative_map.SampleParam)
}
SampleParam::SampleParam(const SampleParam& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SampleParam* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.straight_sample_interval_){}
    , decltype(_impl_.small_kappa_sample_interval_){}
    , decltype(_impl_.middle_kappa_sample_interval_){}
    , decltype(_impl_.large_kappa_sample_interval_){}
    , decltype(_impl_.small_kappa_){}
    , decltype(_impl_.middle_kappa_){}
    , decltype(_impl_.large_kappa_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.straight_sample_interval_, &from._impl_.straight_sample_interval_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.large_kappa_) -
    reinterpret_cast<char*>(&_impl_.straight_sample_interval_)) + sizeof(_impl_.large_kappa_));
  // @@protoc_insertion_point(copy_constructor:apollo.relative_map.SampleParam)
}

inline void SampleParam::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.straight_sample_interval_){3}
    , decltype(_impl_.small_kappa_sample_interval_){1}
    , decltype(_impl_.middle_kappa_sample_interval_){0.4}
    , decltype(_impl_.large_kappa_sample_interval_){0.1}
    , decltype(_impl_.small_kappa_){0.002}
    , decltype(_impl_.middle_kappa_){0.008}
    , decltype(_impl_.large_kappa_){0.02}
  };
}

SampleParam::~SampleParam() {
  // @@protoc_insertion_point(destructor:apollo.relative_map.SampleParam)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SampleParam::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void SampleParam::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SampleParam::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.relative_map.SampleParam)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000007fu) {
    _impl_.straight_sample_interval_ = 3;
    _impl_.small_kappa_sample_interval_ = 1;
    _impl_.middle_kappa_sample_interval_ = 0.4;
    _impl_.large_kappa_sample_interval_ = 0.1;
    _impl_.small_kappa_ = 0.002;
    _impl_.middle_kappa_ = 0.008;
    _impl_.large_kappa_ = 0.02;
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SampleParam::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional double straight_sample_interval = 1 [default = 3];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 9)) {
          _Internal::set_has_straight_sample_interval(&has_bits);
          _impl_.straight_sample_interval_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // optional double small_kappa_sample_interval = 2 [default = 1];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 17)) {
          _Internal::set_has_small_kappa_sample_interval(&has_bits);
          _impl_.small_kappa_sample_interval_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // optional double middle_kappa_sample_interval = 3 [default = 0.4];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 25)) {
          _Internal::set_has_middle_kappa_sample_interval(&has_bits);
          _impl_.middle_kappa_sample_interval_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // optional double large_kappa_sample_interval = 4 [default = 0.1];
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 33)) {
          _Internal::set_has_large_kappa_sample_interval(&has_bits);
          _impl_.large_kappa_sample_interval_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // optional double small_kappa = 5 [default = 0.002];
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 41)) {
          _Internal::set_has_small_kappa(&has_bits);
          _impl_.small_kappa_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // optional double middle_kappa = 6 [default = 0.008];
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 49)) {
          _Internal::set_has_middle_kappa(&has_bits);
          _impl_.middle_kappa_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // optional double large_kappa = 7 [default = 0.02];
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 57)) {
          _Internal::set_has_large_kappa(&has_bits);
          _impl_.large_kappa_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
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

uint8_t* SampleParam::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.relative_map.SampleParam)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional double straight_sample_interval = 1 [default = 3];
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(1, this->_internal_straight_sample_interval(), target);
  }

  // optional double small_kappa_sample_interval = 2 [default = 1];
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(2, this->_internal_small_kappa_sample_interval(), target);
  }

  // optional double middle_kappa_sample_interval = 3 [default = 0.4];
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(3, this->_internal_middle_kappa_sample_interval(), target);
  }

  // optional double large_kappa_sample_interval = 4 [default = 0.1];
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(4, this->_internal_large_kappa_sample_interval(), target);
  }

  // optional double small_kappa = 5 [default = 0.002];
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(5, this->_internal_small_kappa(), target);
  }

  // optional double middle_kappa = 6 [default = 0.008];
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(6, this->_internal_middle_kappa(), target);
  }

  // optional double large_kappa = 7 [default = 0.02];
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(7, this->_internal_large_kappa(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.relative_map.SampleParam)
  return target;
}

size_t SampleParam::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.relative_map.SampleParam)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000007fu) {
    // optional double straight_sample_interval = 1 [default = 3];
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + 8;
    }

    // optional double small_kappa_sample_interval = 2 [default = 1];
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + 8;
    }

    // optional double middle_kappa_sample_interval = 3 [default = 0.4];
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + 8;
    }

    // optional double large_kappa_sample_interval = 4 [default = 0.1];
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 8;
    }

    // optional double small_kappa = 5 [default = 0.002];
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 + 8;
    }

    // optional double middle_kappa = 6 [default = 0.008];
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 + 8;
    }

    // optional double large_kappa = 7 [default = 0.02];
    if (cached_has_bits & 0x00000040u) {
      total_size += 1 + 8;
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SampleParam::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SampleParam::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SampleParam::GetClassData() const { return &_class_data_; }


void SampleParam::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SampleParam*>(&to_msg);
  auto& from = static_cast<const SampleParam&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:apollo.relative_map.SampleParam)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000007fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.straight_sample_interval_ = from._impl_.straight_sample_interval_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.small_kappa_sample_interval_ = from._impl_.small_kappa_sample_interval_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.middle_kappa_sample_interval_ = from._impl_.middle_kappa_sample_interval_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.large_kappa_sample_interval_ = from._impl_.large_kappa_sample_interval_;
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.small_kappa_ = from._impl_.small_kappa_;
    }
    if (cached_has_bits & 0x00000020u) {
      _this->_impl_.middle_kappa_ = from._impl_.middle_kappa_;
    }
    if (cached_has_bits & 0x00000040u) {
      _this->_impl_.large_kappa_ = from._impl_.large_kappa_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SampleParam::CopyFrom(const SampleParam& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.relative_map.SampleParam)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SampleParam::IsInitialized() const {
  return true;
}

void SampleParam::InternalSwap(SampleParam* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  swap(_impl_.straight_sample_interval_, other->_impl_.straight_sample_interval_);
  swap(_impl_.small_kappa_sample_interval_, other->_impl_.small_kappa_sample_interval_);
  swap(_impl_.middle_kappa_sample_interval_, other->_impl_.middle_kappa_sample_interval_);
  swap(_impl_.large_kappa_sample_interval_, other->_impl_.large_kappa_sample_interval_);
  swap(_impl_.small_kappa_, other->_impl_.small_kappa_);
  swap(_impl_.middle_kappa_, other->_impl_.middle_kappa_);
  swap(_impl_.large_kappa_, other->_impl_.large_kappa_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SampleParam::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto_getter, &descriptor_table_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto_once,
      file_level_metadata_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto[0]);
}

// ===================================================================

class NavigatorConfig::_Internal {
 public:
  using HasBits = decltype(std::declval<NavigatorConfig>()._impl_._has_bits_);
  static void set_has_enable_navigator_downsample(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static const ::apollo::relative_map::SampleParam& sample_param(const NavigatorConfig* msg);
  static void set_has_sample_param(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::apollo::relative_map::SampleParam&
NavigatorConfig::_Internal::sample_param(const NavigatorConfig* msg) {
  return *msg->_impl_.sample_param_;
}
NavigatorConfig::NavigatorConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:apollo.relative_map.NavigatorConfig)
}
NavigatorConfig::NavigatorConfig(const NavigatorConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  NavigatorConfig* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.sample_param_){nullptr}
    , decltype(_impl_.enable_navigator_downsample_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_sample_param()) {
    _this->_impl_.sample_param_ = new ::apollo::relative_map::SampleParam(*from._impl_.sample_param_);
  }
  _this->_impl_.enable_navigator_downsample_ = from._impl_.enable_navigator_downsample_;
  // @@protoc_insertion_point(copy_constructor:apollo.relative_map.NavigatorConfig)
}

inline void NavigatorConfig::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.sample_param_){nullptr}
    , decltype(_impl_.enable_navigator_downsample_){true}
  };
}

NavigatorConfig::~NavigatorConfig() {
  // @@protoc_insertion_point(destructor:apollo.relative_map.NavigatorConfig)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void NavigatorConfig::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.sample_param_;
}

void NavigatorConfig::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void NavigatorConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.relative_map.NavigatorConfig)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(_impl_.sample_param_ != nullptr);
      _impl_.sample_param_->Clear();
    }
    _impl_.enable_navigator_downsample_ = true;
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* NavigatorConfig::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional bool enable_navigator_downsample = 1 [default = true];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_enable_navigator_downsample(&has_bits);
          _impl_.enable_navigator_downsample_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .apollo.relative_map.SampleParam sample_param = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_sample_param(), ptr);
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

uint8_t* NavigatorConfig::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.relative_map.NavigatorConfig)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional bool enable_navigator_downsample = 1 [default = true];
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(1, this->_internal_enable_navigator_downsample(), target);
  }

  // optional .apollo.relative_map.SampleParam sample_param = 2;
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::sample_param(this),
        _Internal::sample_param(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.relative_map.NavigatorConfig)
  return target;
}

size_t NavigatorConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.relative_map.NavigatorConfig)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional .apollo.relative_map.SampleParam sample_param = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.sample_param_);
    }

    // optional bool enable_navigator_downsample = 1 [default = true];
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + 1;
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData NavigatorConfig::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    NavigatorConfig::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*NavigatorConfig::GetClassData() const { return &_class_data_; }


void NavigatorConfig::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<NavigatorConfig*>(&to_msg);
  auto& from = static_cast<const NavigatorConfig&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:apollo.relative_map.NavigatorConfig)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_mutable_sample_param()->::apollo::relative_map::SampleParam::MergeFrom(
          from._internal_sample_param());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.enable_navigator_downsample_ = from._impl_.enable_navigator_downsample_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void NavigatorConfig::CopyFrom(const NavigatorConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.relative_map.NavigatorConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NavigatorConfig::IsInitialized() const {
  return true;
}

void NavigatorConfig::InternalSwap(NavigatorConfig* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  swap(_impl_.sample_param_, other->_impl_.sample_param_);
  swap(_impl_.enable_navigator_downsample_, other->_impl_.enable_navigator_downsample_);
}

::PROTOBUF_NAMESPACE_ID::Metadata NavigatorConfig::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto_getter, &descriptor_table_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto_once,
      file_level_metadata_modules_2fmap_2frelative_5fmap_2fproto_2fnavigator_5fconfig_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace relative_map
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::relative_map::SampleParam*
Arena::CreateMaybeMessage< ::apollo::relative_map::SampleParam >(Arena* arena) {
  return Arena::CreateMessageInternal< ::apollo::relative_map::SampleParam >(arena);
}
template<> PROTOBUF_NOINLINE ::apollo::relative_map::NavigatorConfig*
Arena::CreateMaybeMessage< ::apollo::relative_map::NavigatorConfig >(Arena* arena) {
  return Arena::CreateMessageInternal< ::apollo::relative_map::NavigatorConfig >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>