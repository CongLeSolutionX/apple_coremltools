// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GLMClassifier.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_GLMClassifier_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_GLMClassifier_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_util.h>
#include "DataStructures.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_GLMClassifier_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_GLMClassifier_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
namespace CoreML {
namespace Specification {
class GLMClassifier;
struct GLMClassifierDefaultTypeInternal;
extern GLMClassifierDefaultTypeInternal _GLMClassifier_default_instance_;
class GLMClassifier_DoubleArray;
struct GLMClassifier_DoubleArrayDefaultTypeInternal;
extern GLMClassifier_DoubleArrayDefaultTypeInternal _GLMClassifier_DoubleArray_default_instance_;
}  // namespace Specification
}  // namespace CoreML
PROTOBUF_NAMESPACE_OPEN
template<> ::CoreML::Specification::GLMClassifier* Arena::CreateMaybeMessage<::CoreML::Specification::GLMClassifier>(Arena*);
template<> ::CoreML::Specification::GLMClassifier_DoubleArray* Arena::CreateMaybeMessage<::CoreML::Specification::GLMClassifier_DoubleArray>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace CoreML {
namespace Specification {

enum GLMClassifier_PostEvaluationTransform : int {
  GLMClassifier_PostEvaluationTransform_Logit = 0,
  GLMClassifier_PostEvaluationTransform_Probit = 1,
  GLMClassifier_PostEvaluationTransform_GLMClassifier_PostEvaluationTransform_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  GLMClassifier_PostEvaluationTransform_GLMClassifier_PostEvaluationTransform_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool GLMClassifier_PostEvaluationTransform_IsValid(int value);
constexpr GLMClassifier_PostEvaluationTransform GLMClassifier_PostEvaluationTransform_PostEvaluationTransform_MIN = GLMClassifier_PostEvaluationTransform_Logit;
constexpr GLMClassifier_PostEvaluationTransform GLMClassifier_PostEvaluationTransform_PostEvaluationTransform_MAX = GLMClassifier_PostEvaluationTransform_Probit;
constexpr int GLMClassifier_PostEvaluationTransform_PostEvaluationTransform_ARRAYSIZE = GLMClassifier_PostEvaluationTransform_PostEvaluationTransform_MAX + 1;

const std::string& GLMClassifier_PostEvaluationTransform_Name(GLMClassifier_PostEvaluationTransform value);
template<typename T>
inline const std::string& GLMClassifier_PostEvaluationTransform_Name(T enum_t_value) {
  static_assert(::std::is_same<T, GLMClassifier_PostEvaluationTransform>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function GLMClassifier_PostEvaluationTransform_Name.");
  return GLMClassifier_PostEvaluationTransform_Name(static_cast<GLMClassifier_PostEvaluationTransform>(enum_t_value));
}
bool GLMClassifier_PostEvaluationTransform_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, GLMClassifier_PostEvaluationTransform* value);
enum GLMClassifier_ClassEncoding : int {
  GLMClassifier_ClassEncoding_ReferenceClass = 0,
  GLMClassifier_ClassEncoding_OneVsRest = 1,
  GLMClassifier_ClassEncoding_GLMClassifier_ClassEncoding_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  GLMClassifier_ClassEncoding_GLMClassifier_ClassEncoding_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool GLMClassifier_ClassEncoding_IsValid(int value);
constexpr GLMClassifier_ClassEncoding GLMClassifier_ClassEncoding_ClassEncoding_MIN = GLMClassifier_ClassEncoding_ReferenceClass;
constexpr GLMClassifier_ClassEncoding GLMClassifier_ClassEncoding_ClassEncoding_MAX = GLMClassifier_ClassEncoding_OneVsRest;
constexpr int GLMClassifier_ClassEncoding_ClassEncoding_ARRAYSIZE = GLMClassifier_ClassEncoding_ClassEncoding_MAX + 1;

const std::string& GLMClassifier_ClassEncoding_Name(GLMClassifier_ClassEncoding value);
template<typename T>
inline const std::string& GLMClassifier_ClassEncoding_Name(T enum_t_value) {
  static_assert(::std::is_same<T, GLMClassifier_ClassEncoding>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function GLMClassifier_ClassEncoding_Name.");
  return GLMClassifier_ClassEncoding_Name(static_cast<GLMClassifier_ClassEncoding>(enum_t_value));
}
bool GLMClassifier_ClassEncoding_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, GLMClassifier_ClassEncoding* value);
// ===================================================================

class GLMClassifier_DoubleArray final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:CoreML.Specification.GLMClassifier.DoubleArray) */ {
 public:
  inline GLMClassifier_DoubleArray() : GLMClassifier_DoubleArray(nullptr) {}
  ~GLMClassifier_DoubleArray() override;
  explicit constexpr GLMClassifier_DoubleArray(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GLMClassifier_DoubleArray(const GLMClassifier_DoubleArray& from);
  GLMClassifier_DoubleArray(GLMClassifier_DoubleArray&& from) noexcept
    : GLMClassifier_DoubleArray() {
    *this = ::std::move(from);
  }

  inline GLMClassifier_DoubleArray& operator=(const GLMClassifier_DoubleArray& from) {
    CopyFrom(from);
    return *this;
  }
  inline GLMClassifier_DoubleArray& operator=(GLMClassifier_DoubleArray&& from) noexcept {
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

  static const GLMClassifier_DoubleArray& default_instance() {
    return *internal_default_instance();
  }
  static inline const GLMClassifier_DoubleArray* internal_default_instance() {
    return reinterpret_cast<const GLMClassifier_DoubleArray*>(
               &_GLMClassifier_DoubleArray_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GLMClassifier_DoubleArray& a, GLMClassifier_DoubleArray& b) {
    a.Swap(&b);
  }
  inline void Swap(GLMClassifier_DoubleArray* other) {
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
  void UnsafeArenaSwap(GLMClassifier_DoubleArray* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GLMClassifier_DoubleArray* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GLMClassifier_DoubleArray>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const GLMClassifier_DoubleArray& from);
  void MergeFrom(const GLMClassifier_DoubleArray& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(GLMClassifier_DoubleArray* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "CoreML.Specification.GLMClassifier.DoubleArray";
  }
  protected:
  explicit GLMClassifier_DoubleArray(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kValueFieldNumber = 1,
  };
  // repeated double value = 1;
  int value_size() const;
  private:
  int _internal_value_size() const;
  public:
  void clear_value();
  private:
  double _internal_value(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
      _internal_value() const;
  void _internal_add_value(double value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
      _internal_mutable_value();
  public:
  double value(int index) const;
  void set_value(int index, double value);
  void add_value(double value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
      value() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
      mutable_value();

  // @@protoc_insertion_point(class_scope:CoreML.Specification.GLMClassifier.DoubleArray)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double > value_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_GLMClassifier_2eproto;
};
// -------------------------------------------------------------------

class GLMClassifier final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:CoreML.Specification.GLMClassifier) */ {
 public:
  inline GLMClassifier() : GLMClassifier(nullptr) {}
  ~GLMClassifier() override;
  explicit constexpr GLMClassifier(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GLMClassifier(const GLMClassifier& from);
  GLMClassifier(GLMClassifier&& from) noexcept
    : GLMClassifier() {
    *this = ::std::move(from);
  }

  inline GLMClassifier& operator=(const GLMClassifier& from) {
    CopyFrom(from);
    return *this;
  }
  inline GLMClassifier& operator=(GLMClassifier&& from) noexcept {
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

  static const GLMClassifier& default_instance() {
    return *internal_default_instance();
  }
  enum ClassLabelsCase {
    kStringClassLabels = 100,
    kInt64ClassLabels = 101,
    CLASSLABELS_NOT_SET = 0,
  };

  static inline const GLMClassifier* internal_default_instance() {
    return reinterpret_cast<const GLMClassifier*>(
               &_GLMClassifier_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(GLMClassifier& a, GLMClassifier& b) {
    a.Swap(&b);
  }
  inline void Swap(GLMClassifier* other) {
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
  void UnsafeArenaSwap(GLMClassifier* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GLMClassifier* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GLMClassifier>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const GLMClassifier& from);
  void MergeFrom(const GLMClassifier& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(GLMClassifier* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "CoreML.Specification.GLMClassifier";
  }
  protected:
  explicit GLMClassifier(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  typedef GLMClassifier_DoubleArray DoubleArray;

  typedef GLMClassifier_PostEvaluationTransform PostEvaluationTransform;
  static constexpr PostEvaluationTransform Logit =
    GLMClassifier_PostEvaluationTransform_Logit;
  static constexpr PostEvaluationTransform Probit =
    GLMClassifier_PostEvaluationTransform_Probit;
  static inline bool PostEvaluationTransform_IsValid(int value) {
    return GLMClassifier_PostEvaluationTransform_IsValid(value);
  }
  static constexpr PostEvaluationTransform PostEvaluationTransform_MIN =
    GLMClassifier_PostEvaluationTransform_PostEvaluationTransform_MIN;
  static constexpr PostEvaluationTransform PostEvaluationTransform_MAX =
    GLMClassifier_PostEvaluationTransform_PostEvaluationTransform_MAX;
  static constexpr int PostEvaluationTransform_ARRAYSIZE =
    GLMClassifier_PostEvaluationTransform_PostEvaluationTransform_ARRAYSIZE;
  template<typename T>
  static inline const std::string& PostEvaluationTransform_Name(T enum_t_value) {
    static_assert(::std::is_same<T, PostEvaluationTransform>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function PostEvaluationTransform_Name.");
    return GLMClassifier_PostEvaluationTransform_Name(enum_t_value);
  }
  static inline bool PostEvaluationTransform_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      PostEvaluationTransform* value) {
    return GLMClassifier_PostEvaluationTransform_Parse(name, value);
  }

  typedef GLMClassifier_ClassEncoding ClassEncoding;
  static constexpr ClassEncoding ReferenceClass =
    GLMClassifier_ClassEncoding_ReferenceClass;
  static constexpr ClassEncoding OneVsRest =
    GLMClassifier_ClassEncoding_OneVsRest;
  static inline bool ClassEncoding_IsValid(int value) {
    return GLMClassifier_ClassEncoding_IsValid(value);
  }
  static constexpr ClassEncoding ClassEncoding_MIN =
    GLMClassifier_ClassEncoding_ClassEncoding_MIN;
  static constexpr ClassEncoding ClassEncoding_MAX =
    GLMClassifier_ClassEncoding_ClassEncoding_MAX;
  static constexpr int ClassEncoding_ARRAYSIZE =
    GLMClassifier_ClassEncoding_ClassEncoding_ARRAYSIZE;
  template<typename T>
  static inline const std::string& ClassEncoding_Name(T enum_t_value) {
    static_assert(::std::is_same<T, ClassEncoding>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function ClassEncoding_Name.");
    return GLMClassifier_ClassEncoding_Name(enum_t_value);
  }
  static inline bool ClassEncoding_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      ClassEncoding* value) {
    return GLMClassifier_ClassEncoding_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kWeightsFieldNumber = 1,
    kOffsetFieldNumber = 2,
    kPostEvaluationTransformFieldNumber = 3,
    kClassEncodingFieldNumber = 4,
    kStringClassLabelsFieldNumber = 100,
    kInt64ClassLabelsFieldNumber = 101,
  };
  // repeated .CoreML.Specification.GLMClassifier.DoubleArray weights = 1;
  int weights_size() const;
  private:
  int _internal_weights_size() const;
  public:
  void clear_weights();
  ::CoreML::Specification::GLMClassifier_DoubleArray* mutable_weights(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::CoreML::Specification::GLMClassifier_DoubleArray >*
      mutable_weights();
  private:
  const ::CoreML::Specification::GLMClassifier_DoubleArray& _internal_weights(int index) const;
  ::CoreML::Specification::GLMClassifier_DoubleArray* _internal_add_weights();
  public:
  const ::CoreML::Specification::GLMClassifier_DoubleArray& weights(int index) const;
  ::CoreML::Specification::GLMClassifier_DoubleArray* add_weights();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::CoreML::Specification::GLMClassifier_DoubleArray >&
      weights() const;

  // repeated double offset = 2;
  int offset_size() const;
  private:
  int _internal_offset_size() const;
  public:
  void clear_offset();
  private:
  double _internal_offset(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
      _internal_offset() const;
  void _internal_add_offset(double value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
      _internal_mutable_offset();
  public:
  double offset(int index) const;
  void set_offset(int index, double value);
  void add_offset(double value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
      offset() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
      mutable_offset();

  // .CoreML.Specification.GLMClassifier.PostEvaluationTransform postEvaluationTransform = 3;
  void clear_postevaluationtransform();
  ::CoreML::Specification::GLMClassifier_PostEvaluationTransform postevaluationtransform() const;
  void set_postevaluationtransform(::CoreML::Specification::GLMClassifier_PostEvaluationTransform value);
  private:
  ::CoreML::Specification::GLMClassifier_PostEvaluationTransform _internal_postevaluationtransform() const;
  void _internal_set_postevaluationtransform(::CoreML::Specification::GLMClassifier_PostEvaluationTransform value);
  public:

  // .CoreML.Specification.GLMClassifier.ClassEncoding classEncoding = 4;
  void clear_classencoding();
  ::CoreML::Specification::GLMClassifier_ClassEncoding classencoding() const;
  void set_classencoding(::CoreML::Specification::GLMClassifier_ClassEncoding value);
  private:
  ::CoreML::Specification::GLMClassifier_ClassEncoding _internal_classencoding() const;
  void _internal_set_classencoding(::CoreML::Specification::GLMClassifier_ClassEncoding value);
  public:

  // .CoreML.Specification.StringVector stringClassLabels = 100;
  bool has_stringclasslabels() const;
  private:
  bool _internal_has_stringclasslabels() const;
  public:
  void clear_stringclasslabels();
  const ::CoreML::Specification::StringVector& stringclasslabels() const;
  PROTOBUF_NODISCARD ::CoreML::Specification::StringVector* release_stringclasslabels();
  ::CoreML::Specification::StringVector* mutable_stringclasslabels();
  void set_allocated_stringclasslabels(::CoreML::Specification::StringVector* stringclasslabels);
  private:
  const ::CoreML::Specification::StringVector& _internal_stringclasslabels() const;
  ::CoreML::Specification::StringVector* _internal_mutable_stringclasslabels();
  public:
  void unsafe_arena_set_allocated_stringclasslabels(
      ::CoreML::Specification::StringVector* stringclasslabels);
  ::CoreML::Specification::StringVector* unsafe_arena_release_stringclasslabels();

  // .CoreML.Specification.Int64Vector int64ClassLabels = 101;
  bool has_int64classlabels() const;
  private:
  bool _internal_has_int64classlabels() const;
  public:
  void clear_int64classlabels();
  const ::CoreML::Specification::Int64Vector& int64classlabels() const;
  PROTOBUF_NODISCARD ::CoreML::Specification::Int64Vector* release_int64classlabels();
  ::CoreML::Specification::Int64Vector* mutable_int64classlabels();
  void set_allocated_int64classlabels(::CoreML::Specification::Int64Vector* int64classlabels);
  private:
  const ::CoreML::Specification::Int64Vector& _internal_int64classlabels() const;
  ::CoreML::Specification::Int64Vector* _internal_mutable_int64classlabels();
  public:
  void unsafe_arena_set_allocated_int64classlabels(
      ::CoreML::Specification::Int64Vector* int64classlabels);
  ::CoreML::Specification::Int64Vector* unsafe_arena_release_int64classlabels();

  void clear_ClassLabels();
  ClassLabelsCase ClassLabels_case() const;
  // @@protoc_insertion_point(class_scope:CoreML.Specification.GLMClassifier)
 private:
  class _Internal;
  void set_has_stringclasslabels();
  void set_has_int64classlabels();

  inline bool has_ClassLabels() const;
  inline void clear_has_ClassLabels();

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::CoreML::Specification::GLMClassifier_DoubleArray > weights_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double > offset_;
  int postevaluationtransform_;
  int classencoding_;
  union ClassLabelsUnion {
    constexpr ClassLabelsUnion() : _constinit_{} {}
      ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized _constinit_;
    ::CoreML::Specification::StringVector* stringclasslabels_;
    ::CoreML::Specification::Int64Vector* int64classlabels_;
  } ClassLabels_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  uint32_t _oneof_case_[1];

  friend struct ::TableStruct_GLMClassifier_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GLMClassifier_DoubleArray

// repeated double value = 1;
inline int GLMClassifier_DoubleArray::_internal_value_size() const {
  return value_.size();
}
inline int GLMClassifier_DoubleArray::value_size() const {
  return _internal_value_size();
}
inline void GLMClassifier_DoubleArray::clear_value() {
  value_.Clear();
}
inline double GLMClassifier_DoubleArray::_internal_value(int index) const {
  return value_.Get(index);
}
inline double GLMClassifier_DoubleArray::value(int index) const {
  // @@protoc_insertion_point(field_get:CoreML.Specification.GLMClassifier.DoubleArray.value)
  return _internal_value(index);
}
inline void GLMClassifier_DoubleArray::set_value(int index, double value) {
  value_.Set(index, value);
  // @@protoc_insertion_point(field_set:CoreML.Specification.GLMClassifier.DoubleArray.value)
}
inline void GLMClassifier_DoubleArray::_internal_add_value(double value) {
  value_.Add(value);
}
inline void GLMClassifier_DoubleArray::add_value(double value) {
  _internal_add_value(value);
  // @@protoc_insertion_point(field_add:CoreML.Specification.GLMClassifier.DoubleArray.value)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
GLMClassifier_DoubleArray::_internal_value() const {
  return value_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
GLMClassifier_DoubleArray::value() const {
  // @@protoc_insertion_point(field_list:CoreML.Specification.GLMClassifier.DoubleArray.value)
  return _internal_value();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
GLMClassifier_DoubleArray::_internal_mutable_value() {
  return &value_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
GLMClassifier_DoubleArray::mutable_value() {
  // @@protoc_insertion_point(field_mutable_list:CoreML.Specification.GLMClassifier.DoubleArray.value)
  return _internal_mutable_value();
}

// -------------------------------------------------------------------

// GLMClassifier

// repeated .CoreML.Specification.GLMClassifier.DoubleArray weights = 1;
inline int GLMClassifier::_internal_weights_size() const {
  return weights_.size();
}
inline int GLMClassifier::weights_size() const {
  return _internal_weights_size();
}
inline void GLMClassifier::clear_weights() {
  weights_.Clear();
}
inline ::CoreML::Specification::GLMClassifier_DoubleArray* GLMClassifier::mutable_weights(int index) {
  // @@protoc_insertion_point(field_mutable:CoreML.Specification.GLMClassifier.weights)
  return weights_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::CoreML::Specification::GLMClassifier_DoubleArray >*
GLMClassifier::mutable_weights() {
  // @@protoc_insertion_point(field_mutable_list:CoreML.Specification.GLMClassifier.weights)
  return &weights_;
}
inline const ::CoreML::Specification::GLMClassifier_DoubleArray& GLMClassifier::_internal_weights(int index) const {
  return weights_.Get(index);
}
inline const ::CoreML::Specification::GLMClassifier_DoubleArray& GLMClassifier::weights(int index) const {
  // @@protoc_insertion_point(field_get:CoreML.Specification.GLMClassifier.weights)
  return _internal_weights(index);
}
inline ::CoreML::Specification::GLMClassifier_DoubleArray* GLMClassifier::_internal_add_weights() {
  return weights_.Add();
}
inline ::CoreML::Specification::GLMClassifier_DoubleArray* GLMClassifier::add_weights() {
  ::CoreML::Specification::GLMClassifier_DoubleArray* _add = _internal_add_weights();
  // @@protoc_insertion_point(field_add:CoreML.Specification.GLMClassifier.weights)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::CoreML::Specification::GLMClassifier_DoubleArray >&
GLMClassifier::weights() const {
  // @@protoc_insertion_point(field_list:CoreML.Specification.GLMClassifier.weights)
  return weights_;
}

// repeated double offset = 2;
inline int GLMClassifier::_internal_offset_size() const {
  return offset_.size();
}
inline int GLMClassifier::offset_size() const {
  return _internal_offset_size();
}
inline void GLMClassifier::clear_offset() {
  offset_.Clear();
}
inline double GLMClassifier::_internal_offset(int index) const {
  return offset_.Get(index);
}
inline double GLMClassifier::offset(int index) const {
  // @@protoc_insertion_point(field_get:CoreML.Specification.GLMClassifier.offset)
  return _internal_offset(index);
}
inline void GLMClassifier::set_offset(int index, double value) {
  offset_.Set(index, value);
  // @@protoc_insertion_point(field_set:CoreML.Specification.GLMClassifier.offset)
}
inline void GLMClassifier::_internal_add_offset(double value) {
  offset_.Add(value);
}
inline void GLMClassifier::add_offset(double value) {
  _internal_add_offset(value);
  // @@protoc_insertion_point(field_add:CoreML.Specification.GLMClassifier.offset)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
GLMClassifier::_internal_offset() const {
  return offset_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
GLMClassifier::offset() const {
  // @@protoc_insertion_point(field_list:CoreML.Specification.GLMClassifier.offset)
  return _internal_offset();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
GLMClassifier::_internal_mutable_offset() {
  return &offset_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
GLMClassifier::mutable_offset() {
  // @@protoc_insertion_point(field_mutable_list:CoreML.Specification.GLMClassifier.offset)
  return _internal_mutable_offset();
}

// .CoreML.Specification.GLMClassifier.PostEvaluationTransform postEvaluationTransform = 3;
inline void GLMClassifier::clear_postevaluationtransform() {
  postevaluationtransform_ = 0;
}
inline ::CoreML::Specification::GLMClassifier_PostEvaluationTransform GLMClassifier::_internal_postevaluationtransform() const {
  return static_cast< ::CoreML::Specification::GLMClassifier_PostEvaluationTransform >(postevaluationtransform_);
}
inline ::CoreML::Specification::GLMClassifier_PostEvaluationTransform GLMClassifier::postevaluationtransform() const {
  // @@protoc_insertion_point(field_get:CoreML.Specification.GLMClassifier.postEvaluationTransform)
  return _internal_postevaluationtransform();
}
inline void GLMClassifier::_internal_set_postevaluationtransform(::CoreML::Specification::GLMClassifier_PostEvaluationTransform value) {
  
  postevaluationtransform_ = value;
}
inline void GLMClassifier::set_postevaluationtransform(::CoreML::Specification::GLMClassifier_PostEvaluationTransform value) {
  _internal_set_postevaluationtransform(value);
  // @@protoc_insertion_point(field_set:CoreML.Specification.GLMClassifier.postEvaluationTransform)
}

// .CoreML.Specification.GLMClassifier.ClassEncoding classEncoding = 4;
inline void GLMClassifier::clear_classencoding() {
  classencoding_ = 0;
}
inline ::CoreML::Specification::GLMClassifier_ClassEncoding GLMClassifier::_internal_classencoding() const {
  return static_cast< ::CoreML::Specification::GLMClassifier_ClassEncoding >(classencoding_);
}
inline ::CoreML::Specification::GLMClassifier_ClassEncoding GLMClassifier::classencoding() const {
  // @@protoc_insertion_point(field_get:CoreML.Specification.GLMClassifier.classEncoding)
  return _internal_classencoding();
}
inline void GLMClassifier::_internal_set_classencoding(::CoreML::Specification::GLMClassifier_ClassEncoding value) {
  
  classencoding_ = value;
}
inline void GLMClassifier::set_classencoding(::CoreML::Specification::GLMClassifier_ClassEncoding value) {
  _internal_set_classencoding(value);
  // @@protoc_insertion_point(field_set:CoreML.Specification.GLMClassifier.classEncoding)
}

// .CoreML.Specification.StringVector stringClassLabels = 100;
inline bool GLMClassifier::_internal_has_stringclasslabels() const {
  return ClassLabels_case() == kStringClassLabels;
}
inline bool GLMClassifier::has_stringclasslabels() const {
  return _internal_has_stringclasslabels();
}
inline void GLMClassifier::set_has_stringclasslabels() {
  _oneof_case_[0] = kStringClassLabels;
}
inline ::CoreML::Specification::StringVector* GLMClassifier::release_stringclasslabels() {
  // @@protoc_insertion_point(field_release:CoreML.Specification.GLMClassifier.stringClassLabels)
  if (_internal_has_stringclasslabels()) {
    clear_has_ClassLabels();
      ::CoreML::Specification::StringVector* temp = ClassLabels_.stringclasslabels_;
    if (GetArenaForAllocation() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    ClassLabels_.stringclasslabels_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::CoreML::Specification::StringVector& GLMClassifier::_internal_stringclasslabels() const {
  return _internal_has_stringclasslabels()
      ? *ClassLabels_.stringclasslabels_
      : reinterpret_cast< ::CoreML::Specification::StringVector&>(::CoreML::Specification::_StringVector_default_instance_);
}
inline const ::CoreML::Specification::StringVector& GLMClassifier::stringclasslabels() const {
  // @@protoc_insertion_point(field_get:CoreML.Specification.GLMClassifier.stringClassLabels)
  return _internal_stringclasslabels();
}
inline ::CoreML::Specification::StringVector* GLMClassifier::unsafe_arena_release_stringclasslabels() {
  // @@protoc_insertion_point(field_unsafe_arena_release:CoreML.Specification.GLMClassifier.stringClassLabels)
  if (_internal_has_stringclasslabels()) {
    clear_has_ClassLabels();
    ::CoreML::Specification::StringVector* temp = ClassLabels_.stringclasslabels_;
    ClassLabels_.stringclasslabels_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void GLMClassifier::unsafe_arena_set_allocated_stringclasslabels(::CoreML::Specification::StringVector* stringclasslabels) {
  clear_ClassLabels();
  if (stringclasslabels) {
    set_has_stringclasslabels();
    ClassLabels_.stringclasslabels_ = stringclasslabels;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:CoreML.Specification.GLMClassifier.stringClassLabels)
}
inline ::CoreML::Specification::StringVector* GLMClassifier::_internal_mutable_stringclasslabels() {
  if (!_internal_has_stringclasslabels()) {
    clear_ClassLabels();
    set_has_stringclasslabels();
    ClassLabels_.stringclasslabels_ = CreateMaybeMessage< ::CoreML::Specification::StringVector >(GetArenaForAllocation());
  }
  return ClassLabels_.stringclasslabels_;
}
inline ::CoreML::Specification::StringVector* GLMClassifier::mutable_stringclasslabels() {
  ::CoreML::Specification::StringVector* _msg = _internal_mutable_stringclasslabels();
  // @@protoc_insertion_point(field_mutable:CoreML.Specification.GLMClassifier.stringClassLabels)
  return _msg;
}

// .CoreML.Specification.Int64Vector int64ClassLabels = 101;
inline bool GLMClassifier::_internal_has_int64classlabels() const {
  return ClassLabels_case() == kInt64ClassLabels;
}
inline bool GLMClassifier::has_int64classlabels() const {
  return _internal_has_int64classlabels();
}
inline void GLMClassifier::set_has_int64classlabels() {
  _oneof_case_[0] = kInt64ClassLabels;
}
inline ::CoreML::Specification::Int64Vector* GLMClassifier::release_int64classlabels() {
  // @@protoc_insertion_point(field_release:CoreML.Specification.GLMClassifier.int64ClassLabels)
  if (_internal_has_int64classlabels()) {
    clear_has_ClassLabels();
      ::CoreML::Specification::Int64Vector* temp = ClassLabels_.int64classlabels_;
    if (GetArenaForAllocation() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    ClassLabels_.int64classlabels_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::CoreML::Specification::Int64Vector& GLMClassifier::_internal_int64classlabels() const {
  return _internal_has_int64classlabels()
      ? *ClassLabels_.int64classlabels_
      : reinterpret_cast< ::CoreML::Specification::Int64Vector&>(::CoreML::Specification::_Int64Vector_default_instance_);
}
inline const ::CoreML::Specification::Int64Vector& GLMClassifier::int64classlabels() const {
  // @@protoc_insertion_point(field_get:CoreML.Specification.GLMClassifier.int64ClassLabels)
  return _internal_int64classlabels();
}
inline ::CoreML::Specification::Int64Vector* GLMClassifier::unsafe_arena_release_int64classlabels() {
  // @@protoc_insertion_point(field_unsafe_arena_release:CoreML.Specification.GLMClassifier.int64ClassLabels)
  if (_internal_has_int64classlabels()) {
    clear_has_ClassLabels();
    ::CoreML::Specification::Int64Vector* temp = ClassLabels_.int64classlabels_;
    ClassLabels_.int64classlabels_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void GLMClassifier::unsafe_arena_set_allocated_int64classlabels(::CoreML::Specification::Int64Vector* int64classlabels) {
  clear_ClassLabels();
  if (int64classlabels) {
    set_has_int64classlabels();
    ClassLabels_.int64classlabels_ = int64classlabels;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:CoreML.Specification.GLMClassifier.int64ClassLabels)
}
inline ::CoreML::Specification::Int64Vector* GLMClassifier::_internal_mutable_int64classlabels() {
  if (!_internal_has_int64classlabels()) {
    clear_ClassLabels();
    set_has_int64classlabels();
    ClassLabels_.int64classlabels_ = CreateMaybeMessage< ::CoreML::Specification::Int64Vector >(GetArenaForAllocation());
  }
  return ClassLabels_.int64classlabels_;
}
inline ::CoreML::Specification::Int64Vector* GLMClassifier::mutable_int64classlabels() {
  ::CoreML::Specification::Int64Vector* _msg = _internal_mutable_int64classlabels();
  // @@protoc_insertion_point(field_mutable:CoreML.Specification.GLMClassifier.int64ClassLabels)
  return _msg;
}

inline bool GLMClassifier::has_ClassLabels() const {
  return ClassLabels_case() != CLASSLABELS_NOT_SET;
}
inline void GLMClassifier::clear_has_ClassLabels() {
  _oneof_case_[0] = CLASSLABELS_NOT_SET;
}
inline GLMClassifier::ClassLabelsCase GLMClassifier::ClassLabels_case() const {
  return GLMClassifier::ClassLabelsCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace Specification
}  // namespace CoreML

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::CoreML::Specification::GLMClassifier_PostEvaluationTransform> : ::std::true_type {};
template <> struct is_proto_enum< ::CoreML::Specification::GLMClassifier_ClassEncoding> : ::std::true_type {};

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_GLMClassifier_2eproto
