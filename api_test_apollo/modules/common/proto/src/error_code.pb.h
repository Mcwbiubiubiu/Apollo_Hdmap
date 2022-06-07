// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: error_code.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_error_5fcode_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_error_5fcode_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_error_5fcode_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_error_5fcode_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_error_5fcode_2eproto;
namespace apollo {
namespace common {
class StatusPb;
struct StatusPbDefaultTypeInternal;
extern StatusPbDefaultTypeInternal _StatusPb_default_instance_;
}  // namespace common
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> ::apollo::common::StatusPb* Arena::CreateMaybeMessage<::apollo::common::StatusPb>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace apollo {
namespace common {

enum ErrorCode : int {
  OK = 0,
  CONTROL_ERROR = 1000,
  CONTROL_INIT_ERROR = 1001,
  CONTROL_COMPUTE_ERROR = 1002,
  CONTROL_ESTOP_ERROR = 1003,
  CANBUS_ERROR = 2000,
  CAN_CLIENT_ERROR_BASE = 2100,
  CAN_CLIENT_ERROR_OPEN_DEVICE_FAILED = 2101,
  CAN_CLIENT_ERROR_FRAME_NUM = 2102,
  CAN_CLIENT_ERROR_SEND_FAILED = 2103,
  CAN_CLIENT_ERROR_RECV_FAILED = 2104,
  LOCALIZATION_ERROR = 3000,
  LOCALIZATION_ERROR_MSG = 3100,
  LOCALIZATION_ERROR_LIDAR = 3200,
  LOCALIZATION_ERROR_INTEG = 3300,
  LOCALIZATION_ERROR_GNSS = 3400,
  PERCEPTION_ERROR = 4000,
  PERCEPTION_ERROR_TF = 4001,
  PERCEPTION_ERROR_PROCESS = 4002,
  PERCEPTION_FATAL = 4003,
  PERCEPTION_ERROR_NONE = 4004,
  PERCEPTION_ERROR_UNKNOWN = 4005,
  PREDICTION_ERROR = 5000,
  PLANNING_ERROR = 6000,
  PLANNING_ERROR_NOT_READY = 6001,
  HDMAP_DATA_ERROR = 7000,
  ROUTING_ERROR = 8000,
  ROUTING_ERROR_REQUEST = 8001,
  ROUTING_ERROR_RESPONSE = 8002,
  ROUTING_ERROR_NOT_READY = 8003,
  END_OF_INPUT = 9000,
  HTTP_LOGIC_ERROR = 10000,
  HTTP_RUNTIME_ERROR = 10001,
  RELATIVE_MAP_ERROR = 11000,
  RELATIVE_MAP_NOT_READY = 11001,
  DRIVER_ERROR_GNSS = 12000,
  DRIVER_ERROR_VELODYNE = 13000,
  STORYTELLING_ERROR = 14000
};
bool ErrorCode_IsValid(int value);
constexpr ErrorCode ErrorCode_MIN = OK;
constexpr ErrorCode ErrorCode_MAX = STORYTELLING_ERROR;
constexpr int ErrorCode_ARRAYSIZE = ErrorCode_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ErrorCode_descriptor();
template<typename T>
inline const std::string& ErrorCode_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ErrorCode>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ErrorCode_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ErrorCode_descriptor(), enum_t_value);
}
inline bool ErrorCode_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ErrorCode* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ErrorCode>(
    ErrorCode_descriptor(), name, value);
}
// ===================================================================

