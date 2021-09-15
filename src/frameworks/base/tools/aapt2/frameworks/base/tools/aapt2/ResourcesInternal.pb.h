// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: frameworks/base/tools/aapt2/ResourcesInternal.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_frameworks_2fbase_2ftools_2faapt2_2fResourcesInternal_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_frameworks_2fbase_2ftools_2faapt2_2fResourcesInternal_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009001 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "frameworks/base/tools/aapt2/Configuration.pb.h"
#include "frameworks/base/tools/aapt2/Resources.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_frameworks_2fbase_2ftools_2faapt2_2fResourcesInternal_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_frameworks_2fbase_2ftools_2faapt2_2fResourcesInternal_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_frameworks_2fbase_2ftools_2faapt2_2fResourcesInternal_2eproto;
namespace aapt {
namespace pb {
namespace internal {
class CompiledFile;
class CompiledFileDefaultTypeInternal;
extern CompiledFileDefaultTypeInternal _CompiledFile_default_instance_;
class CompiledFile_Symbol;
class CompiledFile_SymbolDefaultTypeInternal;
extern CompiledFile_SymbolDefaultTypeInternal _CompiledFile_Symbol_default_instance_;
}  // namespace internal
}  // namespace pb
}  // namespace aapt
PROTOBUF_NAMESPACE_OPEN
template<> ::aapt::pb::internal::CompiledFile* Arena::CreateMaybeMessage<::aapt::pb::internal::CompiledFile>(Arena*);
template<> ::aapt::pb::internal::CompiledFile_Symbol* Arena::CreateMaybeMessage<::aapt::pb::internal::CompiledFile_Symbol>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace aapt {
namespace pb {
namespace internal {

// ===================================================================

class CompiledFile_Symbol :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:aapt.pb.internal.CompiledFile.Symbol) */ {
 public:
  CompiledFile_Symbol();
  virtual ~CompiledFile_Symbol();

  CompiledFile_Symbol(const CompiledFile_Symbol& from);
  CompiledFile_Symbol(CompiledFile_Symbol&& from) noexcept
    : CompiledFile_Symbol() {
    *this = ::std::move(from);
  }

  inline CompiledFile_Symbol& operator=(const CompiledFile_Symbol& from) {
    CopyFrom(from);
    return *this;
  }
  inline CompiledFile_Symbol& operator=(CompiledFile_Symbol&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
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
  static const CompiledFile_Symbol& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CompiledFile_Symbol* internal_default_instance() {
    return reinterpret_cast<const CompiledFile_Symbol*>(
               &_CompiledFile_Symbol_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CompiledFile_Symbol& a, CompiledFile_Symbol& b) {
    a.Swap(&b);
  }
  inline void Swap(CompiledFile_Symbol* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CompiledFile_Symbol* New() const final {
    return CreateMaybeMessage<CompiledFile_Symbol>(nullptr);
  }

  CompiledFile_Symbol* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CompiledFile_Symbol>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CompiledFile_Symbol& from);
  void MergeFrom(const CompiledFile_Symbol& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CompiledFile_Symbol* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "aapt.pb.internal.CompiledFile.Symbol";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_frameworks_2fbase_2ftools_2faapt2_2fResourcesInternal_2eproto);
    return ::descriptor_table_frameworks_2fbase_2ftools_2faapt2_2fResourcesInternal_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kResourceNameFieldNumber = 1,
    kSourceFieldNumber = 2,
  };
  // string resource_name = 1;
  void clear_resource_name();
  const std::string& resource_name() const;
  void set_resource_name(const std::string& value);
  void set_resource_name(std::string&& value);
  void set_resource_name(const char* value);
  void set_resource_name(const char* value, size_t size);
  std::string* mutable_resource_name();
  std::string* release_resource_name();
  void set_allocated_resource_name(std::string* resource_name);

  // .aapt.pb.SourcePosition source = 2;
  bool has_source() const;
  void clear_source();
  const ::aapt::pb::SourcePosition& source() const;
  ::aapt::pb::SourcePosition* release_source();
  ::aapt::pb::SourcePosition* mutable_source();
  void set_allocated_source(::aapt::pb::SourcePosition* source);

  // @@protoc_insertion_point(class_scope:aapt.pb.internal.CompiledFile.Symbol)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr resource_name_;
  ::aapt::pb::SourcePosition* source_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_frameworks_2fbase_2ftools_2faapt2_2fResourcesInternal_2eproto;
};
// -------------------------------------------------------------------

class CompiledFile :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:aapt.pb.internal.CompiledFile) */ {
 public:
  CompiledFile();
  virtual ~CompiledFile();

  CompiledFile(const CompiledFile& from);
  CompiledFile(CompiledFile&& from) noexcept
    : CompiledFile() {
    *this = ::std::move(from);
  }

  inline CompiledFile& operator=(const CompiledFile& from) {
    CopyFrom(from);
    return *this;
  }
  inline CompiledFile& operator=(CompiledFile&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
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
  static const CompiledFile& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CompiledFile* internal_default_instance() {
    return reinterpret_cast<const CompiledFile*>(
               &_CompiledFile_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(CompiledFile& a, CompiledFile& b) {
    a.Swap(&b);
  }
  inline void Swap(CompiledFile* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CompiledFile* New() const final {
    return CreateMaybeMessage<CompiledFile>(nullptr);
  }

  CompiledFile* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CompiledFile>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CompiledFile& from);
  void MergeFrom(const CompiledFile& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CompiledFile* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "aapt.pb.internal.CompiledFile";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_frameworks_2fbase_2ftools_2faapt2_2fResourcesInternal_2eproto);
    return ::descriptor_table_frameworks_2fbase_2ftools_2faapt2_2fResourcesInternal_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef CompiledFile_Symbol Symbol;

  // accessors -------------------------------------------------------

  enum : int {
    kExportedSymbolFieldNumber = 5,
    kResourceNameFieldNumber = 1,
    kSourcePathFieldNumber = 4,
    kConfigFieldNumber = 2,
    kTypeFieldNumber = 3,
  };
  // repeated .aapt.pb.internal.CompiledFile.Symbol exported_symbol = 5;
  int exported_symbol_size() const;
  void clear_exported_symbol();
  ::aapt::pb::internal::CompiledFile_Symbol* mutable_exported_symbol(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::aapt::pb::internal::CompiledFile_Symbol >*
      mutable_exported_symbol();
  const ::aapt::pb::internal::CompiledFile_Symbol& exported_symbol(int index) const;
  ::aapt::pb::internal::CompiledFile_Symbol* add_exported_symbol();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::aapt::pb::internal::CompiledFile_Symbol >&
      exported_symbol() const;

  // string resource_name = 1;
  void clear_resource_name();
  const std::string& resource_name() const;
  void set_resource_name(const std::string& value);
  void set_resource_name(std::string&& value);
  void set_resource_name(const char* value);
  void set_resource_name(const char* value, size_t size);
  std::string* mutable_resource_name();
  std::string* release_resource_name();
  void set_allocated_resource_name(std::string* resource_name);

  // string source_path = 4;
  void clear_source_path();
  const std::string& source_path() const;
  void set_source_path(const std::string& value);
  void set_source_path(std::string&& value);
  void set_source_path(const char* value);
  void set_source_path(const char* value, size_t size);
  std::string* mutable_source_path();
  std::string* release_source_path();
  void set_allocated_source_path(std::string* source_path);

  // .aapt.pb.Configuration config = 2;
  bool has_config() const;
  void clear_config();
  const ::aapt::pb::Configuration& config() const;
  ::aapt::pb::Configuration* release_config();
  ::aapt::pb::Configuration* mutable_config();
  void set_allocated_config(::aapt::pb::Configuration* config);

  // .aapt.pb.FileReference.Type type = 3;
  void clear_type();
  ::aapt::pb::FileReference_Type type() const;
  void set_type(::aapt::pb::FileReference_Type value);

  // @@protoc_insertion_point(class_scope:aapt.pb.internal.CompiledFile)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::aapt::pb::internal::CompiledFile_Symbol > exported_symbol_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr resource_name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr source_path_;
  ::aapt::pb::Configuration* config_;
  int type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_frameworks_2fbase_2ftools_2faapt2_2fResourcesInternal_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CompiledFile_Symbol

// string resource_name = 1;
inline void CompiledFile_Symbol::clear_resource_name() {
  resource_name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& CompiledFile_Symbol::resource_name() const {
  // @@protoc_insertion_point(field_get:aapt.pb.internal.CompiledFile.Symbol.resource_name)
  return resource_name_.GetNoArena();
}
inline void CompiledFile_Symbol::set_resource_name(const std::string& value) {
  
  resource_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aapt.pb.internal.CompiledFile.Symbol.resource_name)
}
inline void CompiledFile_Symbol::set_resource_name(std::string&& value) {
  
  resource_name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aapt.pb.internal.CompiledFile.Symbol.resource_name)
}
inline void CompiledFile_Symbol::set_resource_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  resource_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aapt.pb.internal.CompiledFile.Symbol.resource_name)
}
inline void CompiledFile_Symbol::set_resource_name(const char* value, size_t size) {
  
  resource_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aapt.pb.internal.CompiledFile.Symbol.resource_name)
}
inline std::string* CompiledFile_Symbol::mutable_resource_name() {
  
  // @@protoc_insertion_point(field_mutable:aapt.pb.internal.CompiledFile.Symbol.resource_name)
  return resource_name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* CompiledFile_Symbol::release_resource_name() {
  // @@protoc_insertion_point(field_release:aapt.pb.internal.CompiledFile.Symbol.resource_name)
  
  return resource_name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void CompiledFile_Symbol::set_allocated_resource_name(std::string* resource_name) {
  if (resource_name != nullptr) {
    
  } else {
    
  }
  resource_name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), resource_name);
  // @@protoc_insertion_point(field_set_allocated:aapt.pb.internal.CompiledFile.Symbol.resource_name)
}

// .aapt.pb.SourcePosition source = 2;
inline bool CompiledFile_Symbol::has_source() const {
  return this != internal_default_instance() && source_ != nullptr;
}
inline const ::aapt::pb::SourcePosition& CompiledFile_Symbol::source() const {
  const ::aapt::pb::SourcePosition* p = source_;
  // @@protoc_insertion_point(field_get:aapt.pb.internal.CompiledFile.Symbol.source)
  return p != nullptr ? *p : *reinterpret_cast<const ::aapt::pb::SourcePosition*>(
      &::aapt::pb::_SourcePosition_default_instance_);
}
inline ::aapt::pb::SourcePosition* CompiledFile_Symbol::release_source() {
  // @@protoc_insertion_point(field_release:aapt.pb.internal.CompiledFile.Symbol.source)
  
  ::aapt::pb::SourcePosition* temp = source_;
  source_ = nullptr;
  return temp;
}
inline ::aapt::pb::SourcePosition* CompiledFile_Symbol::mutable_source() {
  
  if (source_ == nullptr) {
    auto* p = CreateMaybeMessage<::aapt::pb::SourcePosition>(GetArenaNoVirtual());
    source_ = p;
  }
  // @@protoc_insertion_point(field_mutable:aapt.pb.internal.CompiledFile.Symbol.source)
  return source_;
}
inline void CompiledFile_Symbol::set_allocated_source(::aapt::pb::SourcePosition* source) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(source_);
  }
  if (source) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      source = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, source, submessage_arena);
    }
    
  } else {
    
  }
  source_ = source;
  // @@protoc_insertion_point(field_set_allocated:aapt.pb.internal.CompiledFile.Symbol.source)
}

