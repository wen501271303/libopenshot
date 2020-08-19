// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: objdetectdata.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_objdetectdata_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_objdetectdata_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012003 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/timestamp.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_objdetectdata_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_objdetectdata_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_objdetectdata_2eproto;
namespace libopenshotobjdetect {
class Frame;
class FrameDefaultTypeInternal;
extern FrameDefaultTypeInternal _Frame_default_instance_;
class Frame_Box;
class Frame_BoxDefaultTypeInternal;
extern Frame_BoxDefaultTypeInternal _Frame_Box_default_instance_;
class ObjDetect;
class ObjDetectDefaultTypeInternal;
extern ObjDetectDefaultTypeInternal _ObjDetect_default_instance_;
}  // namespace libopenshotobjdetect
PROTOBUF_NAMESPACE_OPEN
template<> ::libopenshotobjdetect::Frame* Arena::CreateMaybeMessage<::libopenshotobjdetect::Frame>(Arena*);
template<> ::libopenshotobjdetect::Frame_Box* Arena::CreateMaybeMessage<::libopenshotobjdetect::Frame_Box>(Arena*);
template<> ::libopenshotobjdetect::ObjDetect* Arena::CreateMaybeMessage<::libopenshotobjdetect::ObjDetect>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace libopenshotobjdetect {

// ===================================================================

class Frame_Box PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:libopenshotobjdetect.Frame.Box) */ {
 public:
  inline Frame_Box() : Frame_Box(nullptr) {};
  virtual ~Frame_Box();

  Frame_Box(const Frame_Box& from);
  Frame_Box(Frame_Box&& from) noexcept
    : Frame_Box() {
    *this = ::std::move(from);
  }