class StatusPb final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.common.StatusPb) */ {
 public:
  inline StatusPb() : StatusPb(nullptr) {}
  ~StatusPb() override;
  explicit PROTOBUF_CONSTEXPR StatusPb(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  StatusPb(const StatusPb& from);
  StatusPb(StatusPb&& from) noexcept
    : StatusPb() {
    *this = ::std::move(from);
  }

  inline StatusPb& operator=(const StatusPb& from) {
    CopyFrom(from);
    return *this;
  }
  inline StatusPb& operator=(StatusPb&& from) noexcept {
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
  static const StatusPb& default_instance() {
    return *internal_default_instance();
  }
  static inline const StatusPb* internal_default_instance() {
    return reinterpret_cast<const StatusPb*>(
               &_StatusPb_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(StatusPb& a, StatusPb& b) {
    a.Swap(&b);
  }
  inline void Swap(StatusPb* other) {
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
  void UnsafeArenaSwap(StatusPb* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  StatusPb* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<StatusPb>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const StatusPb& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const StatusPb& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
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
  void InternalSwap(StatusPb* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.common.StatusPb";
  }
  protected:
  explicit StatusPb(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMsgFieldNumber = 2,
    kErrorCodeFieldNumber = 1,
  };
  // optional string msg = 2;
  bool has_msg() const;
  private:
  bool _internal_has_msg() const;
  public:
  void clear_msg();
  const std::string& msg() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_msg(ArgT0&& arg0, ArgT... args);
  std::string* mutable_msg();
  PROTOBUF_NODISCARD std::string* release_msg();
  void set_allocated_msg(std::string* msg);
  private:
  const std::string& _internal_msg() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_msg(const std::string& value);
  std::string* _internal_mutable_msg();
  public:

  // optional .apollo.common.ErrorCode error_code = 1 [default = OK];
  bool has_error_code() const;
  private:
  bool _internal_has_error_code() const;
  public:
  void clear_error_code();
  ::apollo::common::ErrorCode error_code() const;
  void set_error_code(::apollo::common::ErrorCode value);
  private:
  ::apollo::common::ErrorCode _internal_error_code() const;
  void _internal_set_error_code(::apollo::common::ErrorCode value);
  public:

  // @@protoc_insertion_point(class_scope:apollo.common.StatusPb)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr msg_;
    int error_code_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_error_5fcode_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// StatusPb

// optional .apollo.common.ErrorCode error_code = 1 [default = OK];
inline bool StatusPb::_internal_has_error_code() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool StatusPb::has_error_code() const {
  return _internal_has_error_code();
}
inline void StatusPb::clear_error_code() {
  _impl_.error_code_ = 0;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::apollo::common::ErrorCode StatusPb::_internal_error_code() const {
  return static_cast< ::apollo::common::ErrorCode >(_impl_.error_code_);
}
inline ::apollo::common::ErrorCode StatusPb::error_code() const {
  // @@protoc_insertion_point(field_get:apollo.common.StatusPb.error_code)
  return _internal_error_code();
}
inline void StatusPb::_internal_set_error_code(::apollo::common::ErrorCode value) {
  assert(::apollo::common::ErrorCode_IsValid(value));
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.error_code_ = value;
}
inline void StatusPb::set_error_code(::apollo::common::ErrorCode value) {
  _internal_set_error_code(value);
  // @@protoc_insertion_point(field_set:apollo.common.StatusPb.error_code)
}

// optional string msg = 2;
inline bool StatusPb::_internal_has_msg() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool StatusPb::has_msg() const {
  return _internal_has_msg();
}
inline void StatusPb::clear_msg() {
  _impl_.msg_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& StatusPb::msg() const {
  // @@protoc_insertion_point(field_get:apollo.common.StatusPb.msg)
  return _internal_msg();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void StatusPb::set_msg(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.msg_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:apollo.common.StatusPb.msg)
}
inline std::string* StatusPb::mutable_msg() {
  std::string* _s = _internal_mutable_msg();
  // @@protoc_insertion_point(field_mutable:apollo.common.StatusPb.msg)
  return _s;
}
inline const std::string& StatusPb::_internal_msg() const {
  return _impl_.msg_.Get();
}
inline void StatusPb::_internal_set_msg(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.msg_.Set(value, GetArenaForAllocation());
}
inline std::string* StatusPb::_internal_mutable_msg() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.msg_.Mutable(GetArenaForAllocation());
}
inline std::string* StatusPb::release_msg() {
  // @@protoc_insertion_point(field_release:apollo.common.StatusPb.msg)
  if (!_internal_has_msg()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* p = _impl_.msg_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.msg_.IsDefault()) {
    _impl_.msg_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void StatusPb::set_allocated_msg(std::string* msg) {
  if (msg != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.msg_.SetAllocated(msg, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.msg_.IsDefault()) {
    _impl_.msg_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:apollo.common.StatusPb.msg)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace common
}  // namespace apollo

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::apollo::common::ErrorCode> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::common::ErrorCode>() {
  return ::apollo::common::ErrorCode_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_error_5fcode_2eproto