// -------------------------------------------------------------------

// CompiledFile

// string resource_name = 1;
inline void CompiledFile::clear_resource_name() {
  resource_name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& CompiledFile::resource_name() const {
  // @@protoc_insertion_point(field_get:aapt.pb.internal.CompiledFile.resource_name)
  return resource_name_.GetNoArena();
}
inline void CompiledFile::set_resource_name(const std::string& value) {
  
  resource_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aapt.pb.internal.CompiledFile.resource_name)
}
inline void CompiledFile::set_resource_name(std::string&& value) {
  
  resource_name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aapt.pb.internal.CompiledFile.resource_name)
}
inline void CompiledFile::set_resource_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  resource_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aapt.pb.internal.CompiledFile.resource_name)
}
inline void CompiledFile::set_resource_name(const char* value, size_t size) {
  
  resource_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aapt.pb.internal.CompiledFile.resource_name)
}
inline std::string* CompiledFile::mutable_resource_name() {
  
  // @@protoc_insertion_point(field_mutable:aapt.pb.internal.CompiledFile.resource_name)
  return resource_name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* CompiledFile::release_resource_name() {
  // @@protoc_insertion_point(field_release:aapt.pb.internal.CompiledFile.resource_name)
  
  return resource_name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void CompiledFile::set_allocated_resource_name(std::string* resource_name) {
  if (resource_name != nullptr) {
    
  } else {
    
  }
  resource_name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), resource_name);
  // @@protoc_insertion_point(field_set_allocated:aapt.pb.internal.CompiledFile.resource_name)
}

