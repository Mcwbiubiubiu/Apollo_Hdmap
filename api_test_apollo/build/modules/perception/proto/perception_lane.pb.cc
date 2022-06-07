// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/perception/proto/perception_lane.proto

#include "modules/perception/proto/perception_lane.pb.h"

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
namespace perception {
PROTOBUF_CONSTEXPR PerceptionLanes::PerceptionLanes(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.camera_laneline_)*/{}
  , /*decltype(_impl_.source_topic_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.header_)*/nullptr
  , /*decltype(_impl_.camera_calibrator_)*/nullptr
  , /*decltype(_impl_.error_code_)*/0} {}
struct PerceptionLanesDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PerceptionLanesDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~PerceptionLanesDefaultTypeInternal() {}
  union {
    PerceptionLanes _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PerceptionLanesDefaultTypeInternal _PerceptionLanes_default_instance_;
}  // namespace perception
}  // namespace apollo
static ::_pb::Metadata file_level_metadata_modules_2fperception_2fproto_2fperception_5flane_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_modules_2fperception_2fproto_2fperception_5flane_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_modules_2fperception_2fproto_2fperception_5flane_2eproto = nullptr;

const uint32_t TableStruct_modules_2fperception_2fproto_2fperception_5flane_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::perception::PerceptionLanes, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::PerceptionLanes, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::apollo::perception::PerceptionLanes, _impl_.header_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::PerceptionLanes, _impl_.source_topic_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::PerceptionLanes, _impl_.error_code_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::PerceptionLanes, _impl_.camera_calibrator_),
  PROTOBUF_FIELD_OFFSET(::apollo::perception::PerceptionLanes, _impl_.camera_laneline_),
  1,
  0,
  3,
  2,
  ~0u,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 11, -1, sizeof(::apollo::perception::PerceptionLanes)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::apollo::perception::_PerceptionLanes_default_instance_._instance,
};

