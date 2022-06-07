// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/perception/proto/ccrf_type_fusion_config.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_modules_2fperception_2fproto_2fccrf_5ftype_5ffusion_5fconfig_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_modules_2fperception_2fproto_2fccrf_5ftype_5ffusion_5fconfig_2eproto

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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_modules_2fperception_2fproto_2fccrf_5ftype_5ffusion_5fconfig_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_modules_2fperception_2fproto_2fccrf_5ftype_5ffusion_5fconfig_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fperception_2fproto_2fccrf_5ftype_5ffusion_5fconfig_2eproto;
namespace apollo {
namespace perception {
namespace lidar {
class CcrfTypeFusionConfig;
struct CcrfTypeFusionConfigDefaultTypeInternal;
extern CcrfTypeFusionConfigDefaultTypeInternal _CcrfTypeFusionConfig_default_instance_;
}  // namespace lidar
}  // namespace perception
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> ::apollo::perception::lidar::CcrfTypeFusionConfig* Arena::CreateMaybeMessage<::apollo::perception::lidar::CcrfTypeFusionConfig>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace apollo {
namespace perception {
namespace lidar {

// ===================================================================

class CcrfTypeFusionConfig final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.perception.lidar.CcrfTypeFusionConfig) */ {
 public:
  inline CcrfTypeFusionConfig() : CcrfTypeFusionConfig(nullptr) {}
  ~CcrfTypeFusionConfig() override;
  explicit PROTOBUF_CONSTEXPR CcrfTypeFusionConfig(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CcrfTypeFusionConfig(const CcrfTypeFusionConfig& from);
  CcrfTypeFusionConfig(CcrfTypeFusionConfig&& from) noexcept
    : CcrfTypeFusionConfig() {
    *this = ::std::move(from);
  }

  inline CcrfTypeFusionConfig& operator=(const CcrfTypeFusionConfig& from) {
    CopyFrom(from);
    return *this;
  }
  inline CcrfTypeFusionConfig& operator=(CcrfTypeFusionConfig&& from) noexcept {
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
  static const CcrfTypeFusionConfig& default_instance() {
    return *internal_default_instance();
  }
  static inline const CcrfTypeFusionConfig* internal_default_instance() {
    return reinterpret_cast<const CcrfTypeFusionConfig*>(
               &_CcrfTypeFusionConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CcrfTypeFusionConfig& a, CcrfTypeFusionConfig& b) {
    a.Swap(&b);
  }
  inline void Swap(CcrfTypeFusionConfig* other) {
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
  void UnsafeArenaSwap(CcrfTypeFusionConfig* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CcrfTypeFusionConfig* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<CcrfTypeFusionConfig>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const CcrfTypeFusionConfig& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const CcrfTypeFusionConfig& from);
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
  void InternalSwap(CcrfTypeFusionConfig* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.perception.lidar.CcrfTypeFusionConfig";
  }
  protected:
  explicit CcrfTypeFusionConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kClassifiersPropertyFilePathFieldNumber = 1,
    kTransitionPropertyFilePathFieldNumber = 2,
    kTransitionMatrixAlphaFieldNumber = 3,
  };
  // optional string classifiers_property_file_path = 1 [default = ""];
  bool has_classifiers_property_file_path() const;
  private:
  bool _internal_has_classifiers_property_file_path() const;
  public:
  void clear_classifiers_property_file_path();
  const std::string& classifiers_property_file_path() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_classifiers_property_file_path(ArgT0&& arg0, ArgT... args);
  std::string* mutable_classifiers_property_file_path();
  PROTOBUF_NODISCARD std::string* release_classifiers_property_file_path();
  void set_allocated_classifiers_property_file_path(std::string* classifiers_property_file_path);
  private:
  const std::string& _internal_classifiers_property_file_path() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_classifiers_property_file_path(const std::string& value);
  std::string* _internal_mutable_classifiers_property_file_path();
  public:

  // optional string transition_property_file_path = 2 [default = ""];
  bool has_transition_property_file_path() const;
  private:
  bool _internal_has_transition_property_file_path() const;
  public:
  void clear_transition_property_file_path();
  const std::string& transition_property_file_path() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_transition_property_file_path(ArgT0&& arg0, ArgT... args);
  std::string* mutable_transition_property_file_path();
  PROTOBUF_NODISCARD std::string* release_transition_property_file_path();
  void set_allocated_transition_property_file_path(std::string* transition_property_file_path);
  private:
  const std::string& _internal_transition_property_file_path() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_transition_property_file_path(const std::string& value);
  std::string* _internal_mutable_transition_property_file_path();
  public:

  // optional float transition_matrix_alpha = 3 [default = 1.8];
  bool has_transition_matrix_alpha() const;
  private:
  bool _internal_has_transition_matrix_alpha() const;
  public:
  void clear_transition_matrix_alpha();
  float transition_matrix_alpha() const;
  void set_transition_matrix_alpha(float value);
  private:
  float _internal_transition_matrix_alpha() const;
  void _internal_set_transition_matrix_alpha(float value);
  public:

  // @@protoc_insertion_point(class_scope:apollo.perception.lidar.CcrfTypeFusionConfig)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr classifiers_property_file_path_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr transition_property_file_path_;
    float transition_matrix_alpha_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_modules_2fperception_2fproto_2fccrf_5ftype_5ffusion_5fconfig_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CcrfTypeFusionConfig

// optional string classifiers_property_file_path = 1 [default = ""];
inline bool CcrfTypeFusionConfig::_internal_has_classifiers_property_file_path() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool CcrfTypeFusionConfig::has_classifiers_property_file_path() const {
  return _internal_has_classifiers_property_file_path();
}
inline void CcrfTypeFusionConfig::clear_classifiers_property_file_path() {
  _impl_.classifiers_property_file_path_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& CcrfTypeFusionConfig::classifiers_property_file_path() const {
  // @@protoc_insertion_point(field_get:apollo.perception.lidar.CcrfTypeFusionConfig.classifiers_property_file_path)
  return _internal_classifiers_property_file_path();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void CcrfTypeFusionConfig::set_classifiers_property_file_path(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.classifiers_property_file_path_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:apollo.perception.lidar.CcrfTypeFusionConfig.classifiers_property_file_path)
}
inline std::string* CcrfTypeFusionConfig::mutable_classifiers_property_file_path() {
  std::string* _s = _internal_mutable_classifiers_property_file_path();
  // @@protoc_insertion_point(field_mutable:apollo.perception.lidar.CcrfTypeFusionConfig.classifiers_property_file_path)
  return _s;
}
inline const std::string& CcrfTypeFusionConfig::_internal_classifiers_property_file_path() const {
  return _impl_.classifiers_property_file_path_.Get();
}
inline void CcrfTypeFusionConfig::_internal_set_classifiers_property_file_path(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.classifiers_property_file_path_.Set(value, GetArenaForAllocation());
}
inline std::string* CcrfTypeFusionConfig::_internal_mutable_classifiers_property_file_path() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.classifiers_property_file_path_.Mutable(GetArenaForAllocation());
}
inline std::string* CcrfTypeFusionConfig::release_classifiers_property_file_path() {
  // @@protoc_insertion_point(field_release:apollo.perception.lidar.CcrfTypeFusionConfig.classifiers_property_file_path)
  if (!_internal_has_classifiers_property_file_path()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* p = _impl_.classifiers_property_file_path_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.classifiers_property_file_path_.IsDefault()) {
    _impl_.classifiers_property_file_path_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void CcrfTypeFusionConfig::set_allocated_classifiers_property_file_path(std::string* classifiers_property_file_path) {
  if (classifiers_property_file_path != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.classifiers_property_file_path_.SetAllocated(classifiers_property_file_path, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.classifiers_property_file_path_.IsDefault()) {
    _impl_.classifiers_property_file_path_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:apollo.perception.lidar.CcrfTypeFusionConfig.classifiers_property_file_path)
}

// optional string transition_property_file_path = 2 [default = ""];
inline bool CcrfTypeFusionConfig::_internal_has_transition_property_file_path() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool CcrfTypeFusionConfig::has_transition_property_file_path() const {
  return _internal_has_transition_property_file_path();
}
inline void CcrfTypeFusionConfig::clear_transition_property_file_path() {
  _impl_.transition_property_file_path_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline const std::string& CcrfTypeFusionConfig::transition_property_file_path() const {
  // @@protoc_insertion_point(field_get:apollo.perception.lidar.CcrfTypeFusionConfig.transition_property_file_path)
  return _internal_transition_property_file_path();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void CcrfTypeFusionConfig::set_transition_property_file_path(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000002u;
 _impl_.transition_property_file_path_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:apollo.perception.lidar.CcrfTypeFusionConfig.transition_property_file_path)
}
inline std::string* CcrfTypeFusionConfig::mutable_transition_property_file_path() {
  std::string* _s = _internal_mutable_transition_property_file_path();
  // @@protoc_insertion_point(field_mutable:apollo.perception.lidar.CcrfTypeFusionConfig.transition_property_file_path)
  return _s;
}
inline const std::string& CcrfTypeFusionConfig::_internal_transition_property_file_path() const {
  return _impl_.transition_property_file_path_.Get();
}
inline void CcrfTypeFusionConfig::_internal_set_transition_property_file_path(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.transition_property_file_path_.Set(value, GetArenaForAllocation());
}
inline std::string* CcrfTypeFusionConfig::_internal_mutable_transition_property_file_path() {
  _impl_._has_bits_[0] |= 0x00000002u;
  return _impl_.transition_property_file_path_.Mutable(GetArenaForAllocation());
}
inline std::string* CcrfTypeFusionConfig::release_transition_property_file_path() {
  // @@protoc_insertion_point(field_release:apollo.perception.lidar.CcrfTypeFusionConfig.transition_property_file_path)
  if (!_internal_has_transition_property_file_path()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000002u;
  auto* p = _impl_.transition_property_file_path_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.transition_property_file_path_.IsDefault()) {
    _impl_.transition_property_file_path_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void CcrfTypeFusionConfig::set_allocated_transition_property_file_path(std::string* transition_property_file_path) {
  if (transition_property_file_path != nullptr) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.transition_property_file_path_.SetAllocated(transition_property_file_path, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.transition_property_file_path_.IsDefault()) {
    _impl_.transition_property_file_path_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:apollo.perception.lidar.CcrfTypeFusionConfig.transition_property_file_path)
}

// optional float transition_matrix_alpha = 3 [default = 1.8];
inline bool CcrfTypeFusionConfig::_internal_has_transition_matrix_alpha() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool CcrfTypeFusionConfig::has_transition_matrix_alpha() const {
  return _internal_has_transition_matrix_alpha();
}
inline void CcrfTypeFusionConfig::clear_transition_matrix_alpha() {
  _impl_.transition_matrix_alpha_ = 1.8f;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline float CcrfTypeFusionConfig::_internal_transition_matrix_alpha() const {
  return _impl_.transition_matrix_alpha_;
}
inline float CcrfTypeFusionConfig::transition_matrix_alpha() const {
  // @@protoc_insertion_point(field_get:apollo.perception.lidar.CcrfTypeFusionConfig.transition_matrix_alpha)
  return _internal_transition_matrix_alpha();
}
inline void CcrfTypeFusionConfig::_internal_set_transition_matrix_alpha(float value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.transition_matrix_alpha_ = value;
}
inline void CcrfTypeFusionConfig::set_transition_matrix_alpha(float value) {
  _internal_set_transition_matrix_alpha(value);
  // @@protoc_insertion_point(field_set:apollo.perception.lidar.CcrfTypeFusionConfig.transition_matrix_alpha)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace lidar
}  // namespace perception
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_modules_2fperception_2fproto_2fccrf_5ftype_5ffusion_5fconfig_2eproto