// .aapt.pb.Configuration config = 2;
inline bool CompiledFile::has_config() const {
  return this != internal_default_instance() && config_ != nullptr;
}
inline const ::aapt::pb::Configuration& CompiledFile::config() const {
  const ::aapt::pb::Configuration* p = config_;
  // @@protoc_insertion_point(field_get:aapt.pb.internal.CompiledFile.config)
  return p != nullptr ? *p : *reinterpret_cast<const ::aapt::pb::Configuration*>(
      &::aapt::pb::_Configuration_default_instance_);
}
inline ::aapt::pb::Configuration* CompiledFile::release_config() {
  // @@protoc_insertion_point(field_release:aapt.pb.internal.CompiledFile.config)
  
  ::aapt::pb::Configuration* temp = config_;
  config_ = nullptr;
  return temp;
}
inline ::aapt::pb::Configuration* CompiledFile::mutable_config() {
  
  if (config_ == nullptr) {
    auto* p = CreateMaybeMessage<::aapt::pb::Configuration>(GetArenaNoVirtual());
    config_ = p;
  }
  // @@protoc_insertion_point(field_mutable:aapt.pb.internal.CompiledFile.config)
  return config_;
}
inline void CompiledFile::set_allocated_config(::aapt::pb::Configuration* config) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(config_);
  }
  if (config) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      config = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, config, submessage_arena);
    }
    
  } else {
    
  }
  config_ = config;
  // @@protoc_insertion_point(field_set_allocated:aapt.pb.internal.CompiledFile.config)
}