const char descriptor_table_protodef_modules_2fperception_2fproto_2fperception_5flane_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n.modules/perception/proto/perception_la"
  "ne.proto\022\021apollo.perception\032!modules/com"
  "mon/proto/header.proto\0320modules/percepti"
  "on/proto/perception_camera.proto\"\243\002\n\017Per"
  "ceptionLanes\022%\n\006header\030\001 \001(\0132\025.apollo.co"
  "mmon.Header\022\024\n\014source_topic\030\002 \001(\t\022I\n\nerr"
  "or_code\030\003 \001(\0162).apollo.perception.camera"
  ".CameraErrorCode:\nERROR_NONE\022E\n\021camera_c"
  "alibrator\030\004 \001(\0132*.apollo.perception.came"
  "ra.CameraCalibrator\022A\n\017camera_laneline\030\005"
  " \003(\0132(.apollo.perception.camera.CameraLa"
  "neLine"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_modules_2fperception_2fproto_2fperception_5flane_2eproto_deps[2] = {
  &::descriptor_table_modules_2fcommon_2fproto_2fheader_2eproto,
  &::descriptor_table_modules_2fperception_2fproto_2fperception_5fcamera_2eproto,
};
static ::_pbi::once_flag descriptor_table_modules_2fperception_2fproto_2fperception_5flane_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_modules_2fperception_2fproto_2fperception_5flane_2eproto = {
    false, false, 446, descriptor_table_protodef_modules_2fperception_2fproto_2fperception_5flane_2eproto,
    "modules/perception/proto/perception_lane.proto",
    &descriptor_table_modules_2fperception_2fproto_2fperception_5flane_2eproto_once, descriptor_table_modules_2fperception_2fproto_2fperception_5flane_2eproto_deps, 2, 1,
    schemas, file_default_instances, TableStruct_modules_2fperception_2fproto_2fperception_5flane_2eproto::offsets,
    file_level_metadata_modules_2fperception_2fproto_2fperception_5flane_2eproto, file_level_enum_descriptors_modules_2fperception_2fproto_2fperception_5flane_2eproto,
    file_level_service_descriptors_modules_2fperception_2fproto_2fperception_5flane_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_modules_2fperception_2fproto_2fperception_5flane_2eproto_getter() {
  return &descriptor_table_modules_2fperception_2fproto_2fperception_5flane_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_modules_2fperception_2fproto_2fperception_5flane_2eproto(&descriptor_table_modules_2fperception_2fproto_2fperception_5flane_2eproto);
namespace apollo {
namespace perception {

// ===================================================================

class PerceptionLanes::_Internal {
 public:
  using HasBits = decltype(std::declval<PerceptionLanes>()._impl_._has_bits_);
  static const ::apollo::common::Header& header(const PerceptionLanes* msg);
  static void set_has_header(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_source_topic(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_error_code(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static const ::apollo::perception::camera::CameraCalibrator& camera_calibrator(const PerceptionLanes* msg);
  static void set_has_camera_calibrator(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

const ::apollo::common::Header&
PerceptionLanes::_Internal::header(const PerceptionLanes* msg) {
  return *msg->_impl_.header_;
}
const ::apollo::perception::camera::CameraCalibrator&
PerceptionLanes::_Internal::camera_calibrator(const PerceptionLanes* msg) {
  return *msg->_impl_.camera_calibrator_;
}
void PerceptionLanes::clear_header() {
  if (_impl_.header_ != nullptr) _impl_.header_->Clear();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
void PerceptionLanes::clear_camera_calibrator() {
  if (_impl_.camera_calibrator_ != nullptr) _impl_.camera_calibrator_->Clear();
  _impl_._has_bits_[0] &= ~0x00000004u;
}
void PerceptionLanes::clear_camera_laneline() {
  _impl_.camera_laneline_.Clear();
}
PerceptionLanes::PerceptionLanes(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:apollo.perception.PerceptionLanes)
}
PerceptionLanes::PerceptionLanes(const PerceptionLanes& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.camera_laneline_){from._impl_.camera_laneline_}
    , decltype(_impl_.source_topic_){}
    , decltype(_impl_.header_){nullptr}
    , decltype(_impl_.camera_calibrator_){nullptr}
    , decltype(_impl_.error_code_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.source_topic_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.source_topic_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_source_topic()) {
    _impl_.source_topic_.Set(from._internal_source_topic(), 
      GetArenaForAllocation());
  }
  if (from._internal_has_header()) {
    _impl_.header_ = new ::apollo::common::Header(*from._impl_.header_);
  }
  if (from._internal_has_camera_calibrator()) {
    _impl_.camera_calibrator_ = new ::apollo::perception::camera::CameraCalibrator(*from._impl_.camera_calibrator_);
  }
  _impl_.error_code_ = from._impl_.error_code_;
  // @@protoc_insertion_point(copy_constructor:apollo.perception.PerceptionLanes)
}

inline void PerceptionLanes::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.camera_laneline_){arena}
    , decltype(_impl_.source_topic_){}
    , decltype(_impl_.header_){nullptr}
    , decltype(_impl_.camera_calibrator_){nullptr}
    , decltype(_impl_.error_code_){0}
  };
  _impl_.source_topic_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.source_topic_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

PerceptionLanes::~PerceptionLanes() {
  // @@protoc_insertion_point(destructor:apollo.perception.PerceptionLanes)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void PerceptionLanes::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.camera_laneline_.~RepeatedPtrField();
  _impl_.source_topic_.Destroy();
  if (this != internal_default_instance()) delete _impl_.header_;
  if (this != internal_default_instance()) delete _impl_.camera_calibrator_;
}

void PerceptionLanes::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void PerceptionLanes::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.perception.PerceptionLanes)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.camera_laneline_.Clear();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.source_topic_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(_impl_.header_ != nullptr);
      _impl_.header_->Clear();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(_impl_.camera_calibrator_ != nullptr);
      _impl_.camera_calibrator_->Clear();
    }
  }
  _impl_.error_code_ = 0;
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* PerceptionLanes::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
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
      // optional string source_topic = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_source_topic();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "apollo.perception.PerceptionLanes.source_topic");
          #endif  // !NDEBUG
        } else
          goto handle_unusual;
        continue;
      // optional .apollo.perception.camera.CameraErrorCode error_code = 3 [default = ERROR_NONE];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::apollo::perception::camera::CameraErrorCode_IsValid(val))) {
            _internal_set_error_code(static_cast<::apollo::perception::camera::CameraErrorCode>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(3, val, mutable_unknown_fields());
          }
        } else
          goto handle_unusual;
        continue;
      // optional .apollo.perception.camera.CameraCalibrator camera_calibrator = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_camera_calibrator(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .apollo.perception.camera.CameraLaneLine camera_laneline = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_camera_laneline(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<42>(ptr));
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

uint8_t* PerceptionLanes::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.perception.PerceptionLanes)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional .apollo.common.Header header = 1;
  if (cached_has_bits & 0x00000002u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::header(this),
        _Internal::header(this).GetCachedSize(), target, stream);
  }

  // optional string source_topic = 2;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_source_topic().data(), static_cast<int>(this->_internal_source_topic().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "apollo.perception.PerceptionLanes.source_topic");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_source_topic(), target);
  }

  // optional .apollo.perception.camera.CameraErrorCode error_code = 3 [default = ERROR_NONE];
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      3, this->_internal_error_code(), target);
  }

  // optional .apollo.perception.camera.CameraCalibrator camera_calibrator = 4;
  if (cached_has_bits & 0x00000004u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(4, _Internal::camera_calibrator(this),
        _Internal::camera_calibrator(this).GetCachedSize(), target, stream);
  }

  // repeated .apollo.perception.camera.CameraLaneLine camera_laneline = 5;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_camera_laneline_size()); i < n; i++) {
    const auto& repfield = this->_internal_camera_laneline(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(5, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.perception.PerceptionLanes)
  return target;
}

