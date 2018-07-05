// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: openarkproto.proto

#ifndef PROTOBUF_INCLUDED_openarkproto_2eproto
#define PROTOBUF_INCLUDED_openarkproto_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_openarkproto_2eproto 

namespace protobuf_openarkproto_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[5];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_openarkproto_2eproto
namespace protob {
class Hand;
class HandDefaultTypeInternal;
extern HandDefaultTypeInternal _Hand_default_instance_;
class Hands;
class HandsDefaultTypeInternal;
extern HandsDefaultTypeInternal _Hands_default_instance_;
class Point;
class PointDefaultTypeInternal;
extern PointDefaultTypeInternal _Point_default_instance_;
class PointIJ;
class PointIJDefaultTypeInternal;
extern PointIJDefaultTypeInternal _PointIJ_default_instance_;
class PointXYZ;
class PointXYZDefaultTypeInternal;
extern PointXYZDefaultTypeInternal _PointXYZ_default_instance_;
}  // namespace protob
namespace google {
namespace protobuf {
template<> ::protob::Hand* Arena::CreateMaybeMessage<::protob::Hand>(Arena*);
template<> ::protob::Hands* Arena::CreateMaybeMessage<::protob::Hands>(Arena*);
template<> ::protob::Point* Arena::CreateMaybeMessage<::protob::Point>(Arena*);
template<> ::protob::PointIJ* Arena::CreateMaybeMessage<::protob::PointIJ>(Arena*);
template<> ::protob::PointXYZ* Arena::CreateMaybeMessage<::protob::PointXYZ>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace protob {

// ===================================================================

class Hands : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:protob.Hands) */ {
 public:
  Hands();
  virtual ~Hands();

  Hands(const Hands& from);