// .aapt.pb.FileReference.Type type = 3;
inline void CompiledFile::clear_type() {
  type_ = 0;
}
inline ::aapt::pb::FileReference_Type CompiledFile::type() const {
  // @@protoc_insertion_point(field_get:aapt.pb.internal.CompiledFile.type)
  return static_cast< ::aapt::pb::FileReference_Type >(type_);
}
inline void CompiledFile::set_type(::aapt::pb::FileReference_Type value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:aapt.pb.internal.CompiledFile.type)
}

// string source_path = 4;
inline void CompiledFile::clear_source_path() {
  source_path_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& CompiledFile::source_path() const {
  // @@protoc_insertion_point(field_get:aapt.pb.internal.CompiledFile.source_path)
  return source_path_.GetNoArena();
}
inline void CompiledFile::set_source_path(const std::string& value) {
  
  source_path_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aapt.pb.internal.CompiledFile.source_path)
}
inline void CompiledFile::set_source_path(std::string&& value) {
  
  source_path_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aapt.pb.internal.CompiledFile.source_path)
}
inline void CompiledFile::set_source_path(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  source_path_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aapt.pb.internal.CompiledFile.source_path)
}
inline void CompiledFile::set_source_path(const char* value, size_t size) {
  
  source_path_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aapt.pb.internal.CompiledFile.source_path)
}
inline std::string* CompiledFile::mutable_source_path() {
  
  // @@protoc_insertion_point(field_mutable:aapt.pb.internal.CompiledFile.source_path)
  return source_path_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* CompiledFile::release_source_path() {
  // @@protoc_insertion_point(field_release:aapt.pb.internal.CompiledFile.source_path)
  
  return source_path_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void CompiledFile::set_allocated_source_path(std::string* source_path) {
  if (source_path != nullptr) {
    
  } else {
    
  }
  source_path_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), source_path);
  // @@protoc_insertion_point(field_set_allocated:aapt.pb.internal.CompiledFile.source_path)
}

// repeated .aapt.pb.internal.CompiledFile.Symbol exported_symbol = 5;
inline int CompiledFile::exported_symbol_size() const {
  return exported_symbol_.size();
}
inline void CompiledFile::clear_exported_symbol() {
  exported_symbol_.Clear();
}
inline ::aapt::pb::internal::CompiledFile_Symbol* CompiledFile::mutable_exported_symbol(int index) {
  // @@protoc_insertion_point(field_mutable:aapt.pb.internal.CompiledFile.exported_symbol)
  return exported_symbol_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::aapt::pb::internal::CompiledFile_Symbol >*
CompiledFile::mutable_exported_symbol() {
  // @@protoc_insertion_point(field_mutable_list:aapt.pb.internal.CompiledFile.exported_symbol)
  return &exported_symbol_;
}
inline const ::aapt::pb::internal::CompiledFile_Symbol& CompiledFile::exported_symbol(int index) const {
  // @@protoc_insertion_point(field_get:aapt.pb.internal.CompiledFile.exported_symbol)
  return exported_symbol_.Get(index);
}
inline ::aapt::pb::internal::CompiledFile_Symbol* CompiledFile::add_exported_symbol() {
  // @@protoc_insertion_point(field_add:aapt.pb.internal.CompiledFile.exported_symbol)
  return exported_symbol_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::aapt::pb::internal::CompiledFile_Symbol >&
CompiledFile::exported_symbol() const {
  // @@protoc_insertion_point(field_list:aapt.pb.internal.CompiledFile.exported_symbol)
  return exported_symbol_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace internal
}  // namespace pb
}  // namespace aapt

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_frameworks_2fbase_2ftools_2faapt2_2fResourcesInternal_2eproto