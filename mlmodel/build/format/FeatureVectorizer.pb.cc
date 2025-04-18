// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: FeatureVectorizer.proto

#include "FeatureVectorizer.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace CoreML {
namespace Specification {
constexpr FeatureVectorizer_InputColumn::FeatureVectorizer_InputColumn(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : inputcolumn_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , inputdimensions_(uint64_t{0u}){}
struct FeatureVectorizer_InputColumnDefaultTypeInternal {
  constexpr FeatureVectorizer_InputColumnDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~FeatureVectorizer_InputColumnDefaultTypeInternal() {}
  union {
    FeatureVectorizer_InputColumn _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT FeatureVectorizer_InputColumnDefaultTypeInternal _FeatureVectorizer_InputColumn_default_instance_;
constexpr FeatureVectorizer::FeatureVectorizer(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : inputlist_(){}
struct FeatureVectorizerDefaultTypeInternal {
  constexpr FeatureVectorizerDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~FeatureVectorizerDefaultTypeInternal() {}
  union {
    FeatureVectorizer _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT FeatureVectorizerDefaultTypeInternal _FeatureVectorizer_default_instance_;
}  // namespace Specification
}  // namespace CoreML
namespace CoreML {
namespace Specification {

// ===================================================================

class FeatureVectorizer_InputColumn::_Internal {
 public:
};

FeatureVectorizer_InputColumn::FeatureVectorizer_InputColumn(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:CoreML.Specification.FeatureVectorizer.InputColumn)
}
FeatureVectorizer_InputColumn::FeatureVectorizer_InputColumn(const FeatureVectorizer_InputColumn& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  inputcolumn_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    inputcolumn_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_inputcolumn().empty()) {
    inputcolumn_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_inputcolumn(), 
      GetArenaForAllocation());
  }
  inputdimensions_ = from.inputdimensions_;
  // @@protoc_insertion_point(copy_constructor:CoreML.Specification.FeatureVectorizer.InputColumn)
}

inline void FeatureVectorizer_InputColumn::SharedCtor() {
inputcolumn_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  inputcolumn_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
inputdimensions_ = uint64_t{0u};
}

FeatureVectorizer_InputColumn::~FeatureVectorizer_InputColumn() {
  // @@protoc_insertion_point(destructor:CoreML.Specification.FeatureVectorizer.InputColumn)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<std::string>();
}

inline void FeatureVectorizer_InputColumn::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  inputcolumn_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void FeatureVectorizer_InputColumn::ArenaDtor(void* object) {
  FeatureVectorizer_InputColumn* _this = reinterpret_cast< FeatureVectorizer_InputColumn* >(object);
  (void)_this;
}
void FeatureVectorizer_InputColumn::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void FeatureVectorizer_InputColumn::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void FeatureVectorizer_InputColumn::Clear() {
// @@protoc_insertion_point(message_clear_start:CoreML.Specification.FeatureVectorizer.InputColumn)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  inputcolumn_.ClearToEmpty();
  inputdimensions_ = uint64_t{0u};
  _internal_metadata_.Clear<std::string>();
}

const char* FeatureVectorizer_InputColumn::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string inputColumn = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_inputcolumn();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, nullptr));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint64 inputDimensions = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          inputdimensions_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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
        _internal_metadata_.mutable_unknown_fields<std::string>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* FeatureVectorizer_InputColumn::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:CoreML.Specification.FeatureVectorizer.InputColumn)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string inputColumn = 1;
  if (!this->_internal_inputcolumn().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_inputcolumn().data(), static_cast<int>(this->_internal_inputcolumn().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "CoreML.Specification.FeatureVectorizer.InputColumn.inputColumn");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_inputcolumn(), target);
  }

  // uint64 inputDimensions = 2;
  if (this->_internal_inputdimensions() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(2, this->_internal_inputdimensions(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:CoreML.Specification.FeatureVectorizer.InputColumn)
  return target;
}

size_t FeatureVectorizer_InputColumn::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:CoreML.Specification.FeatureVectorizer.InputColumn)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string inputColumn = 1;
  if (!this->_internal_inputcolumn().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_inputcolumn());
  }

  // uint64 inputDimensions = 2;
  if (this->_internal_inputdimensions() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64SizePlusOne(this->_internal_inputdimensions());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void FeatureVectorizer_InputColumn::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::PROTOBUF_NAMESPACE_ID::internal::DownCast<const FeatureVectorizer_InputColumn*>(
      &from));
}

