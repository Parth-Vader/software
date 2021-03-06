// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rpc.proto

#ifndef PROTOBUF_rpc_2eproto__INCLUDED
#define PROTOBUF_rpc_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_rpc_2eproto();
void protobuf_AssignDesc_rpc_2eproto();
void protobuf_ShutdownFile_rpc_2eproto();

class Real;
class Vec2;
class Vec3;
class Val;
class Req;
class Res;

enum ReqType {
  REQ_OBSERVE = 0,
  REQ_MOVE = 1,
  REQ_EVAL = 2
};
bool ReqType_IsValid(int value);
const ReqType ReqType_MIN = REQ_OBSERVE;
const ReqType ReqType_MAX = REQ_EVAL;
const int ReqType_ARRAYSIZE = ReqType_MAX + 1;

const ::google::protobuf::EnumDescriptor* ReqType_descriptor();
inline const ::std::string& ReqType_Name(ReqType value) {
  return ::google::protobuf::internal::NameOfEnum(
    ReqType_descriptor(), value);
}
inline bool ReqType_Parse(
    const ::std::string& name, ReqType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ReqType>(
    ReqType_descriptor(), name, value);
}
enum ResStatus {
  RES_STATUS_OK = 0,
  RES_STATUS_ERR = 1
};
bool ResStatus_IsValid(int value);
const ResStatus ResStatus_MIN = RES_STATUS_OK;
const ResStatus ResStatus_MAX = RES_STATUS_ERR;
const int ResStatus_ARRAYSIZE = ResStatus_MAX + 1;

const ::google::protobuf::EnumDescriptor* ResStatus_descriptor();
inline const ::std::string& ResStatus_Name(ResStatus value) {
  return ::google::protobuf::internal::NameOfEnum(
    ResStatus_descriptor(), value);
}
inline bool ResStatus_Parse(
    const ::std::string& name, ResStatus* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ResStatus>(
    ResStatus_descriptor(), name, value);
}
// ===================================================================

class Real : public ::google::protobuf::Message {
 public:
  Real();
  virtual ~Real();

  Real(const Real& from);

  inline Real& operator=(const Real& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Real& default_instance();

  void Swap(Real* other);

  // implements Message ----------------------------------------------

  Real* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Real& from);
  void MergeFrom(const Real& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required double val = 1;
  inline bool has_val() const;
  inline void clear_val();
  static const int kValFieldNumber = 1;
  inline double val() const;
  inline void set_val(double value);

  // @@protoc_insertion_point(class_scope:Real)
 private:
  inline void set_has_val();
  inline void clear_has_val();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  double val_;
  friend void  protobuf_AddDesc_rpc_2eproto();
  friend void protobuf_AssignDesc_rpc_2eproto();
  friend void protobuf_ShutdownFile_rpc_2eproto();

  void InitAsDefaultInstance();
  static Real* default_instance_;
};
// -------------------------------------------------------------------

class Vec2 : public ::google::protobuf::Message {
 public:
  Vec2();
  virtual ~Vec2();

  Vec2(const Vec2& from);

  inline Vec2& operator=(const Vec2& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Vec2& default_instance();

  void Swap(Vec2* other);

  // implements Message ----------------------------------------------

  Vec2* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Vec2& from);
  void MergeFrom(const Vec2& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required double val0 = 1;
  inline bool has_val0() const;
  inline void clear_val0();
  static const int kVal0FieldNumber = 1;
  inline double val0() const;
  inline void set_val0(double value);

  // required double val1 = 2;
  inline bool has_val1() const;
  inline void clear_val1();
  static const int kVal1FieldNumber = 2;
  inline double val1() const;
  inline void set_val1(double value);

  // @@protoc_insertion_point(class_scope:Vec2)
 private:
  inline void set_has_val0();
  inline void clear_has_val0();
  inline void set_has_val1();
  inline void clear_has_val1();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  double val0_;
  double val1_;
  friend void  protobuf_AddDesc_rpc_2eproto();
  friend void protobuf_AssignDesc_rpc_2eproto();
  friend void protobuf_ShutdownFile_rpc_2eproto();

  void InitAsDefaultInstance();
  static Vec2* default_instance_;
};
// -------------------------------------------------------------------

class Vec3 : public ::google::protobuf::Message {
 public:
  Vec3();
  virtual ~Vec3();