  inline Frame_Box& operator=(const Frame_Box& from) {
    CopyFrom(from);
    return *this;
  }
  inline Frame_Box& operator=(Frame_Box&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Frame_Box& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Frame_Box* internal_default_instance() {
    return reinterpret_cast<const Frame_Box*>(
               &_Frame_Box_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Frame_Box& a, Frame_Box& b) {
    a.Swap(&b);
  }
  inline void Swap(Frame_Box* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Frame_Box* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Frame_Box* New() const final {
    return CreateMaybeMessage<Frame_Box>(nullptr);
  }

  Frame_Box* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Frame_Box>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Frame_Box& from);
  void MergeFrom(const Frame_Box& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Frame_Box* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "libopenshotobjdetect.Frame.Box";
  }
  protected:
  explicit Frame_Box(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_objdetectdata_2eproto);
    return ::descriptor_table_objdetectdata_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kX1FieldNumber = 1,
    kY1FieldNumber = 2,
    kX2FieldNumber = 3,
    kY2FieldNumber = 4,
    kClassIdFieldNumber = 5,
    kConfidenceFieldNumber = 6,
  };
  // int32 x1 = 1;
  void clear_x1();
  ::PROTOBUF_NAMESPACE_ID::int32 x1() const;
  void set_x1(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_x1() const;
  void _internal_set_x1(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 y1 = 2;
  void clear_y1();
  ::PROTOBUF_NAMESPACE_ID::int32 y1() const;
  void set_y1(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_y1() const;
  void _internal_set_y1(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 x2 = 3;
  void clear_x2();
  ::PROTOBUF_NAMESPACE_ID::int32 x2() const;
  void set_x2(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_x2() const;
  void _internal_set_x2(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 y2 = 4;
  void clear_y2();
  ::PROTOBUF_NAMESPACE_ID::int32 y2() const;
  void set_y2(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_y2() const;
  void _internal_set_y2(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 classId = 5;
  void clear_classid();
  ::PROTOBUF_NAMESPACE_ID::int32 classid() const;
  void set_classid(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_classid() const;
  void _internal_set_classid(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // float confidence = 6;
  void clear_confidence();
  float confidence() const;
  void set_confidence(float value);
  private:
  float _internal_confidence() const;
  void _internal_set_confidence(float value);
  public:

  // @@protoc_insertion_point(class_scope:libopenshotobjdetect.Frame.Box)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int32 x1_;
  ::PROTOBUF_NAMESPACE_ID::int32 y1_;
  ::PROTOBUF_NAMESPACE_ID::int32 x2_;
  ::PROTOBUF_NAMESPACE_ID::int32 y2_;
  ::PROTOBUF_NAMESPACE_ID::int32 classid_;
  float confidence_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_objdetectdata_2eproto;
};
// -------------------------------------------------------------------

class Frame PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:libopenshotobjdetect.Frame) */ {
 public:
  inline Frame() : Frame(nullptr) {};
  virtual ~Frame();

  Frame(const Frame& from);
  Frame(Frame&& from) noexcept
    : Frame() {
    *this = ::std::move(from);
  }

  inline Frame& operator=(const Frame& from) {
    CopyFrom(from);
    return *this;
  }
  inline Frame& operator=(Frame&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Frame& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Frame* internal_default_instance() {
    return reinterpret_cast<const Frame*>(
               &_Frame_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Frame& a, Frame& b) {
    a.Swap(&b);
  }
  inline void Swap(Frame* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Frame* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Frame* New() const final {
    return CreateMaybeMessage<Frame>(nullptr);
  }

  Frame* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Frame>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Frame& from);
  void MergeFrom(const Frame& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Frame* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "libopenshotobjdetect.Frame";
  }
  protected:
  explicit Frame(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_objdetectdata_2eproto);
    return ::descriptor_table_objdetectdata_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Frame_Box Box;

  // accessors -------------------------------------------------------

  enum : int {
    kBoundingBoxFieldNumber = 2,
    kIdFieldNumber = 1,
  };
  // repeated .libopenshotobjdetect.Frame.Box bounding_box = 2;
  int bounding_box_size() const;
  private:
  int _internal_bounding_box_size() const;
  public:
  void clear_bounding_box();
  ::libopenshotobjdetect::Frame_Box* mutable_bounding_box(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::libopenshotobjdetect::Frame_Box >*
      mutable_bounding_box();
  private:
  const ::libopenshotobjdetect::Frame_Box& _internal_bounding_box(int index) const;
  ::libopenshotobjdetect::Frame_Box* _internal_add_bounding_box();
  public:
  const ::libopenshotobjdetect::Frame_Box& bounding_box(int index) const;
  ::libopenshotobjdetect::Frame_Box* add_bounding_box();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::libopenshotobjdetect::Frame_Box >&
      bounding_box() const;

  // int32 id = 1;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::int32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:libopenshotobjdetect.Frame)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::libopenshotobjdetect::Frame_Box > bounding_box_;
  ::PROTOBUF_NAMESPACE_ID::int32 id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_objdetectdata_2eproto;
};
// -------------------------------------------------------------------

class ObjDetect PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:libopenshotobjdetect.ObjDetect) */ {
 public:
  inline ObjDetect() : ObjDetect(nullptr) {};
  virtual ~ObjDetect();

  ObjDetect(const ObjDetect& from);
  ObjDetect(ObjDetect&& from) noexcept
    : ObjDetect() {
    *this = ::std::move(from);
  }

  inline ObjDetect& operator=(const ObjDetect& from) {
    CopyFrom(from);
    return *this;
  }
  inline ObjDetect& operator=(ObjDetect&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ObjDetect& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ObjDetect* internal_default_instance() {
    return reinterpret_cast<const ObjDetect*>(
               &_ObjDetect_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(ObjDetect& a, ObjDetect& b) {
    a.Swap(&b);
  }
  inline void Swap(ObjDetect* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ObjDetect* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ObjDetect* New() const final {
    return CreateMaybeMessage<ObjDetect>(nullptr);
  }

  ObjDetect* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ObjDetect>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ObjDetect& from);
  void MergeFrom(const ObjDetect& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ObjDetect* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "libopenshotobjdetect.ObjDetect";
  }
  protected:
  explicit ObjDetect(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_objdetectdata_2eproto);
    return ::descriptor_table_objdetectdata_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFrameFieldNumber = 1,
    kClassNamesFieldNumber = 3,
    kLastUpdatedFieldNumber = 2,
  };
  // repeated .libopenshotobjdetect.Frame frame = 1;
  int frame_size() const;
  private:
  int _internal_frame_size() const;
  public:
  void clear_frame();
  ::libopenshotobjdetect::Frame* mutable_frame(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::libopenshotobjdetect::Frame >*
      mutable_frame();
  private:
  const ::libopenshotobjdetect::Frame& _internal_frame(int index) const;
  ::libopenshotobjdetect::Frame* _internal_add_frame();
  public:
  const ::libopenshotobjdetect::Frame& frame(int index) const;
  ::libopenshotobjdetect::Frame* add_frame();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::libopenshotobjdetect::Frame >&
      frame() const;

  // repeated string classNames = 3;
  int classnames_size() const;
  private:
  int _internal_classnames_size() const;
  public:
  void clear_classnames();
  const std::string& classnames(int index) const;
  std::string* mutable_classnames(int index);
  void set_classnames(int index, const std::string& value);
  void set_classnames(int index, std::string&& value);
  void set_classnames(int index, const char* value);
  void set_classnames(int index, const char* value, size_t size);
  std::string* add_classnames();
  void add_classnames(const std::string& value);
  void add_classnames(std::string&& value);
  void add_classnames(const char* value);
  void add_classnames(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& classnames() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_classnames();
  private:
  const std::string& _internal_classnames(int index) const;
  std::string* _internal_add_classnames();
  public:

  // .google.protobuf.Timestamp last_updated = 2;
  bool has_last_updated() const;
  private:
  bool _internal_has_last_updated() const;
  public:
  void clear_last_updated();
  const PROTOBUF_NAMESPACE_ID::Timestamp& last_updated() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* release_last_updated();
  PROTOBUF_NAMESPACE_ID::Timestamp* mutable_last_updated();
  void set_allocated_last_updated(PROTOBUF_NAMESPACE_ID::Timestamp* last_updated);
  private:
  const PROTOBUF_NAMESPACE_ID::Timestamp& _internal_last_updated() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_last_updated();
  public:
  void unsafe_arena_set_allocated_last_updated(
      PROTOBUF_NAMESPACE_ID::Timestamp* last_updated);
  PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_last_updated();

  // @@protoc_insertion_point(class_scope:libopenshotobjdetect.ObjDetect)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::libopenshotobjdetect::Frame > frame_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> classnames_;
  PROTOBUF_NAMESPACE_ID::Timestamp* last_updated_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_objdetectdata_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Frame_Box

// int32 x1 = 1;
inline void Frame_Box::clear_x1() {
  x1_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Frame_Box::_internal_x1() const {
  return x1_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Frame_Box::x1() const {
  // @@protoc_insertion_point(field_get:libopenshotobjdetect.Frame.Box.x1)
  return _internal_x1();
}
inline void Frame_Box::_internal_set_x1(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  x1_ = value;
}
inline void Frame_Box::set_x1(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_x1(value);
  // @@protoc_insertion_point(field_set:libopenshotobjdetect.Frame.Box.x1)
}

// int32 y1 = 2;
inline void Frame_Box::clear_y1() {
  y1_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Frame_Box::_internal_y1() const {
  return y1_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Frame_Box::y1() const {
  // @@protoc_insertion_point(field_get:libopenshotobjdetect.Frame.Box.y1)
  return _internal_y1();
}
inline void Frame_Box::_internal_set_y1(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  y1_ = value;
}
inline void Frame_Box::set_y1(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_y1(value);
  // @@protoc_insertion_point(field_set:libopenshotobjdetect.Frame.Box.y1)
}

// int32 x2 = 3;
inline void Frame_Box::clear_x2() {
  x2_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Frame_Box::_internal_x2() const {
  return x2_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Frame_Box::x2() const {
  // @@protoc_insertion_point(field_get:libopenshotobjdetect.Frame.Box.x2)
  return _internal_x2();
}
inline void Frame_Box::_internal_set_x2(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  x2_ = value;
}
inline void Frame_Box::set_x2(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_x2(value);
  // @@protoc_insertion_point(field_set:libopenshotobjdetect.Frame.Box.x2)
}

// int32 y2 = 4;
inline void Frame_Box::clear_y2() {
  y2_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Frame_Box::_internal_y2() const {
  return y2_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Frame_Box::y2() const {
  // @@protoc_insertion_point(field_get:libopenshotobjdetect.Frame.Box.y2)
  return _internal_y2();
}
inline void Frame_Box::_internal_set_y2(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  y2_ = value;
}
inline void Frame_Box::set_y2(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_y2(value);
  // @@protoc_insertion_point(field_set:libopenshotobjdetect.Frame.Box.y2)
}

// int32 classId = 5;
inline void Frame_Box::clear_classid() {
  classid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Frame_Box::_internal_classid() const {
  return classid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Frame_Box::classid() const {
  // @@protoc_insertion_point(field_get:libopenshotobjdetect.Frame.Box.classId)
  return _internal_classid();
}
inline void Frame_Box::_internal_set_classid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  classid_ = value;
}
inline void Frame_Box::set_classid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_classid(value);
  // @@protoc_insertion_point(field_set:libopenshotobjdetect.Frame.Box.classId)
}

// float confidence = 6;
inline void Frame_Box::clear_confidence() {
  confidence_ = 0;
}
inline float Frame_Box::_internal_confidence() const {
  return confidence_;
}
inline float Frame_Box::confidence() const {
  // @@protoc_insertion_point(field_get:libopenshotobjdetect.Frame.Box.confidence)
  return _internal_confidence();
}
inline void Frame_Box::_internal_set_confidence(float value) {
  
  confidence_ = value;
}
inline void Frame_Box::set_confidence(float value) {
  _internal_set_confidence(value);
  // @@protoc_insertion_point(field_set:libopenshotobjdetect.Frame.Box.confidence)
}

// -------------------------------------------------------------------

// Frame

// int32 id = 1;
inline void Frame::clear_id() {
  id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Frame::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Frame::id() const {
  // @@protoc_insertion_point(field_get:libopenshotobjdetect.Frame.id)
  return _internal_id();
}
inline void Frame::_internal_set_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  id_ = value;
}
inline void Frame::set_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:libopenshotobjdetect.Frame.id)
}

// repeated .libopenshotobjdetect.Frame.Box bounding_box = 2;
inline int Frame::_internal_bounding_box_size() const {
  return bounding_box_.size();
}
inline int Frame::bounding_box_size() const {
  return _internal_bounding_box_size();
}
inline void Frame::clear_bounding_box() {
  bounding_box_.Clear();
}
inline ::libopenshotobjdetect::Frame_Box* Frame::mutable_bounding_box(int index) {
  // @@protoc_insertion_point(field_mutable:libopenshotobjdetect.Frame.bounding_box)
  return bounding_box_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::libopenshotobjdetect::Frame_Box >*
Frame::mutable_bounding_box() {
  // @@protoc_insertion_point(field_mutable_list:libopenshotobjdetect.Frame.bounding_box)
  return &bounding_box_;
}
inline const ::libopenshotobjdetect::Frame_Box& Frame::_internal_bounding_box(int index) const {
  return bounding_box_.Get(index);
}
inline const ::libopenshotobjdetect::Frame_Box& Frame::bounding_box(int index) const {
  // @@protoc_insertion_point(field_get:libopenshotobjdetect.Frame.bounding_box)
  return _internal_bounding_box(index);
}
inline ::libopenshotobjdetect::Frame_Box* Frame::_internal_add_bounding_box() {
  return bounding_box_.Add();
}
inline ::libopenshotobjdetect::Frame_Box* Frame::add_bounding_box() {
  // @@protoc_insertion_point(field_add:libopenshotobjdetect.Frame.bounding_box)
  return _internal_add_bounding_box();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::libopenshotobjdetect::Frame_Box >&
Frame::bounding_box() const {
  // @@protoc_insertion_point(field_list:libopenshotobjdetect.Frame.bounding_box)
  return bounding_box_;
}

// -------------------------------------------------------------------

// ObjDetect

// repeated .libopenshotobjdetect.Frame frame = 1;
inline int ObjDetect::_internal_frame_size() const {
  return frame_.size();
}
inline int ObjDetect::frame_size() const {
  return _internal_frame_size();
}
inline void ObjDetect::clear_frame() {
  frame_.Clear();
}
inline ::libopenshotobjdetect::Frame* ObjDetect::mutable_frame(int index) {
  // @@protoc_insertion_point(field_mutable:libopenshotobjdetect.ObjDetect.frame)
  return frame_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::libopenshotobjdetect::Frame >*
ObjDetect::mutable_frame() {
  // @@protoc_insertion_point(field_mutable_list:libopenshotobjdetect.ObjDetect.frame)
  return &frame_;
}
inline const ::libopenshotobjdetect::Frame& ObjDetect::_internal_frame(int index) const {
  return frame_.Get(index);
}
inline const ::libopenshotobjdetect::Frame& ObjDetect::frame(int index) const {
  // @@protoc_insertion_point(field_get:libopenshotobjdetect.ObjDetect.frame)
  return _internal_frame(index);
}
inline ::libopenshotobjdetect::Frame* ObjDetect::_internal_add_frame() {
  return frame_.Add();
}
inline ::libopenshotobjdetect::Frame* ObjDetect::add_frame() {
  // @@protoc_insertion_point(field_add:libopenshotobjdetect.ObjDetect.frame)
  return _internal_add_frame();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::libopenshotobjdetect::Frame >&
ObjDetect::frame() const {
  // @@protoc_insertion_point(field_list:libopenshotobjdetect.ObjDetect.frame)
  return frame_;
}

// .google.protobuf.Timestamp last_updated = 2;
inline bool ObjDetect::_internal_has_last_updated() const {
  return this != internal_default_instance() && last_updated_ != nullptr;
}
inline bool ObjDetect::has_last_updated() const {
  return _internal_has_last_updated();
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& ObjDetect::_internal_last_updated() const {
  const PROTOBUF_NAMESPACE_ID::Timestamp* p = last_updated_;
  return p != nullptr ? *p : *reinterpret_cast<const PROTOBUF_NAMESPACE_ID::Timestamp*>(
      &PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& ObjDetect::last_updated() const {
  // @@protoc_insertion_point(field_get:libopenshotobjdetect.ObjDetect.last_updated)
  return _internal_last_updated();
}
inline void ObjDetect::unsafe_arena_set_allocated_last_updated(
    PROTOBUF_NAMESPACE_ID::Timestamp* last_updated) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(last_updated_);
  }
  last_updated_ = last_updated;
  if (last_updated) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:libopenshotobjdetect.ObjDetect.last_updated)
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* ObjDetect::release_last_updated() {
  auto temp = unsafe_arena_release_last_updated();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* ObjDetect::unsafe_arena_release_last_updated() {
  // @@protoc_insertion_point(field_release:libopenshotobjdetect.ObjDetect.last_updated)
  
  PROTOBUF_NAMESPACE_ID::Timestamp* temp = last_updated_;
  last_updated_ = nullptr;
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* ObjDetect::_internal_mutable_last_updated() {
  
  if (last_updated_ == nullptr) {
    auto* p = CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::Timestamp>(GetArena());
    last_updated_ = p;
  }
  return last_updated_;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* ObjDetect::mutable_last_updated() {
  // @@protoc_insertion_point(field_mutable:libopenshotobjdetect.ObjDetect.last_updated)
  return _internal_mutable_last_updated();
}
inline void ObjDetect::set_allocated_last_updated(PROTOBUF_NAMESPACE_ID::Timestamp* last_updated) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(last_updated_);
  }
  if (last_updated) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(last_updated)->GetArena();
    if (message_arena != submessage_arena) {
      last_updated = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, last_updated, submessage_arena);
    }
    
  } else {
    
  }
  last_updated_ = last_updated;
  // @@protoc_insertion_point(field_set_allocated:libopenshotobjdetect.ObjDetect.last_updated)
}

// repeated string classNames = 3;
inline int ObjDetect::_internal_classnames_size() const {
  return classnames_.size();
}
inline int ObjDetect::classnames_size() const {
  return _internal_classnames_size();
}
inline void ObjDetect::clear_classnames() {
  classnames_.Clear();
}
inline std::string* ObjDetect::add_classnames() {
  // @@protoc_insertion_point(field_add_mutable:libopenshotobjdetect.ObjDetect.classNames)
  return _internal_add_classnames();
}
inline const std::string& ObjDetect::_internal_classnames(int index) const {
  return classnames_.Get(index);
}
inline const std::string& ObjDetect::classnames(int index) const {
  // @@protoc_insertion_point(field_get:libopenshotobjdetect.ObjDetect.classNames)
  return _internal_classnames(index);
}
inline std::string* ObjDetect::mutable_classnames(int index) {
  // @@protoc_insertion_point(field_mutable:libopenshotobjdetect.ObjDetect.classNames)
  return classnames_.Mutable(index);
}
inline void ObjDetect::set_classnames(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:libopenshotobjdetect.ObjDetect.classNames)
  classnames_.Mutable(index)->assign(value);
}
inline void ObjDetect::set_classnames(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:libopenshotobjdetect.ObjDetect.classNames)
  classnames_.Mutable(index)->assign(std::move(value));
}
inline void ObjDetect::set_classnames(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  classnames_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:libopenshotobjdetect.ObjDetect.classNames)
}
inline void ObjDetect::set_classnames(int index, const char* value, size_t size) {
  classnames_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:libopenshotobjdetect.ObjDetect.classNames)
}
inline std::string* ObjDetect::_internal_add_classnames() {
  return classnames_.Add();
}
inline void ObjDetect::add_classnames(const std::string& value) {
  classnames_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:libopenshotobjdetect.ObjDetect.classNames)
}
inline void ObjDetect::add_classnames(std::string&& value) {
  classnames_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:libopenshotobjdetect.ObjDetect.classNames)
}
inline void ObjDetect::add_classnames(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  classnames_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:libopenshotobjdetect.ObjDetect.classNames)
}
inline void ObjDetect::add_classnames(const char* value, size_t size) {
  classnames_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:libopenshotobjdetect.ObjDetect.classNames)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
ObjDetect::classnames() const {
  // @@protoc_insertion_point(field_list:libopenshotobjdetect.ObjDetect.classNames)
  return classnames_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
ObjDetect::mutable_classnames() {
  // @@protoc_insertion_point(field_mutable_list:libopenshotobjdetect.ObjDetect.classNames)
  return &classnames_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace libopenshotobjdetect

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_objdetectdata_2eproto