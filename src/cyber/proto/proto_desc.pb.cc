// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cyber/proto/proto_desc.proto

#include "cyber/proto/proto_desc.pb.h"

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
namespace cyber {
namespace proto {
PROTOBUF_CONSTEXPR ProtoDesc::ProtoDesc(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.dependencies_)*/{}
  , /*decltype(_impl_.desc_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}} {}
struct ProtoDescDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ProtoDescDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ProtoDescDefaultTypeInternal() {}
  union {
    ProtoDesc _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ProtoDescDefaultTypeInternal _ProtoDesc_default_instance_;
}  // namespace proto
}  // namespace cyber
}  // namespace apollo
static ::_pb::Metadata file_level_metadata_cyber_2fproto_2fproto_5fdesc_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_cyber_2fproto_2fproto_5fdesc_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_cyber_2fproto_2fproto_5fdesc_2eproto = nullptr;

const uint32_t TableStruct_cyber_2fproto_2fproto_5fdesc_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::ProtoDesc, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::ProtoDesc, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::ProtoDesc, _impl_.desc_),
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::ProtoDesc, _impl_.dependencies_),
  0,
  ~0u,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, -1, sizeof(::apollo::cyber::proto::ProtoDesc)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::apollo::cyber::proto::_ProtoDesc_default_instance_._instance,
};

const char descriptor_table_protodef_cyber_2fproto_2fproto_5fdesc_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\034cyber/proto/proto_desc.proto\022\022apollo.c"
  "yber.proto\"N\n\tProtoDesc\022\014\n\004desc\030\001 \001(\014\0223\n"
  "\014dependencies\030\002 \003(\0132\035.apollo.cyber.proto"
  ".ProtoDesc"
  ;
static ::_pbi::once_flag descriptor_table_cyber_2fproto_2fproto_5fdesc_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_cyber_2fproto_2fproto_5fdesc_2eproto = {
    false, false, 130, descriptor_table_protodef_cyber_2fproto_2fproto_5fdesc_2eproto,
    "cyber/proto/proto_desc.proto",
    &descriptor_table_cyber_2fproto_2fproto_5fdesc_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_cyber_2fproto_2fproto_5fdesc_2eproto::offsets,
    file_level_metadata_cyber_2fproto_2fproto_5fdesc_2eproto, file_level_enum_descriptors_cyber_2fproto_2fproto_5fdesc_2eproto,
    file_level_service_descriptors_cyber_2fproto_2fproto_5fdesc_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_cyber_2fproto_2fproto_5fdesc_2eproto_getter() {
  return &descriptor_table_cyber_2fproto_2fproto_5fdesc_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_cyber_2fproto_2fproto_5fdesc_2eproto(&descriptor_table_cyber_2fproto_2fproto_5fdesc_2eproto);
namespace apollo {
namespace cyber {
namespace proto {

// ===================================================================

class ProtoDesc::_Internal {
 public:
  using HasBits = decltype(std::declval<ProtoDesc>()._impl_._has_bits_);
  static void set_has_desc(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

ProtoDesc::ProtoDesc(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:apollo.cyber.proto.ProtoDesc)
}
ProtoDesc::ProtoDesc(const ProtoDesc& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ProtoDesc* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.dependencies_){from._impl_.dependencies_}
    , decltype(_impl_.desc_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.desc_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.desc_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_desc()) {
    _this->_impl_.desc_.Set(from._internal_desc(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:apollo.cyber.proto.ProtoDesc)
}

inline void ProtoDesc::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.dependencies_){arena}
    , decltype(_impl_.desc_){}
  };
  _impl_.desc_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.desc_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

ProtoDesc::~ProtoDesc() {
  // @@protoc_insertion_point(destructor:apollo.cyber.proto.ProtoDesc)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ProtoDesc::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.dependencies_.~RepeatedPtrField();
  _impl_.desc_.Destroy();
}

void ProtoDesc::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ProtoDesc::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.cyber.proto.ProtoDesc)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.dependencies_.Clear();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    _impl_.desc_.ClearNonDefaultToEmpty();
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ProtoDesc::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional bytes desc = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_desc();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .apollo.cyber.proto.ProtoDesc dependencies = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_dependencies(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
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

uint8_t* ProtoDesc::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.cyber.proto.ProtoDesc)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional bytes desc = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_desc(), target);
  }

  // repeated .apollo.cyber.proto.ProtoDesc dependencies = 2;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_dependencies_size()); i < n; i++) {
    const auto& repfield = this->_internal_dependencies(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(2, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.cyber.proto.ProtoDesc)
  return target;
}

size_t ProtoDesc::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.cyber.proto.ProtoDesc)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .apollo.cyber.proto.ProtoDesc dependencies = 2;
  total_size += 1UL * this->_internal_dependencies_size();
  for (const auto& msg : this->_impl_.dependencies_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // optional bytes desc = 1;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_desc());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ProtoDesc::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ProtoDesc::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ProtoDesc::GetClassData() const { return &_class_data_; }


void ProtoDesc::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ProtoDesc*>(&to_msg);
  auto& from = static_cast<const ProtoDesc&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:apollo.cyber.proto.ProtoDesc)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.dependencies_.MergeFrom(from._impl_.dependencies_);
  if (from._internal_has_desc()) {
    _this->_internal_set_desc(from._internal_desc());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ProtoDesc::CopyFrom(const ProtoDesc& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.cyber.proto.ProtoDesc)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProtoDesc::IsInitialized() const {
  return true;
}

void ProtoDesc::InternalSwap(ProtoDesc* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _impl_.dependencies_.InternalSwap(&other->_impl_.dependencies_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.desc_, lhs_arena,
      &other->_impl_.desc_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata ProtoDesc::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_cyber_2fproto_2fproto_5fdesc_2eproto_getter, &descriptor_table_cyber_2fproto_2fproto_5fdesc_2eproto_once,
      file_level_metadata_cyber_2fproto_2fproto_5fdesc_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace cyber
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::cyber::proto::ProtoDesc*
Arena::CreateMaybeMessage< ::apollo::cyber::proto::ProtoDesc >(Arena* arena) {
  return Arena::CreateMessageInternal< ::apollo::cyber::proto::ProtoDesc >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