  Vec3(const Vec3& from);

  inline Vec3& operator=(const Vec3& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Vec3& default_instance();

  void Swap(Vec3* other);

  // implements Message ----------------------------------------------

  Vec3* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Vec3& from);
  void MergeFrom(const Vec3& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required double val0 = 1;
  inline bool has_val0() const;
  inline void clear_val0();
  static const int kVal0FieldNumber = 1;
  inline double val0() const;
  inline void set_val0(double value);

  // required double val1 = 2;
  inline bool has_val1() const;
  inline void clear_val1();
  static const int kVal1FieldNumber = 2;
  inline double val1() const;
  inline void set_val1(double value);

  // required double val2 = 3;
  inline bool has_val2() const;
  inline void clear_val2();
  static const int kVal2FieldNumber = 3;
  inline double val2() const;
  inline void set_val2(double value);

  // @@protoc_insertion_point(class_scope:Vec3)
 private:
  inline void set_has_val0();
  inline void clear_has_val0();
  inline void set_has_val1();
  inline void clear_has_val1();
  inline void set_has_val2();
  inline void clear_has_val2();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  double val0_;
  double val1_;
  double val2_;
  friend void  protobuf_AddDesc_rpc_2eproto();
  friend void protobuf_AssignDesc_rpc_2eproto();
  friend void protobuf_ShutdownFile_rpc_2eproto();

  void InitAsDefaultInstance();
  static Vec3* default_instance_;
};
// -------------------------------------------------------------------

class Val : public ::google::protobuf::Message {
 public:
  Val();
  virtual ~Val();

  Val(const Val& from);

  inline Val& operator=(const Val& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Val& default_instance();

  enum ValCase {
    kReal = 1,
    kVec2 = 2,
    kVec3 = 3,
    VAL_NOT_SET = 0,
  };

  void Swap(Val* other);

  // implements Message ----------------------------------------------

  Val* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Val& from);
  void MergeFrom(const Val& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .Real real = 1;
  inline bool has_real() const;
  inline void clear_real();
  static const int kRealFieldNumber = 1;
  inline const ::Real& real() const;
  inline ::Real* mutable_real();
  inline ::Real* release_real();
  inline void set_allocated_real(::Real* real);

  // optional .Vec2 vec2 = 2;
  inline bool has_vec2() const;
  inline void clear_vec2();
  static const int kVec2FieldNumber = 2;
  inline const ::Vec2& vec2() const;
  inline ::Vec2* mutable_vec2();
  inline ::Vec2* release_vec2();
  inline void set_allocated_vec2(::Vec2* vec2);

  // optional .Vec3 vec3 = 3;
  inline bool has_vec3() const;
  inline void clear_vec3();
  static const int kVec3FieldNumber = 3;
  inline const ::Vec3& vec3() const;
  inline ::Vec3* mutable_vec3();
  inline ::Vec3* release_vec3();
  inline void set_allocated_vec3(::Vec3* vec3);

  inline ValCase val_case() const;
  // @@protoc_insertion_point(class_scope:Val)
 private:
  inline void set_has_real();
  inline void set_has_vec2();
  inline void set_has_vec3();

  inline bool has_val();
  void clear_val();
  inline void clear_has_val();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  union ValUnion {
    ::Real* real_;
    ::Vec2* vec2_;
    ::Vec3* vec3_;
  } val_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend void  protobuf_AddDesc_rpc_2eproto();
  friend void protobuf_AssignDesc_rpc_2eproto();
  friend void protobuf_ShutdownFile_rpc_2eproto();

  void InitAsDefaultInstance();
  static Val* default_instance_;
};
// -------------------------------------------------------------------

class Req : public ::google::protobuf::Message {
 public:
  Req();
  virtual ~Req();

  Req(const Req& from);