  inline Hands& operator=(const Hands& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Hands(Hands&& from) noexcept
    : Hands() {
    *this = ::std::move(from);
  }

  inline Hands& operator=(Hands&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Hands& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Hands* internal_default_instance() {
    return reinterpret_cast<const Hands*>(
               &_Hands_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Hands* other);
  friend void swap(Hands& a, Hands& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Hands* New() const final {
    return CreateMaybeMessage<Hands>(NULL);
  }

  Hands* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Hands>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Hands& from);
  void MergeFrom(const Hands& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Hands* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .protob.Hand hands = 1;
  int hands_size() const;
  void clear_hands();
  static const int kHandsFieldNumber = 1;
  ::protob::Hand* mutable_hands(int index);
  ::google::protobuf::RepeatedPtrField< ::protob::Hand >*
      mutable_hands();
  const ::protob::Hand& hands(int index) const;
  ::protob::Hand* add_hands();
  const ::google::protobuf::RepeatedPtrField< ::protob::Hand >&
      hands() const;

  // @@protoc_insertion_point(class_scope:protob.Hands)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::protob::Hand > hands_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_openarkproto_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Hand : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:protob.Hand) */ {
 public:
  Hand();
  virtual ~Hand();

  Hand(const Hand& from);

  inline Hand& operator=(const Hand& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Hand(Hand&& from) noexcept
    : Hand() {
    *this = ::std::move(from);
  }

  inline Hand& operator=(Hand&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Hand& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Hand* internal_default_instance() {
    return reinterpret_cast<const Hand*>(
               &_Hand_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Hand* other);
  friend void swap(Hand& a, Hand& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Hand* New() const final {
    return CreateMaybeMessage<Hand>(NULL);
  }

  Hand* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Hand>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Hand& from);
  void MergeFrom(const Hand& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Hand* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .protob.Point fingers = 1;
  int fingers_size() const;
  void clear_fingers();
  static const int kFingersFieldNumber = 1;
  ::protob::Point* mutable_fingers(int index);
  ::google::protobuf::RepeatedPtrField< ::protob::Point >*
      mutable_fingers();
  const ::protob::Point& fingers(int index) const;
  ::protob::Point* add_fingers();
  const ::google::protobuf::RepeatedPtrField< ::protob::Point >&
      fingers() const;

  // repeated .protob.Point wrist = 2;
  int wrist_size() const;
  void clear_wrist();
  static const int kWristFieldNumber = 2;
  ::protob::Point* mutable_wrist(int index);
  ::google::protobuf::RepeatedPtrField< ::protob::Point >*
      mutable_wrist();
  const ::protob::Point& wrist(int index) const;
  ::protob::Point* add_wrist();
  const ::google::protobuf::RepeatedPtrField< ::protob::Point >&
      wrist() const;

  // .protob.Point palmCenter = 3;
  bool has_palmcenter() const;
  void clear_palmcenter();
  static const int kPalmCenterFieldNumber = 3;
  private:
  const ::protob::Point& _internal_palmcenter() const;
  public:
  const ::protob::Point& palmcenter() const;
  ::protob::Point* release_palmcenter();
  ::protob::Point* mutable_palmcenter();
  void set_allocated_palmcenter(::protob::Point* palmcenter);

  // @@protoc_insertion_point(class_scope:protob.Hand)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::protob::Point > fingers_;
  ::google::protobuf::RepeatedPtrField< ::protob::Point > wrist_;
  ::protob::Point* palmcenter_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_openarkproto_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Point : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:protob.Point) */ {
 public:
  Point();
  virtual ~Point();

  Point(const Point& from);

  inline Point& operator=(const Point& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Point(Point&& from) noexcept
    : Point() {
    *this = ::std::move(from);
  }

  inline Point& operator=(Point&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Point& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Point* internal_default_instance() {
    return reinterpret_cast<const Point*>(
               &_Point_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(Point* other);
  friend void swap(Point& a, Point& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Point* New() const final {
    return CreateMaybeMessage<Point>(NULL);
  }

  Point* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Point>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Point& from);
  void MergeFrom(const Point& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Point* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .protob.PointXYZ pointXYZ = 1;
  bool has_pointxyz() const;
  void clear_pointxyz();
  static const int kPointXYZFieldNumber = 1;
  private:
  const ::protob::PointXYZ& _internal_pointxyz() const;
  public:
  const ::protob::PointXYZ& pointxyz() const;
  ::protob::PointXYZ* release_pointxyz();
  ::protob::PointXYZ* mutable_pointxyz();
  void set_allocated_pointxyz(::protob::PointXYZ* pointxyz);

  // .protob.PointIJ pointIJ = 2;
  bool has_pointij() const;
  void clear_pointij();
  static const int kPointIJFieldNumber = 2;
  private:
  const ::protob::PointIJ& _internal_pointij() const;
  public:
  const ::protob::PointIJ& pointij() const;
  ::protob::PointIJ* release_pointij();
  ::protob::PointIJ* mutable_pointij();
  void set_allocated_pointij(::protob::PointIJ* pointij);

  // @@protoc_insertion_point(class_scope:protob.Point)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::protob::PointXYZ* pointxyz_;
  ::protob::PointIJ* pointij_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_openarkproto_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class PointXYZ : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:protob.PointXYZ) */ {
 public:
  PointXYZ();
  virtual ~PointXYZ();

  PointXYZ(const PointXYZ& from);

  inline PointXYZ& operator=(const PointXYZ& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  PointXYZ(PointXYZ&& from) noexcept
    : PointXYZ() {
    *this = ::std::move(from);
  }

  inline PointXYZ& operator=(PointXYZ&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const PointXYZ& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PointXYZ* internal_default_instance() {
    return reinterpret_cast<const PointXYZ*>(
               &_PointXYZ_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  void Swap(PointXYZ* other);
  friend void swap(PointXYZ& a, PointXYZ& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline PointXYZ* New() const final {
    return CreateMaybeMessage<PointXYZ>(NULL);
  }

  PointXYZ* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<PointXYZ>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const PointXYZ& from);
  void MergeFrom(const PointXYZ& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PointXYZ* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // float x = 1;
  void clear_x();
  static const int kXFieldNumber = 1;
  float x() const;
  void set_x(float value);

  // float y = 2;
  void clear_y();
  static const int kYFieldNumber = 2;
  float y() const;
  void set_y(float value);

  // float z = 3;
  void clear_z();
  static const int kZFieldNumber = 3;
  float z() const;
  void set_z(float value);

  // @@protoc_insertion_point(class_scope:protob.PointXYZ)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  float x_;
  float y_;
  float z_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_openarkproto_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class PointIJ : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:protob.PointIJ) */ {
 public:
  PointIJ();
  virtual ~PointIJ();

  PointIJ(const PointIJ& from);

  inline PointIJ& operator=(const PointIJ& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  PointIJ(PointIJ&& from) noexcept
    : PointIJ() {
    *this = ::std::move(from);
  }

  inline PointIJ& operator=(PointIJ&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const PointIJ& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PointIJ* internal_default_instance() {
    return reinterpret_cast<const PointIJ*>(
               &_PointIJ_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    4;

  void Swap(PointIJ* other);
  friend void swap(PointIJ& a, PointIJ& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline PointIJ* New() const final {
    return CreateMaybeMessage<PointIJ>(NULL);
  }

  PointIJ* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<PointIJ>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const PointIJ& from);
  void MergeFrom(const PointIJ& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PointIJ* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int32 i = 1;
  void clear_i();
  static const int kIFieldNumber = 1;
  ::google::protobuf::int32 i() const;
  void set_i(::google::protobuf::int32 value);

  // int32 j = 2;
  void clear_j();
  static const int kJFieldNumber = 2;
  ::google::protobuf::int32 j() const;
  void set_j(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:protob.PointIJ)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 i_;
  ::google::protobuf::int32 j_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_openarkproto_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Hands

// repeated .protob.Hand hands = 1;
inline int Hands::hands_size() const {
  return hands_.size();
}
inline void Hands::clear_hands() {
  hands_.Clear();
}
inline ::protob::Hand* Hands::mutable_hands(int index) {
  // @@protoc_insertion_point(field_mutable:protob.Hands.hands)
  return hands_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::protob::Hand >*
Hands::mutable_hands() {
  // @@protoc_insertion_point(field_mutable_list:protob.Hands.hands)
  return &hands_;
}
inline const ::protob::Hand& Hands::hands(int index) const {
  // @@protoc_insertion_point(field_get:protob.Hands.hands)
  return hands_.Get(index);
}
inline ::protob::Hand* Hands::add_hands() {
  // @@protoc_insertion_point(field_add:protob.Hands.hands)
  return hands_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::protob::Hand >&
Hands::hands() const {
  // @@protoc_insertion_point(field_list:protob.Hands.hands)
  return hands_;
}

// -------------------------------------------------------------------

// Hand

// repeated .protob.Point fingers = 1;
inline int Hand::fingers_size() const {
  return fingers_.size();
}
inline void Hand::clear_fingers() {
  fingers_.Clear();
}
inline ::protob::Point* Hand::mutable_fingers(int index) {
  // @@protoc_insertion_point(field_mutable:protob.Hand.fingers)
  return fingers_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::protob::Point >*
Hand::mutable_fingers() {
  // @@protoc_insertion_point(field_mutable_list:protob.Hand.fingers)
  return &fingers_;
}
inline const ::protob::Point& Hand::fingers(int index) const {
  // @@protoc_insertion_point(field_get:protob.Hand.fingers)
  return fingers_.Get(index);
}
inline ::protob::Point* Hand::add_fingers() {
  // @@protoc_insertion_point(field_add:protob.Hand.fingers)
  return fingers_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::protob::Point >&
Hand::fingers() const {
  // @@protoc_insertion_point(field_list:protob.Hand.fingers)
  return fingers_;
}

// repeated .protob.Point wrist = 2;
inline int Hand::wrist_size() const {
  return wrist_.size();
}
inline void Hand::clear_wrist() {
  wrist_.Clear();
}
inline ::protob::Point* Hand::mutable_wrist(int index) {
  // @@protoc_insertion_point(field_mutable:protob.Hand.wrist)
  return wrist_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::protob::Point >*
Hand::mutable_wrist() {
  // @@protoc_insertion_point(field_mutable_list:protob.Hand.wrist)
  return &wrist_;
}
inline const ::protob::Point& Hand::wrist(int index) const {
  // @@protoc_insertion_point(field_get:protob.Hand.wrist)
  return wrist_.Get(index);
}
inline ::protob::Point* Hand::add_wrist() {
  // @@protoc_insertion_point(field_add:protob.Hand.wrist)
  return wrist_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::protob::Point >&
Hand::wrist() const {
  // @@protoc_insertion_point(field_list:protob.Hand.wrist)
  return wrist_;
}

// .protob.Point palmCenter = 3;
inline bool Hand::has_palmcenter() const {
  return this != internal_default_instance() && palmcenter_ != NULL;
}
inline void Hand::clear_palmcenter() {
  if (GetArenaNoVirtual() == NULL && palmcenter_ != NULL) {
    delete palmcenter_;
  }
  palmcenter_ = NULL;
}
inline const ::protob::Point& Hand::_internal_palmcenter() const {
  return *palmcenter_;
}
inline const ::protob::Point& Hand::palmcenter() const {
  const ::protob::Point* p = palmcenter_;
  // @@protoc_insertion_point(field_get:protob.Hand.palmCenter)
  return p != NULL ? *p : *reinterpret_cast<const ::protob::Point*>(
      &::protob::_Point_default_instance_);
}
inline ::protob::Point* Hand::release_palmcenter() {
  // @@protoc_insertion_point(field_release:protob.Hand.palmCenter)
  
  ::protob::Point* temp = palmcenter_;
  palmcenter_ = NULL;
  return temp;
}
inline ::protob::Point* Hand::mutable_palmcenter() {
  
  if (palmcenter_ == NULL) {
    auto* p = CreateMaybeMessage<::protob::Point>(GetArenaNoVirtual());
    palmcenter_ = p;
  }
  // @@protoc_insertion_point(field_mutable:protob.Hand.palmCenter)
  return palmcenter_;
}
inline void Hand::set_allocated_palmcenter(::protob::Point* palmcenter) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete palmcenter_;
  }
  if (palmcenter) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      palmcenter = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, palmcenter, submessage_arena);
    }
    
  } else {
    
  }
  palmcenter_ = palmcenter;
  // @@protoc_insertion_point(field_set_allocated:protob.Hand.palmCenter)
}

// -------------------------------------------------------------------

// Point

// .protob.PointXYZ pointXYZ = 1;
inline bool Point::has_pointxyz() const {
  return this != internal_default_instance() && pointxyz_ != NULL;
}
inline void Point::clear_pointxyz() {
  if (GetArenaNoVirtual() == NULL && pointxyz_ != NULL) {
    delete pointxyz_;
  }
  pointxyz_ = NULL;
}
inline const ::protob::PointXYZ& Point::_internal_pointxyz() const {
  return *pointxyz_;
}
inline const ::protob::PointXYZ& Point::pointxyz() const {
  const ::protob::PointXYZ* p = pointxyz_;
  // @@protoc_insertion_point(field_get:protob.Point.pointXYZ)
  return p != NULL ? *p : *reinterpret_cast<const ::protob::PointXYZ*>(
      &::protob::_PointXYZ_default_instance_);
}
inline ::protob::PointXYZ* Point::release_pointxyz() {
  // @@protoc_insertion_point(field_release:protob.Point.pointXYZ)
  
  ::protob::PointXYZ* temp = pointxyz_;
  pointxyz_ = NULL;
  return temp;
}
inline ::protob::PointXYZ* Point::mutable_pointxyz() {
  
  if (pointxyz_ == NULL) {
    auto* p = CreateMaybeMessage<::protob::PointXYZ>(GetArenaNoVirtual());
    pointxyz_ = p;
  }
  // @@protoc_insertion_point(field_mutable:protob.Point.pointXYZ)
  return pointxyz_;
}
inline void Point::set_allocated_pointxyz(::protob::PointXYZ* pointxyz) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete pointxyz_;
  }
  if (pointxyz) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      pointxyz = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, pointxyz, submessage_arena);
    }
    
  } else {
    
  }
  pointxyz_ = pointxyz;
  // @@protoc_insertion_point(field_set_allocated:protob.Point.pointXYZ)
}

// .protob.PointIJ pointIJ = 2;
inline bool Point::has_pointij() const {
  return this != internal_default_instance() && pointij_ != NULL;
}
inline void Point::clear_pointij() {
  if (GetArenaNoVirtual() == NULL && pointij_ != NULL) {
    delete pointij_;
  }
  pointij_ = NULL;
}
inline const ::protob::PointIJ& Point::_internal_pointij() const {
  return *pointij_;
}
inline const ::protob::PointIJ& Point::pointij() const {
  const ::protob::PointIJ* p = pointij_;
  // @@protoc_insertion_point(field_get:protob.Point.pointIJ)
  return p != NULL ? *p : *reinterpret_cast<const ::protob::PointIJ*>(
      &::protob::_PointIJ_default_instance_);
}
inline ::protob::PointIJ* Point::release_pointij() {
  // @@protoc_insertion_point(field_release:protob.Point.pointIJ)
  
  ::protob::PointIJ* temp = pointij_;
  pointij_ = NULL;
  return temp;
}
inline ::protob::PointIJ* Point::mutable_pointij() {
  
  if (pointij_ == NULL) {
    auto* p = CreateMaybeMessage<::protob::PointIJ>(GetArenaNoVirtual());
    pointij_ = p;
  }
  // @@protoc_insertion_point(field_mutable:protob.Point.pointIJ)
  return pointij_;
}
inline void Point::set_allocated_pointij(::protob::PointIJ* pointij) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete pointij_;
  }
  if (pointij) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      pointij = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, pointij, submessage_arena);
    }
    
  } else {
    
  }
  pointij_ = pointij;
  // @@protoc_insertion_point(field_set_allocated:protob.Point.pointIJ)
}

// -------------------------------------------------------------------

// PointXYZ

// float x = 1;
inline void PointXYZ::clear_x() {
  x_ = 0;
}
inline float PointXYZ::x() const {
  // @@protoc_insertion_point(field_get:protob.PointXYZ.x)
  return x_;
}
inline void PointXYZ::set_x(float value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:protob.PointXYZ.x)
}

// float y = 2;
inline void PointXYZ::clear_y() {
  y_ = 0;
}
inline float PointXYZ::y() const {
  // @@protoc_insertion_point(field_get:protob.PointXYZ.y)
  return y_;
}
inline void PointXYZ::set_y(float value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:protob.PointXYZ.y)
}

// float z = 3;
inline void PointXYZ::clear_z() {
  z_ = 0;
}
inline float PointXYZ::z() const {
  // @@protoc_insertion_point(field_get:protob.PointXYZ.z)
  return z_;
}
inline void PointXYZ::set_z(float value) {
  
  z_ = value;
  // @@protoc_insertion_point(field_set:protob.PointXYZ.z)
}

// -------------------------------------------------------------------

// PointIJ

// int32 i = 1;
inline void PointIJ::clear_i() {
  i_ = 0;
}
inline ::google::protobuf::int32 PointIJ::i() const {
  // @@protoc_insertion_point(field_get:protob.PointIJ.i)
  return i_;
}
inline void PointIJ::set_i(::google::protobuf::int32 value) {
  
  i_ = value;
  // @@protoc_insertion_point(field_set:protob.PointIJ.i)
}

// int32 j = 2;
inline void PointIJ::clear_j() {
  j_ = 0;
}
inline ::google::protobuf::int32 PointIJ::j() const {
  // @@protoc_insertion_point(field_get:protob.PointIJ.j)
  return j_;
}
inline void PointIJ::set_j(::google::protobuf::int32 value) {
  
  j_ = value;
  // @@protoc_insertion_point(field_set:protob.PointIJ.j)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protob

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_openarkproto_2eproto
