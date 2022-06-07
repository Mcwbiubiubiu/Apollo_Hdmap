// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/perception/proto/probabilistic_fusion_config.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_modules_2fperception_2fproto_2fprobabilistic_5ffusion_5fconfig_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_modules_2fperception_2fproto_2fprobabilistic_5ffusion_5fconfig_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_modules_2fperception_2fproto_2fprobabilistic_5ffusion_5fconfig_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_modules_2fperception_2fproto_2fprobabilistic_5ffusion_5fconfig_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fperception_2fproto_2fprobabilistic_5ffusion_5fconfig_2eproto;
namespace apollo {
namespace perception {
namespace fusion {
class ProbabilisticFusionConfig;
struct ProbabilisticFusionConfigDefaultTypeInternal;
extern ProbabilisticFusionConfigDefaultTypeInternal _ProbabilisticFusionConfig_default_instance_;
}  // namespace fusion
}  // namespace perception
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> ::apollo::perception::fusion::ProbabilisticFusionConfig* Arena::CreateMaybeMessage<::apollo::perception::fusion::ProbabilisticFusionConfig>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace apollo {
namespace perception {
namespace fusion {

// ===================================================================

class ProbabilisticFusionConfig final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.perception.fusion.ProbabilisticFusionConfig) */ {
 public:
  inline ProbabilisticFusionConfig() : ProbabilisticFusionConfig(nullptr) {}
  ~ProbabilisticFusionConfig() override;
  explicit PROTOBUF_CONSTEXPR ProbabilisticFusionConfig(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ProbabilisticFusionConfig(const ProbabilisticFusionConfig& from);
  ProbabilisticFusionConfig(ProbabilisticFusionConfig&& from) noexcept
    : ProbabilisticFusionConfig() {
    *this = ::std::move(from);
  }

  inline ProbabilisticFusionConfig& operator=(const ProbabilisticFusionConfig& from) {
    CopyFrom(from);
    return *this;
  }
  inline ProbabilisticFusionConfig& operator=(ProbabilisticFusionConfig&& from) noexcept {
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
  static const ProbabilisticFusionConfig& default_instance() {
    return *internal_default_instance();
  }
  static inline const ProbabilisticFusionConfig* internal_default_instance() {
    return reinterpret_cast<const ProbabilisticFusionConfig*>(
               &_ProbabilisticFusionConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ProbabilisticFusionConfig& a, ProbabilisticFusionConfig& b) {
    a.Swap(&b);
  }
  inline void Swap(ProbabilisticFusionConfig* other) {
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
  void UnsafeArenaSwap(ProbabilisticFusionConfig* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ProbabilisticFusionConfig* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ProbabilisticFusionConfig>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ProbabilisticFusionConfig& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const ProbabilisticFusionConfig& from);
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
  void InternalSwap(ProbabilisticFusionConfig* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.perception.fusion.ProbabilisticFusionConfig";
  }
  protected:
  explicit ProbabilisticFusionConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kProhibitionSensorsFieldNumber = 7,
    kTrackerMethodFieldNumber = 4,
    kDataAssociationMethodFieldNumber = 5,
    kGateKeeperMethodFieldNumber = 6,
    kUseLidarFieldNumber = 1,
    kUseRadarFieldNumber = 2,
    kUseCameraFieldNumber = 3,
    kMaxLidarInvisiblePeriodFieldNumber = 8,
    kMaxRadarInvisiblePeriodFieldNumber = 9,
    kMaxCameraInvisiblePeriodFieldNumber = 10,
    kMaxCachedFrameNumFieldNumber = 11,
  };
  // repeated string prohibition_sensors = 7;
  int prohibition_sensors_size() const;
  private:
  int _internal_prohibition_sensors_size() const;
  public:
  void clear_prohibition_sensors();
  const std::string& prohibition_sensors(int index) const;
  std::string* mutable_prohibition_sensors(int index);
  void set_prohibition_sensors(int index, const std::string& value);
  void set_prohibition_sensors(int index, std::string&& value);
  void set_prohibition_sensors(int index, const char* value);
  void set_prohibition_sensors(int index, const char* value, size_t size);
  std::string* add_prohibition_sensors();
  void add_prohibition_sensors(const std::string& value);
  void add_prohibition_sensors(std::string&& value);
  void add_prohibition_sensors(const char* value);
  void add_prohibition_sensors(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& prohibition_sensors() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_prohibition_sensors();
  private:
  const std::string& _internal_prohibition_sensors(int index) const;
  std::string* _internal_add_prohibition_sensors();
  public:

  // optional string tracker_method = 4 [default = "PbfTracker"];
  bool has_tracker_method() const;
  private:
  bool _internal_has_tracker_method() const;
  public:
  void clear_tracker_method();
  const std::string& tracker_method() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_tracker_method(ArgT0&& arg0, ArgT... args);
  std::string* mutable_tracker_method();
  PROTOBUF_NODISCARD std::string* release_tracker_method();
  void set_allocated_tracker_method(std::string* tracker_method);
  private:
  const std::string& _internal_tracker_method() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_tracker_method(const std::string& value);
  std::string* _internal_mutable_tracker_method();
  public:

  // optional string data_association_method = 5 [default = "HMAssociation"];
  bool has_data_association_method() const;
  private:
  bool _internal_has_data_association_method() const;
  public:
  void clear_data_association_method();
  const std::string& data_association_method() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_data_association_method(ArgT0&& arg0, ArgT... args);
  std::string* mutable_data_association_method();
  PROTOBUF_NODISCARD std::string* release_data_association_method();
  void set_allocated_data_association_method(std::string* data_association_method);
  private:
  const std::string& _internal_data_association_method() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_data_association_method(const std::string& value);
  std::string* _internal_mutable_data_association_method();
  public:

  // optional string gate_keeper_method = 6 [default = "PbfGatekeeper"];
  bool has_gate_keeper_method() const;
  private:
  bool _internal_has_gate_keeper_method() const;
  public:
  void clear_gate_keeper_method();
  const std::string& gate_keeper_method() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_gate_keeper_method(ArgT0&& arg0, ArgT... args);
  std::string* mutable_gate_keeper_method();
  PROTOBUF_NODISCARD std::string* release_gate_keeper_method();
  void set_allocated_gate_keeper_method(std::string* gate_keeper_method);
  private:
  const std::string& _internal_gate_keeper_method() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_gate_keeper_method(const std::string& value);
  std::string* _internal_mutable_gate_keeper_method();
  public:

  // optional bool use_lidar = 1 [default = true];
  bool has_use_lidar() const;
  private:
  bool _internal_has_use_lidar() const;
  public:
  void clear_use_lidar();
  bool use_lidar() const;
  void set_use_lidar(bool value);
  private:
  bool _internal_use_lidar() const;
  void _internal_set_use_lidar(bool value);
  public:

  // optional bool use_radar = 2 [default = true];
  bool has_use_radar() const;
  private:
  bool _internal_has_use_radar() const;
  public:
  void clear_use_radar();
  bool use_radar() const;
  void set_use_radar(bool value);
  private:
  bool _internal_use_radar() const;
  void _internal_set_use_radar(bool value);
  public:

  // optional bool use_camera = 3 [default = true];
  bool has_use_camera() const;
  private:
  bool _internal_has_use_camera() const;
  public:
  void clear_use_camera();
  bool use_camera() const;
  void set_use_camera(bool value);
  private:
  bool _internal_use_camera() const;
  void _internal_set_use_camera(bool value);
  public:

  // optional double max_lidar_invisible_period = 8 [default = 0.25];
  bool has_max_lidar_invisible_period() const;
  private:
  bool _internal_has_max_lidar_invisible_period() const;
  public:
  void clear_max_lidar_invisible_period();
  double max_lidar_invisible_period() const;
  void set_max_lidar_invisible_period(double value);
  private:
  double _internal_max_lidar_invisible_period() const;
  void _internal_set_max_lidar_invisible_period(double value);
  public:

  // optional double max_radar_invisible_period = 9 [default = 0.5];
  bool has_max_radar_invisible_period() const;
  private:
  bool _internal_has_max_radar_invisible_period() const;
  public:
  void clear_max_radar_invisible_period();
  double max_radar_invisible_period() const;
  void set_max_radar_invisible_period(double value);
  private:
  double _internal_max_radar_invisible_period() const;
  void _internal_set_max_radar_invisible_period(double value);
  public:

  // optional double max_camera_invisible_period = 10 [default = 0.75];
  bool has_max_camera_invisible_period() const;
  private:
  bool _internal_has_max_camera_invisible_period() const;
  public:
  void clear_max_camera_invisible_period();
  double max_camera_invisible_period() const;
  void set_max_camera_invisible_period(double value);
  private:
  double _internal_max_camera_invisible_period() const;
  void _internal_set_max_camera_invisible_period(double value);
  public:

  // optional int64 max_cached_frame_num = 11 [default = 50];
  bool has_max_cached_frame_num() const;
  private:
  bool _internal_has_max_cached_frame_num() const;
  public:
  void clear_max_cached_frame_num();
  int64_t max_cached_frame_num() const;
  void set_max_cached_frame_num(int64_t value);
  private:
  int64_t _internal_max_cached_frame_num() const;
  void _internal_set_max_cached_frame_num(int64_t value);
  public:

  // @@protoc_insertion_point(class_scope:apollo.perception.fusion.ProbabilisticFusionConfig)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> prohibition_sensors_;
    static const ::PROTOBUF_NAMESPACE_ID::internal::LazyString _i_give_permission_to_break_this_code_default_tracker_method_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr tracker_method_;
    static const ::PROTOBUF_NAMESPACE_ID::internal::LazyString _i_give_permission_to_break_this_code_default_data_association_method_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr data_association_method_;
    static const ::PROTOBUF_NAMESPACE_ID::internal::LazyString _i_give_permission_to_break_this_code_default_gate_keeper_method_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr gate_keeper_method_;
    bool use_lidar_;
    bool use_radar_;
    bool use_camera_;
    double max_lidar_invisible_period_;
    double max_radar_invisible_period_;
    double max_camera_invisible_period_;
    int64_t max_cached_frame_num_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_modules_2fperception_2fproto_2fprobabilistic_5ffusion_5fconfig_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ProbabilisticFusionConfig

// optional bool use_lidar = 1 [default = true];
inline bool ProbabilisticFusionConfig::_internal_has_use_lidar() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool ProbabilisticFusionConfig::has_use_lidar() const {
  return _internal_has_use_lidar();
}
inline void ProbabilisticFusionConfig::clear_use_lidar() {
  _impl_.use_lidar_ = true;
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline bool ProbabilisticFusionConfig::_internal_use_lidar() const {
  return _impl_.use_lidar_;
}
inline bool ProbabilisticFusionConfig::use_lidar() const {
  // @@protoc_insertion_point(field_get:apollo.perception.fusion.ProbabilisticFusionConfig.use_lidar)
  return _internal_use_lidar();
}
inline void ProbabilisticFusionConfig::_internal_set_use_lidar(bool value) {
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.use_lidar_ = value;
}
inline void ProbabilisticFusionConfig::set_use_lidar(bool value) {
  _internal_set_use_lidar(value);
  // @@protoc_insertion_point(field_set:apollo.perception.fusion.ProbabilisticFusionConfig.use_lidar)
}

// optional bool use_radar = 2 [default = true];
inline bool ProbabilisticFusionConfig::_internal_has_use_radar() const {
  bool value = (_impl_._has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool ProbabilisticFusionConfig::has_use_radar() const {
  return _internal_has_use_radar();
}
inline void ProbabilisticFusionConfig::clear_use_radar() {
  _impl_.use_radar_ = true;
  _impl_._has_bits_[0] &= ~0x00000010u;
}
inline bool ProbabilisticFusionConfig::_internal_use_radar() const {
  return _impl_.use_radar_;
}
inline bool ProbabilisticFusionConfig::use_radar() const {
  // @@protoc_insertion_point(field_get:apollo.perception.fusion.ProbabilisticFusionConfig.use_radar)
  return _internal_use_radar();
}
inline void ProbabilisticFusionConfig::_internal_set_use_radar(bool value) {
  _impl_._has_bits_[0] |= 0x00000010u;
  _impl_.use_radar_ = value;
}
inline void ProbabilisticFusionConfig::set_use_radar(bool value) {
  _internal_set_use_radar(value);
  // @@protoc_insertion_point(field_set:apollo.perception.fusion.ProbabilisticFusionConfig.use_radar)
}

// optional bool use_camera = 3 [default = true];
inline bool ProbabilisticFusionConfig::_internal_has_use_camera() const {
  bool value = (_impl_._has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool ProbabilisticFusionConfig::has_use_camera() const {
  return _internal_has_use_camera();
}
inline void ProbabilisticFusionConfig::clear_use_camera() {
  _impl_.use_camera_ = true;
  _impl_._has_bits_[0] &= ~0x00000020u;
}
inline bool ProbabilisticFusionConfig::_internal_use_camera() const {
  return _impl_.use_camera_;
}
inline bool ProbabilisticFusionConfig::use_camera() const {
  // @@protoc_insertion_point(field_get:apollo.perception.fusion.ProbabilisticFusionConfig.use_camera)
  return _internal_use_camera();
}
inline void ProbabilisticFusionConfig::_internal_set_use_camera(bool value) {
  _impl_._has_bits_[0] |= 0x00000020u;
  _impl_.use_camera_ = value;
}
inline void ProbabilisticFusionConfig::set_use_camera(bool value) {
  _internal_set_use_camera(value);
  // @@protoc_insertion_point(field_set:apollo.perception.fusion.ProbabilisticFusionConfig.use_camera)
}

// optional string tracker_method = 4 [default = "PbfTracker"];
inline bool ProbabilisticFusionConfig::_internal_has_tracker_method() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool ProbabilisticFusionConfig::has_tracker_method() const {
  return _internal_has_tracker_method();
}
inline void ProbabilisticFusionConfig::clear_tracker_method() {
  _impl_.tracker_method_.ClearToDefault(::apollo::perception::fusion::ProbabilisticFusionConfig::Impl_::_i_give_permission_to_break_this_code_default_tracker_method_, GetArenaForAllocation());
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& ProbabilisticFusionConfig::tracker_method() const {
  // @@protoc_insertion_point(field_get:apollo.perception.fusion.ProbabilisticFusionConfig.tracker_method)
  if (_impl_.tracker_method_.IsDefault()) return Impl_::_i_give_permission_to_break_this_code_default_tracker_method_.get();
  return _internal_tracker_method();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ProbabilisticFusionConfig::set_tracker_method(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.tracker_method_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:apollo.perception.fusion.ProbabilisticFusionConfig.tracker_method)
}
inline std::string* ProbabilisticFusionConfig::mutable_tracker_method() {
  std::string* _s = _internal_mutable_tracker_method();
  // @@protoc_insertion_point(field_mutable:apollo.perception.fusion.ProbabilisticFusionConfig.tracker_method)
  return _s;
}
inline const std::string& ProbabilisticFusionConfig::_internal_tracker_method() const {
  return _impl_.tracker_method_.Get();
}
inline void ProbabilisticFusionConfig::_internal_set_tracker_method(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.tracker_method_.Set(value, GetArenaForAllocation());
}
inline std::string* ProbabilisticFusionConfig::_internal_mutable_tracker_method() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.tracker_method_.Mutable(::apollo::perception::fusion::ProbabilisticFusionConfig::Impl_::_i_give_permission_to_break_this_code_default_tracker_method_, GetArenaForAllocation());
}
inline std::string* ProbabilisticFusionConfig::release_tracker_method() {
  // @@protoc_insertion_point(field_release:apollo.perception.fusion.ProbabilisticFusionConfig.tracker_method)
  if (!_internal_has_tracker_method()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* p = _impl_.tracker_method_.Release();
  return p;
}
inline void ProbabilisticFusionConfig::set_allocated_tracker_method(std::string* tracker_method) {
  if (tracker_method != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.tracker_method_.SetAllocated(tracker_method, GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:apollo.perception.fusion.ProbabilisticFusionConfig.tracker_method)
}

// optional string data_association_method = 5 [default = "HMAssociation"];
inline bool ProbabilisticFusionConfig::_internal_has_data_association_method() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool ProbabilisticFusionConfig::has_data_association_method() const {
  return _internal_has_data_association_method();
}
inline void ProbabilisticFusionConfig::clear_data_association_method() {
  _impl_.data_association_method_.ClearToDefault(::apollo::perception::fusion::ProbabilisticFusionConfig::Impl_::_i_give_permission_to_break_this_code_default_data_association_method_, GetArenaForAllocation());
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline const std::string& ProbabilisticFusionConfig::data_association_method() const {
  // @@protoc_insertion_point(field_get:apollo.perception.fusion.ProbabilisticFusionConfig.data_association_method)
  if (_impl_.data_association_method_.IsDefault()) return Impl_::_i_give_permission_to_break_this_code_default_data_association_method_.get();
  return _internal_data_association_method();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ProbabilisticFusionConfig::set_data_association_method(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000002u;
 _impl_.data_association_method_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:apollo.perception.fusion.ProbabilisticFusionConfig.data_association_method)
}
inline std::string* ProbabilisticFusionConfig::mutable_data_association_method() {
  std::string* _s = _internal_mutable_data_association_method();
  // @@protoc_insertion_point(field_mutable:apollo.perception.fusion.ProbabilisticFusionConfig.data_association_method)
  return _s;
}
inline const std::string& ProbabilisticFusionConfig::_internal_data_association_method() const {
  return _impl_.data_association_method_.Get();
}
inline void ProbabilisticFusionConfig::_internal_set_data_association_method(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.data_association_method_.Set(value, GetArenaForAllocation());
}
inline std::string* ProbabilisticFusionConfig::_internal_mutable_data_association_method() {
  _impl_._has_bits_[0] |= 0x00000002u;
  return _impl_.data_association_method_.Mutable(::apollo::perception::fusion::ProbabilisticFusionConfig::Impl_::_i_give_permission_to_break_this_code_default_data_association_method_, GetArenaForAllocation());
}
inline std::string* ProbabilisticFusionConfig::release_data_association_method() {
  // @@protoc_insertion_point(field_release:apollo.perception.fusion.ProbabilisticFusionConfig.data_association_method)
  if (!_internal_has_data_association_method()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000002u;
  auto* p = _impl_.data_association_method_.Release();
  return p;
}
inline void ProbabilisticFusionConfig::set_allocated_data_association_method(std::string* data_association_method) {
  if (data_association_method != nullptr) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.data_association_method_.SetAllocated(data_association_method, GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:apollo.perception.fusion.ProbabilisticFusionConfig.data_association_method)
}

// optional string gate_keeper_method = 6 [default = "PbfGatekeeper"];
inline bool ProbabilisticFusionConfig::_internal_has_gate_keeper_method() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool ProbabilisticFusionConfig::has_gate_keeper_method() const {
  return _internal_has_gate_keeper_method();
}
inline void ProbabilisticFusionConfig::clear_gate_keeper_method() {
  _impl_.gate_keeper_method_.ClearToDefault(::apollo::perception::fusion::ProbabilisticFusionConfig::Impl_::_i_give_permission_to_break_this_code_default_gate_keeper_method_, GetArenaForAllocation());
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline const std::string& ProbabilisticFusionConfig::gate_keeper_method() const {
  // @@protoc_insertion_point(field_get:apollo.perception.fusion.ProbabilisticFusionConfig.gate_keeper_method)
  if (_impl_.gate_keeper_method_.IsDefault()) return Impl_::_i_give_permission_to_break_this_code_default_gate_keeper_method_.get();
  return _internal_gate_keeper_method();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ProbabilisticFusionConfig::set_gate_keeper_method(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000004u;
 _impl_.gate_keeper_method_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:apollo.perception.fusion.ProbabilisticFusionConfig.gate_keeper_method)
}
inline std::string* ProbabilisticFusionConfig::mutable_gate_keeper_method() {
  std::string* _s = _internal_mutable_gate_keeper_method();
  // @@protoc_insertion_point(field_mutable:apollo.perception.fusion.ProbabilisticFusionConfig.gate_keeper_method)
  return _s;
}
inline const std::string& ProbabilisticFusionConfig::_internal_gate_keeper_method() const {
  return _impl_.gate_keeper_method_.Get();
}
inline void ProbabilisticFusionConfig::_internal_set_gate_keeper_method(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.gate_keeper_method_.Set(value, GetArenaForAllocation());
}
inline std::string* ProbabilisticFusionConfig::_internal_mutable_gate_keeper_method() {
  _impl_._has_bits_[0] |= 0x00000004u;
  return _impl_.gate_keeper_method_.Mutable(::apollo::perception::fusion::ProbabilisticFusionConfig::Impl_::_i_give_permission_to_break_this_code_default_gate_keeper_method_, GetArenaForAllocation());
}
inline std::string* ProbabilisticFusionConfig::release_gate_keeper_method() {
  // @@protoc_insertion_point(field_release:apollo.perception.fusion.ProbabilisticFusionConfig.gate_keeper_method)
  if (!_internal_has_gate_keeper_method()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000004u;
  auto* p = _impl_.gate_keeper_method_.Release();
  return p;
}
inline void ProbabilisticFusionConfig::set_allocated_gate_keeper_method(std::string* gate_keeper_method) {
  if (gate_keeper_method != nullptr) {
    _impl_._has_bits_[0] |= 0x00000004u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000004u;
  }
  _impl_.gate_keeper_method_.SetAllocated(gate_keeper_method, GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:apollo.perception.fusion.ProbabilisticFusionConfig.gate_keeper_method)
}

// repeated string prohibition_sensors = 7;
inline int ProbabilisticFusionConfig::_internal_prohibition_sensors_size() const {
  return _impl_.prohibition_sensors_.size();
}
inline int ProbabilisticFusionConfig::prohibition_sensors_size() const {
  return _internal_prohibition_sensors_size();
}
inline void ProbabilisticFusionConfig::clear_prohibition_sensors() {
  _impl_.prohibition_sensors_.Clear();
}
inline std::string* ProbabilisticFusionConfig::add_prohibition_sensors() {
  std::string* _s = _internal_add_prohibition_sensors();
  // @@protoc_insertion_point(field_add_mutable:apollo.perception.fusion.ProbabilisticFusionConfig.prohibition_sensors)
  return _s;
}
inline const std::string& ProbabilisticFusionConfig::_internal_prohibition_sensors(int index) const {
  return _impl_.prohibition_sensors_.Get(index);
}
inline const std::string& ProbabilisticFusionConfig::prohibition_sensors(int index) const {
  // @@protoc_insertion_point(field_get:apollo.perception.fusion.ProbabilisticFusionConfig.prohibition_sensors)
  return _internal_prohibition_sensors(index);
}
inline std::string* ProbabilisticFusionConfig::mutable_prohibition_sensors(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.perception.fusion.ProbabilisticFusionConfig.prohibition_sensors)
  return _impl_.prohibition_sensors_.Mutable(index);
}
inline void ProbabilisticFusionConfig::set_prohibition_sensors(int index, const std::string& value) {
  _impl_.prohibition_sensors_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:apollo.perception.fusion.ProbabilisticFusionConfig.prohibition_sensors)
}
inline void ProbabilisticFusionConfig::set_prohibition_sensors(int index, std::string&& value) {
  _impl_.prohibition_sensors_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:apollo.perception.fusion.ProbabilisticFusionConfig.prohibition_sensors)
}
inline void ProbabilisticFusionConfig::set_prohibition_sensors(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.prohibition_sensors_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:apollo.perception.fusion.ProbabilisticFusionConfig.prohibition_sensors)
}
inline void ProbabilisticFusionConfig::set_prohibition_sensors(int index, const char* value, size_t size) {
  _impl_.prohibition_sensors_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:apollo.perception.fusion.ProbabilisticFusionConfig.prohibition_sensors)
}
inline std::string* ProbabilisticFusionConfig::_internal_add_prohibition_sensors() {
  return _impl_.prohibition_sensors_.Add();
}
inline void ProbabilisticFusionConfig::add_prohibition_sensors(const std::string& value) {
  _impl_.prohibition_sensors_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:apollo.perception.fusion.ProbabilisticFusionConfig.prohibition_sensors)
}
inline void ProbabilisticFusionConfig::add_prohibition_sensors(std::string&& value) {
  _impl_.prohibition_sensors_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:apollo.perception.fusion.ProbabilisticFusionConfig.prohibition_sensors)
}
inline void ProbabilisticFusionConfig::add_prohibition_sensors(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.prohibition_sensors_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:apollo.perception.fusion.ProbabilisticFusionConfig.prohibition_sensors)
}
inline void ProbabilisticFusionConfig::add_prohibition_sensors(const char* value, size_t size) {
  _impl_.prohibition_sensors_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:apollo.perception.fusion.ProbabilisticFusionConfig.prohibition_sensors)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
ProbabilisticFusionConfig::prohibition_sensors() const {
  // @@protoc_insertion_point(field_list:apollo.perception.fusion.ProbabilisticFusionConfig.prohibition_sensors)
  return _impl_.prohibition_sensors_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
ProbabilisticFusionConfig::mutable_prohibition_sensors() {
  // @@protoc_insertion_point(field_mutable_list:apollo.perception.fusion.ProbabilisticFusionConfig.prohibition_sensors)
  return &_impl_.prohibition_sensors_;
}

// optional double max_lidar_invisible_period = 8 [default = 0.25];
inline bool ProbabilisticFusionConfig::_internal_has_max_lidar_invisible_period() const {
  bool value = (_impl_._has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline bool ProbabilisticFusionConfig::has_max_lidar_invisible_period() const {
  return _internal_has_max_lidar_invisible_period();
}
inline void ProbabilisticFusionConfig::clear_max_lidar_invisible_period() {
  _impl_.max_lidar_invisible_period_ = 0.25;
  _impl_._has_bits_[0] &= ~0x00000040u;
}
inline double ProbabilisticFusionConfig::_internal_max_lidar_invisible_period() const {
  return _impl_.max_lidar_invisible_period_;
}
inline double ProbabilisticFusionConfig::max_lidar_invisible_period() const {
  // @@protoc_insertion_point(field_get:apollo.perception.fusion.ProbabilisticFusionConfig.max_lidar_invisible_period)
  return _internal_max_lidar_invisible_period();
}
inline void ProbabilisticFusionConfig::_internal_set_max_lidar_invisible_period(double value) {
  _impl_._has_bits_[0] |= 0x00000040u;
  _impl_.max_lidar_invisible_period_ = value;
}
inline void ProbabilisticFusionConfig::set_max_lidar_invisible_period(double value) {
  _internal_set_max_lidar_invisible_period(value);
  // @@protoc_insertion_point(field_set:apollo.perception.fusion.ProbabilisticFusionConfig.max_lidar_invisible_period)
}

// optional double max_radar_invisible_period = 9 [default = 0.5];
inline bool ProbabilisticFusionConfig::_internal_has_max_radar_invisible_period() const {
  bool value = (_impl_._has_bits_[0] & 0x00000080u) != 0;
  return value;
}
inline bool ProbabilisticFusionConfig::has_max_radar_invisible_period() const {
  return _internal_has_max_radar_invisible_period();
}
inline void ProbabilisticFusionConfig::clear_max_radar_invisible_period() {
  _impl_.max_radar_invisible_period_ = 0.5;
  _impl_._has_bits_[0] &= ~0x00000080u;
}
inline double ProbabilisticFusionConfig::_internal_max_radar_invisible_period() const {
  return _impl_.max_radar_invisible_period_;
}
inline double ProbabilisticFusionConfig::max_radar_invisible_period() const {
  // @@protoc_insertion_point(field_get:apollo.perception.fusion.ProbabilisticFusionConfig.max_radar_invisible_period)
  return _internal_max_radar_invisible_period();
}
inline void ProbabilisticFusionConfig::_internal_set_max_radar_invisible_period(double value) {
  _impl_._has_bits_[0] |= 0x00000080u;
  _impl_.max_radar_invisible_period_ = value;
}
inline void ProbabilisticFusionConfig::set_max_radar_invisible_period(double value) {
  _internal_set_max_radar_invisible_period(value);
  // @@protoc_insertion_point(field_set:apollo.perception.fusion.ProbabilisticFusionConfig.max_radar_invisible_period)
}

// optional double max_camera_invisible_period = 10 [default = 0.75];
inline bool ProbabilisticFusionConfig::_internal_has_max_camera_invisible_period() const {
  bool value = (_impl_._has_bits_[0] & 0x00000100u) != 0;
  return value;
}
inline bool ProbabilisticFusionConfig::has_max_camera_invisible_period() const {
  return _internal_has_max_camera_invisible_period();
}
inline void ProbabilisticFusionConfig::clear_max_camera_invisible_period() {
  _impl_.max_camera_invisible_period_ = 0.75;
  _impl_._has_bits_[0] &= ~0x00000100u;
}
inline double ProbabilisticFusionConfig::_internal_max_camera_invisible_period() const {
  return _impl_.max_camera_invisible_period_;
}
inline double ProbabilisticFusionConfig::max_camera_invisible_period() const {
  // @@protoc_insertion_point(field_get:apollo.perception.fusion.ProbabilisticFusionConfig.max_camera_invisible_period)
  return _internal_max_camera_invisible_period();
}
inline void ProbabilisticFusionConfig::_internal_set_max_camera_invisible_period(double value) {
  _impl_._has_bits_[0] |= 0x00000100u;
  _impl_.max_camera_invisible_period_ = value;
}
inline void ProbabilisticFusionConfig::set_max_camera_invisible_period(double value) {
  _internal_set_max_camera_invisible_period(value);
  // @@protoc_insertion_point(field_set:apollo.perception.fusion.ProbabilisticFusionConfig.max_camera_invisible_period)
}

// optional int64 max_cached_frame_num = 11 [default = 50];
inline bool ProbabilisticFusionConfig::_internal_has_max_cached_frame_num() const {
  bool value = (_impl_._has_bits_[0] & 0x00000200u) != 0;
  return value;
}
inline bool ProbabilisticFusionConfig::has_max_cached_frame_num() const {
  return _internal_has_max_cached_frame_num();
}
inline void ProbabilisticFusionConfig::clear_max_cached_frame_num() {
  _impl_.max_cached_frame_num_ = int64_t{50};
  _impl_._has_bits_[0] &= ~0x00000200u;
}
inline int64_t ProbabilisticFusionConfig::_internal_max_cached_frame_num() const {
  return _impl_.max_cached_frame_num_;
}
inline int64_t ProbabilisticFusionConfig::max_cached_frame_num() const {
  // @@protoc_insertion_point(field_get:apollo.perception.fusion.ProbabilisticFusionConfig.max_cached_frame_num)
  return _internal_max_cached_frame_num();
}
inline void ProbabilisticFusionConfig::_internal_set_max_cached_frame_num(int64_t value) {
  _impl_._has_bits_[0] |= 0x00000200u;
  _impl_.max_cached_frame_num_ = value;
}
inline void ProbabilisticFusionConfig::set_max_cached_frame_num(int64_t value) {
  _internal_set_max_cached_frame_num(value);
  // @@protoc_insertion_point(field_set:apollo.perception.fusion.ProbabilisticFusionConfig.max_cached_frame_num)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace fusion
}  // namespace perception
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_modules_2fperception_2fproto_2fprobabilistic_5ffusion_5fconfig_2eproto