  inline Req& operator=(const Req& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Req& default_instance();

  void Swap(Req* other);

  // implements Message ----------------------------------------------

  Req* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Req& from);
  void MergeFrom(const Req& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .ReqType type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::ReqType type() const;
  inline void set_type(::ReqType value);

  // required string func = 2;
  inline bool has_func() const;
  inline void clear_func();
  static const int kFuncFieldNumber = 2;
  inline const ::std::string& func() const;
  inline void set_func(const ::std::string& value);
  inline void set_func(const char* value);
  inline void set_func(const char* value, size_t size);
  inline ::std::string* mutable_func();
  inline ::std::string* release_func();
  inline void set_allocated_func(::std::string* func);

  // repeated string vars = 3;
  inline int vars_size() const;
  inline void clear_vars();
  static const int kVarsFieldNumber = 3;
  inline const ::std::string& vars(int index) const;
  inline ::std::string* mutable_vars(int index);
  inline void set_vars(int index, const ::std::string& value);
  inline void set_vars(int index, const char* value);
  inline void set_vars(int index, const char* value, size_t size);
  inline ::std::string* add_vars();
  inline void add_vars(const ::std::string& value);
  inline void add_vars(const char* value);
  inline void add_vars(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& vars() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_vars();

  // optional .Val val = 4;
  inline bool has_val() const;
  inline void clear_val();
  static const int kValFieldNumber = 4;
  inline const ::Val& val() const;
  inline ::Val* mutable_val();
  inline ::Val* release_val();
  inline void set_allocated_val(::Val* val);

  // @@protoc_insertion_point(class_scope:Req)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_func();
  inline void clear_has_func();
  inline void set_has_val();
  inline void clear_has_val();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* func_;
  ::google::protobuf::RepeatedPtrField< ::std::string> vars_;
  ::Val* val_;
  int type_;
  friend void  protobuf_AddDesc_rpc_2eproto();
  friend void protobuf_AssignDesc_rpc_2eproto();
  friend void protobuf_ShutdownFile_rpc_2eproto();

  void InitAsDefaultInstance();
  static Req* default_instance_;
};
// -------------------------------------------------------------------

class Res : public ::google::protobuf::Message {
 public:
  Res();
  virtual ~Res();

  Res(const Res& from);

  inline Res& operator=(const Res& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Res& default_instance();

  void Swap(Res* other);

  // implements Message ----------------------------------------------

  Res* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Res& from);
  void MergeFrom(const Res& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .ResStatus status = 1;
  inline bool has_status() const;
  inline void clear_status();
  static const int kStatusFieldNumber = 1;
  inline ::ResStatus status() const;
  inline void set_status(::ResStatus value);

  // repeated .Val result = 2;
  inline int result_size() const;
  inline void clear_result();
  static const int kResultFieldNumber = 2;
  inline const ::Val& result(int index) const;
  inline ::Val* mutable_result(int index);
  inline ::Val* add_result();
  inline const ::google::protobuf::RepeatedPtrField< ::Val >&
      result() const;
  inline ::google::protobuf::RepeatedPtrField< ::Val >*
      mutable_result();

  // optional string error = 3;
  inline bool has_error() const;
  inline void clear_error();
  static const int kErrorFieldNumber = 3;
  inline const ::std::string& error() const;
  inline void set_error(const ::std::string& value);
  inline void set_error(const char* value);
  inline void set_error(const char* value, size_t size);
  inline ::std::string* mutable_error();
  inline ::std::string* release_error();
  inline void set_allocated_error(::std::string* error);

  // @@protoc_insertion_point(class_scope:Res)
 private:
  inline void set_has_status();
  inline void clear_has_status();
  inline void set_has_error();
  inline void clear_has_error();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::Val > result_;
  ::std::string* error_;
  int status_;
  friend void  protobuf_AddDesc_rpc_2eproto();
  friend void protobuf_AssignDesc_rpc_2eproto();
  friend void protobuf_ShutdownFile_rpc_2eproto();

  void InitAsDefaultInstance();
  static Res* default_instance_;
};
// ===================================================================


// ===================================================================

// Real

// required double val = 1;
inline bool Real::has_val() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Real::set_has_val() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Real::clear_has_val() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Real::clear_val() {
  val_ = 0;
  clear_has_val();
}
inline double Real::val() const {
  // @@protoc_insertion_point(field_get:Real.val)
  return val_;
}
inline void Real::set_val(double value) {
  set_has_val();
  val_ = value;
  // @@protoc_insertion_point(field_set:Real.val)
}

// -------------------------------------------------------------------

// Vec2

// required double val0 = 1;
inline bool Vec2::has_val0() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Vec2::set_has_val0() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Vec2::clear_has_val0() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Vec2::clear_val0() {
  val0_ = 0;
  clear_has_val0();
}
inline double Vec2::val0() const {
  // @@protoc_insertion_point(field_get:Vec2.val0)
  return val0_;
}
inline void Vec2::set_val0(double value) {
  set_has_val0();
  val0_ = value;
  // @@protoc_insertion_point(field_set:Vec2.val0)
}

// required double val1 = 2;
inline bool Vec2::has_val1() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Vec2::set_has_val1() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Vec2::clear_has_val1() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Vec2::clear_val1() {
  val1_ = 0;
  clear_has_val1();
}
inline double Vec2::val1() const {
  // @@protoc_insertion_point(field_get:Vec2.val1)
  return val1_;
}
inline void Vec2::set_val1(double value) {
  set_has_val1();
  val1_ = value;
  // @@protoc_insertion_point(field_set:Vec2.val1)
}

// -------------------------------------------------------------------

// Vec3

// required double val0 = 1;
inline bool Vec3::has_val0() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Vec3::set_has_val0() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Vec3::clear_has_val0() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Vec3::clear_val0() {
  val0_ = 0;
  clear_has_val0();
}
inline double Vec3::val0() const {
  // @@protoc_insertion_point(field_get:Vec3.val0)
  return val0_;
}
inline void Vec3::set_val0(double value) {
  set_has_val0();
  val0_ = value;
  // @@protoc_insertion_point(field_set:Vec3.val0)
}

// required double val1 = 2;
inline bool Vec3::has_val1() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Vec3::set_has_val1() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Vec3::clear_has_val1() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Vec3::clear_val1() {
  val1_ = 0;
  clear_has_val1();
}
inline double Vec3::val1() const {
  // @@protoc_insertion_point(field_get:Vec3.val1)
  return val1_;
}
inline void Vec3::set_val1(double value) {
  set_has_val1();
  val1_ = value;
  // @@protoc_insertion_point(field_set:Vec3.val1)
}

// required double val2 = 3;
inline bool Vec3::has_val2() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Vec3::set_has_val2() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Vec3::clear_has_val2() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Vec3::clear_val2() {
  val2_ = 0;
  clear_has_val2();
}
inline double Vec3::val2() const {
  // @@protoc_insertion_point(field_get:Vec3.val2)
  return val2_;
}
inline void Vec3::set_val2(double value) {
  set_has_val2();
  val2_ = value;
  // @@protoc_insertion_point(field_set:Vec3.val2)
}

// -------------------------------------------------------------------

// Val

// optional .Real real = 1;
inline bool Val::has_real() const {
  return val_case() == kReal;
}
inline void Val::set_has_real() {
  _oneof_case_[0] = kReal;
}
inline void Val::clear_real() {
  if (has_real()) {
    delete val_.real_;
    clear_has_val();
  }
}
inline const ::Real& Val::real() const {
  return has_real() ? *val_.real_
                      : ::Real::default_instance();
}
inline ::Real* Val::mutable_real() {
  if (!has_real()) {
    clear_val();
    set_has_real();
    val_.real_ = new ::Real;
  }
  return val_.real_;
}
inline ::Real* Val::release_real() {
  if (has_real()) {
    clear_has_val();
    ::Real* temp = val_.real_;
    val_.real_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void Val::set_allocated_real(::Real* real) {
  clear_val();
  if (real) {
    set_has_real();
    val_.real_ = real;
  }
}

// optional .Vec2 vec2 = 2;
inline bool Val::has_vec2() const {
  return val_case() == kVec2;
}
inline void Val::set_has_vec2() {
  _oneof_case_[0] = kVec2;
}
inline void Val::clear_vec2() {
  if (has_vec2()) {
    delete val_.vec2_;
    clear_has_val();
  }
}
inline const ::Vec2& Val::vec2() const {
  return has_vec2() ? *val_.vec2_
                      : ::Vec2::default_instance();
}
inline ::Vec2* Val::mutable_vec2() {
  if (!has_vec2()) {
    clear_val();
    set_has_vec2();
    val_.vec2_ = new ::Vec2;
  }
  return val_.vec2_;
}
inline ::Vec2* Val::release_vec2() {
  if (has_vec2()) {
    clear_has_val();
    ::Vec2* temp = val_.vec2_;
    val_.vec2_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void Val::set_allocated_vec2(::Vec2* vec2) {
  clear_val();
  if (vec2) {
    set_has_vec2();
    val_.vec2_ = vec2;
  }
}

// optional .Vec3 vec3 = 3;
inline bool Val::has_vec3() const {
  return val_case() == kVec3;
}
inline void Val::set_has_vec3() {
  _oneof_case_[0] = kVec3;
}
inline void Val::clear_vec3() {
  if (has_vec3()) {
    delete val_.vec3_;
    clear_has_val();
  }
}
inline const ::Vec3& Val::vec3() const {
  return has_vec3() ? *val_.vec3_
                      : ::Vec3::default_instance();
}
inline ::Vec3* Val::mutable_vec3() {
  if (!has_vec3()) {
    clear_val();
    set_has_vec3();
    val_.vec3_ = new ::Vec3;
  }
  return val_.vec3_;
}
inline ::Vec3* Val::release_vec3() {
  if (has_vec3()) {
    clear_has_val();
    ::Vec3* temp = val_.vec3_;
    val_.vec3_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void Val::set_allocated_vec3(::Vec3* vec3) {
  clear_val();
  if (vec3) {
    set_has_vec3();
    val_.vec3_ = vec3;
  }
}

inline bool Val::has_val() {
  return val_case() != VAL_NOT_SET;
}
inline void Val::clear_has_val() {
  _oneof_case_[0] = VAL_NOT_SET;
}
inline Val::ValCase Val::val_case() const {
  return Val::ValCase(_oneof_case_[0]);
}
// -------------------------------------------------------------------

// Req

// required .ReqType type = 1;
inline bool Req::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Req::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Req::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Req::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::ReqType Req::type() const {
  // @@protoc_insertion_point(field_get:Req.type)
  return static_cast< ::ReqType >(type_);
}
inline void Req::set_type(::ReqType value) {
  assert(::ReqType_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:Req.type)
}

// required string func = 2;
inline bool Req::has_func() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Req::set_has_func() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Req::clear_has_func() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Req::clear_func() {
  if (func_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    func_->clear();
  }
  clear_has_func();
}
inline const ::std::string& Req::func() const {
  // @@protoc_insertion_point(field_get:Req.func)
  return *func_;
}
inline void Req::set_func(const ::std::string& value) {
  set_has_func();
  if (func_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    func_ = new ::std::string;
  }
  func_->assign(value);
  // @@protoc_insertion_point(field_set:Req.func)
}
inline void Req::set_func(const char* value) {
  set_has_func();
  if (func_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    func_ = new ::std::string;
  }
  func_->assign(value);
  // @@protoc_insertion_point(field_set_char:Req.func)
}
inline void Req::set_func(const char* value, size_t size) {
  set_has_func();
  if (func_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    func_ = new ::std::string;
  }
  func_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Req.func)
}
inline ::std::string* Req::mutable_func() {
  set_has_func();
  if (func_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    func_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Req.func)
  return func_;
}
inline ::std::string* Req::release_func() {
  clear_has_func();
  if (func_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = func_;
    func_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Req::set_allocated_func(::std::string* func) {
  if (func_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete func_;
  }
  if (func) {
    set_has_func();
    func_ = func;
  } else {
    clear_has_func();
    func_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Req.func)
}

// repeated string vars = 3;
inline int Req::vars_size() const {
  return vars_.size();
}
inline void Req::clear_vars() {
  vars_.Clear();
}
inline const ::std::string& Req::vars(int index) const {
  // @@protoc_insertion_point(field_get:Req.vars)
  return vars_.Get(index);
}
inline ::std::string* Req::mutable_vars(int index) {
  // @@protoc_insertion_point(field_mutable:Req.vars)
  return vars_.Mutable(index);
}
inline void Req::set_vars(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:Req.vars)
  vars_.Mutable(index)->assign(value);
}
inline void Req::set_vars(int index, const char* value) {
  vars_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:Req.vars)
}
inline void Req::set_vars(int index, const char* value, size_t size) {
  vars_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Req.vars)
}
inline ::std::string* Req::add_vars() {
  return vars_.Add();
}
inline void Req::add_vars(const ::std::string& value) {
  vars_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:Req.vars)
}
inline void Req::add_vars(const char* value) {
  vars_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:Req.vars)
}
inline void Req::add_vars(const char* value, size_t size) {
  vars_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:Req.vars)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
Req::vars() const {
  // @@protoc_insertion_point(field_list:Req.vars)
  return vars_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
Req::mutable_vars() {
  // @@protoc_insertion_point(field_mutable_list:Req.vars)
  return &vars_;
}

// optional .Val val = 4;
inline bool Req::has_val() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Req::set_has_val() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Req::clear_has_val() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Req::clear_val() {
  if (val_ != NULL) val_->::Val::Clear();
  clear_has_val();
}
inline const ::Val& Req::val() const {
  // @@protoc_insertion_point(field_get:Req.val)
  return val_ != NULL ? *val_ : *default_instance_->val_;
}
inline ::Val* Req::mutable_val() {
  set_has_val();
  if (val_ == NULL) val_ = new ::Val;
  // @@protoc_insertion_point(field_mutable:Req.val)
  return val_;
}
inline ::Val* Req::release_val() {
  clear_has_val();
  ::Val* temp = val_;
  val_ = NULL;
  return temp;
}
inline void Req::set_allocated_val(::Val* val) {
  delete val_;
  val_ = val;
  if (val) {
    set_has_val();
  } else {
    clear_has_val();
  }
  // @@protoc_insertion_point(field_set_allocated:Req.val)
}

// -------------------------------------------------------------------

// Res

// required .ResStatus status = 1;
inline bool Res::has_status() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Res::set_has_status() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Res::clear_has_status() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Res::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::ResStatus Res::status() const {
  // @@protoc_insertion_point(field_get:Res.status)
  return static_cast< ::ResStatus >(status_);
}
inline void Res::set_status(::ResStatus value) {
  assert(::ResStatus_IsValid(value));
  set_has_status();
  status_ = value;
  // @@protoc_insertion_point(field_set:Res.status)
}

// repeated .Val result = 2;
inline int Res::result_size() const {
  return result_.size();
}
inline void Res::clear_result() {
  result_.Clear();
}
inline const ::Val& Res::result(int index) const {
  // @@protoc_insertion_point(field_get:Res.result)
  return result_.Get(index);
}
inline ::Val* Res::mutable_result(int index) {
  // @@protoc_insertion_point(field_mutable:Res.result)
  return result_.Mutable(index);
}
inline ::Val* Res::add_result() {
  // @@protoc_insertion_point(field_add:Res.result)
  return result_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Val >&
Res::result() const {
  // @@protoc_insertion_point(field_list:Res.result)
  return result_;
}
inline ::google::protobuf::RepeatedPtrField< ::Val >*
Res::mutable_result() {
  // @@protoc_insertion_point(field_mutable_list:Res.result)
  return &result_;
}

// optional string error = 3;
inline bool Res::has_error() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Res::set_has_error() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Res::clear_has_error() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Res::clear_error() {
  if (error_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    error_->clear();
  }
  clear_has_error();
}
inline const ::std::string& Res::error() const {
  // @@protoc_insertion_point(field_get:Res.error)
  return *error_;
}
inline void Res::set_error(const ::std::string& value) {
  set_has_error();
  if (error_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    error_ = new ::std::string;
  }
  error_->assign(value);
  // @@protoc_insertion_point(field_set:Res.error)
}
inline void Res::set_error(const char* value) {
  set_has_error();
  if (error_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    error_ = new ::std::string;
  }
  error_->assign(value);
  // @@protoc_insertion_point(field_set_char:Res.error)
}
inline void Res::set_error(const char* value, size_t size) {
  set_has_error();
  if (error_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    error_ = new ::std::string;
  }
  error_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Res.error)
}
inline ::std::string* Res::mutable_error() {
  set_has_error();
  if (error_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    error_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Res.error)
  return error_;
}
inline ::std::string* Res::release_error() {
  clear_has_error();
  if (error_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = error_;
    error_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Res::set_allocated_error(::std::string* error) {
  if (error_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete error_;
  }
  if (error) {
    set_has_error();
    error_ = error;
  } else {
    clear_has_error();
    error_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Res.error)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::ReqType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ReqType>() {
  return ::ReqType_descriptor();
}
template <> struct is_proto_enum< ::ResStatus> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ResStatus>() {
  return ::ResStatus_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_rpc_2eproto__INCLUDED