size_t PerceptionLanes::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.perception.PerceptionLanes)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .apollo.perception.camera.CameraLaneLine camera_laneline = 5;
  total_size += 1UL * this->_internal_camera_laneline_size();
  for (const auto& msg : this->_impl_.camera_laneline_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    // optional string source_topic = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_source_topic());
    }

    // optional .apollo.common.Header header = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.header_);
    }

    // optional .apollo.perception.camera.CameraCalibrator camera_calibrator = 4;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.camera_calibrator_);
    }

    // optional .apollo.perception.camera.CameraErrorCode error_code = 3 [default = ERROR_NONE];
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::_pbi::WireFormatLite::EnumSize(this->_internal_error_code());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData PerceptionLanes::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    PerceptionLanes::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*PerceptionLanes::GetClassData() const { return &_class_data_; }

void PerceptionLanes::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<PerceptionLanes *>(to)->MergeFrom(
      static_cast<const PerceptionLanes &>(from));
}


void PerceptionLanes::MergeFrom(const PerceptionLanes& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.perception.PerceptionLanes)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _impl_.camera_laneline_.MergeFrom(from._impl_.camera_laneline_);
  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_source_topic(from._internal_source_topic());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_header()->::apollo::common::Header::MergeFrom(from._internal_header());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_mutable_camera_calibrator()->::apollo::perception::camera::CameraCalibrator::MergeFrom(from._internal_camera_calibrator());
    }
    if (cached_has_bits & 0x00000008u) {
      _impl_.error_code_ = from._impl_.error_code_;
    }
    _impl_._has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void PerceptionLanes::CopyFrom(const PerceptionLanes& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.perception.PerceptionLanes)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PerceptionLanes::IsInitialized() const {
  return true;
}

void PerceptionLanes::InternalSwap(PerceptionLanes* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _impl_.camera_laneline_.InternalSwap(&other->_impl_.camera_laneline_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.source_topic_, lhs_arena,
      &other->_impl_.source_topic_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(PerceptionLanes, _impl_.error_code_)
      + sizeof(PerceptionLanes::_impl_.error_code_)
      - PROTOBUF_FIELD_OFFSET(PerceptionLanes, _impl_.header_)>(
          reinterpret_cast<char*>(&_impl_.header_),
          reinterpret_cast<char*>(&other->_impl_.header_));
}

::PROTOBUF_NAMESPACE_ID::Metadata PerceptionLanes::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_modules_2fperception_2fproto_2fperception_5flane_2eproto_getter, &descriptor_table_modules_2fperception_2fproto_2fperception_5flane_2eproto_once,
      file_level_metadata_modules_2fperception_2fproto_2fperception_5flane_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace perception
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::perception::PerceptionLanes*
Arena::CreateMaybeMessage< ::apollo::perception::PerceptionLanes >(Arena* arena) {
  return Arena::CreateMessageInternal< ::apollo::perception::PerceptionLanes >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