void FeatureVectorizer_InputColumn::MergeFrom(const FeatureVectorizer_InputColumn& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:CoreML.Specification.FeatureVectorizer.InputColumn)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_inputcolumn().empty()) {
    _internal_set_inputcolumn(from._internal_inputcolumn());
  }
  if (from._internal_inputdimensions() != 0) {
    _internal_set_inputdimensions(from._internal_inputdimensions());
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void FeatureVectorizer_InputColumn::CopyFrom(const FeatureVectorizer_InputColumn& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:CoreML.Specification.FeatureVectorizer.InputColumn)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FeatureVectorizer_InputColumn::IsInitialized() const {
  return true;
}

void FeatureVectorizer_InputColumn::InternalSwap(FeatureVectorizer_InputColumn* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &inputcolumn_, lhs_arena,
      &other->inputcolumn_, rhs_arena
  );
  swap(inputdimensions_, other->inputdimensions_);
}

std::string FeatureVectorizer_InputColumn::GetTypeName() const {
  return "CoreML.Specification.FeatureVectorizer.InputColumn";
}


// ===================================================================

class FeatureVectorizer::_Internal {
 public:
};

FeatureVectorizer::FeatureVectorizer(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned),
  inputlist_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:CoreML.Specification.FeatureVectorizer)
}
FeatureVectorizer::FeatureVectorizer(const FeatureVectorizer& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      inputlist_(from.inputlist_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:CoreML.Specification.FeatureVectorizer)
}

inline void FeatureVectorizer::SharedCtor() {
}

FeatureVectorizer::~FeatureVectorizer() {
  // @@protoc_insertion_point(destructor:CoreML.Specification.FeatureVectorizer)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<std::string>();
}

inline void FeatureVectorizer::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void FeatureVectorizer::ArenaDtor(void* object) {
  FeatureVectorizer* _this = reinterpret_cast< FeatureVectorizer* >(object);
  (void)_this;
}
void FeatureVectorizer::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void FeatureVectorizer::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void FeatureVectorizer::Clear() {
// @@protoc_insertion_point(message_clear_start:CoreML.Specification.FeatureVectorizer)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  inputlist_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* FeatureVectorizer::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .CoreML.Specification.FeatureVectorizer.InputColumn inputList = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_inputlist(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
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
        _internal_metadata_.mutable_unknown_fields<std::string>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* FeatureVectorizer::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:CoreML.Specification.FeatureVectorizer)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .CoreML.Specification.FeatureVectorizer.InputColumn inputList = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_inputlist_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_inputlist(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:CoreML.Specification.FeatureVectorizer)
  return target;
}

size_t FeatureVectorizer::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:CoreML.Specification.FeatureVectorizer)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .CoreML.Specification.FeatureVectorizer.InputColumn inputList = 1;
  total_size += 1UL * this->_internal_inputlist_size();
  for (const auto& msg : this->inputlist_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void FeatureVectorizer::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::PROTOBUF_NAMESPACE_ID::internal::DownCast<const FeatureVectorizer*>(
      &from));
}

void FeatureVectorizer::MergeFrom(const FeatureVectorizer& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:CoreML.Specification.FeatureVectorizer)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  inputlist_.MergeFrom(from.inputlist_);
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void FeatureVectorizer::CopyFrom(const FeatureVectorizer& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:CoreML.Specification.FeatureVectorizer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FeatureVectorizer::IsInitialized() const {
  return true;
}

void FeatureVectorizer::InternalSwap(FeatureVectorizer* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  inputlist_.InternalSwap(&other->inputlist_);
}

std::string FeatureVectorizer::GetTypeName() const {
  return "CoreML.Specification.FeatureVectorizer";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Specification
}  // namespace CoreML
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::CoreML::Specification::FeatureVectorizer_InputColumn* Arena::CreateMaybeMessage< ::CoreML::Specification::FeatureVectorizer_InputColumn >(Arena* arena) {
  return Arena::CreateMessageInternal< ::CoreML::Specification::FeatureVectorizer_InputColumn >(arena);
}
template<> PROTOBUF_NOINLINE ::CoreML::Specification::FeatureVectorizer* Arena::CreateMaybeMessage< ::CoreML::Specification::FeatureVectorizer >(Arena* arena) {
  return Arena::CreateMessageInternal< ::CoreML::Specification::FeatureVectorizer >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
