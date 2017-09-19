/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "file1_types.h"
#include "file1_types.tcc"

#include <algorithm>
#include <folly/Indestructible.h>

#include "file1_data.h"

namespace example { namespace thrift1 {

void Struct0::__clear() {
  // clear all fields
  field1 = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  field2 = 0;
  field3.clear();
  field4 = 0;
  field5 = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  field6 = 0;
  field7 = 0;
  field8.clear();
  field9 = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  field10 = 0;
  field11 = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  ::apache::thrift::Cpp2Ops<  ::example::thrift12::Struct27>::clear(&field12);
  field13 = 0;
  field14 = 0;
  field15 = 0;
  ::apache::thrift::Cpp2Ops<  ::example::thrift12::Struct17>::clear(&field16);
  field17.clear();
  __isset.__clear();
}

bool Struct0::operator==(const Struct0& rhs) const {
  if (!(apache::thrift::StringTraits<std::string>::isEqual(field1, rhs.field1))) {
    return false;
  }
  if (!((field2 == rhs.field2))) {
    return false;
  }
  if (!((field3 == rhs.field3))) {
    return false;
  }
  if (!((field4 == rhs.field4))) {
    return false;
  }
  if (!((field5 == rhs.field5))) {
    return false;
  }
  if (!((field6 == rhs.field6))) {
    return false;
  }
  if (!((field7 == rhs.field7))) {
    return false;
  }
  if (!((field8 == rhs.field8))) {
    return false;
  }
  if (!((field9 == rhs.field9))) {
    return false;
  }
  if (!((field10 == rhs.field10))) {
    return false;
  }
  if (!((field11 == rhs.field11))) {
    return false;
  }
  if (!((field12 == rhs.field12))) {
    return false;
  }
  if (!((field13 == rhs.field13))) {
    return false;
  }
  if (!((field14 == rhs.field14))) {
    return false;
  }
  if (!((field15 == rhs.field15))) {
    return false;
  }
  if (!((field16 == rhs.field16))) {
    return false;
  }
  if (!((field17 == rhs.field17))) {
    return false;
  }
  return true;
}

const std::set<double>& Struct0::get_field3() const& {
  return field3;
}

std::set<double> Struct0::get_field3() && {
  return std::move(field3);
}

const std::set<std::string>& Struct0::get_field8() const& {
  return field8;
}

std::set<std::string> Struct0::get_field8() && {
  return std::move(field8);
}

const  ::example::thrift12::Struct27& Struct0::get_field12() const& {
  return field12;
}

 ::example::thrift12::Struct27 Struct0::get_field12() && {
  return std::move(field12);
}

const  ::example::thrift12::Struct17& Struct0::get_field16() const& {
  return field16;
}

 ::example::thrift12::Struct17 Struct0::get_field16() && {
  return std::move(field16);
}

const std::map<bool, double>& Struct0::get_field17() const& {
  return field17;
}

std::map<bool, double> Struct0::get_field17() && {
  return std::move(field17);
}

void Struct0::translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "field1") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_STRING;
  }
  else if (_fname == "field2") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_BYTE;
  }
  else if (_fname == "field3") {
    fid = 3;
    _ftype = apache::thrift::protocol::T_SET;
  }
  else if (_fname == "field4") {
    fid = 4;
    _ftype = apache::thrift::protocol::T_FLOAT;
  }
  else if (_fname == "field5") {
    fid = 5;
    _ftype = apache::thrift::protocol::T_STRING;
  }
  else if (_fname == "field6") {
    fid = 6;
    _ftype = apache::thrift::protocol::T_I32;
  }
  else if (_fname == "field7") {
    fid = 7;
    _ftype = apache::thrift::protocol::T_I16;
  }
  else if (_fname == "field8") {
    fid = 8;
    _ftype = apache::thrift::protocol::T_SET;
  }
  else if (_fname == "field9") {
    fid = 9;
    _ftype = apache::thrift::protocol::T_STRING;
  }
  else if (_fname == "field10") {
    fid = 10;
    _ftype = apache::thrift::protocol::T_BOOL;
  }
  else if (_fname == "field11") {
    fid = 11;
    _ftype = apache::thrift::protocol::T_STRING;
  }
  else if (_fname == "field12") {
    fid = 12;
    _ftype = apache::thrift::protocol::T_STRUCT;
  }
  else if (_fname == "field13") {
    fid = 13;
    _ftype = apache::thrift::protocol::T_BYTE;
  }
  else if (_fname == "field14") {
    fid = 14;
    _ftype = apache::thrift::protocol::T_I32;
  }
  else if (_fname == "field15") {
    fid = 15;
    _ftype = apache::thrift::protocol::T_I64;
  }
  else if (_fname == "field16") {
    fid = 16;
    _ftype = apache::thrift::protocol::T_STRUCT;
  }
  else if (_fname == "field17") {
    fid = 17;
    _ftype = apache::thrift::protocol::T_MAP;
  }
}

void swap(Struct0& a, Struct0& b) {
  using ::std::swap;
  swap(a.field1, b.field1);
  swap(a.field2, b.field2);
  swap(a.field3, b.field3);
  swap(a.field4, b.field4);
  swap(a.field5, b.field5);
  swap(a.field6, b.field6);
  swap(a.field7, b.field7);
  swap(a.field8, b.field8);
  swap(a.field9, b.field9);
  swap(a.field10, b.field10);
  swap(a.field11, b.field11);
  swap(a.field12, b.field12);
  swap(a.field13, b.field13);
  swap(a.field14, b.field14);
  swap(a.field15, b.field15);
  swap(a.field16, b.field16);
  swap(a.field17, b.field17);
  swap(a.__isset, b.__isset);
}

template uint32_t Struct0::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Struct0::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Struct0::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Struct0::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Struct0::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t Struct0::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Struct0::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Struct0::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}} // example::thrift1
namespace example { namespace thrift1 {

void Struct1::__clear() {
  // clear all fields
}

bool Struct1::operator==(const Struct1& /* rhs */) const {
  return true;
}

void Struct1::translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
}

void swap(Struct1& a, Struct1& b) {
  using ::std::swap;
  (void)a;
  (void)b;
}

template uint32_t Struct1::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Struct1::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Struct1::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Struct1::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Struct1::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t Struct1::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Struct1::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Struct1::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}} // example::thrift1
namespace example { namespace thrift1 {

void Struct2::__clear() {
  // clear all fields
  field1.clear();
  field2.clear();
  field3 = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  field4 = 0;
  field5 = 0;
  __isset.__clear();
}

bool Struct2::operator==(const Struct2& rhs) const {
  if (!((field1 == rhs.field1))) {
    return false;
  }
  if (!((field2 == rhs.field2))) {
    return false;
  }
  if (!((field3 == rhs.field3))) {
    return false;
  }
  if (!((field4 == rhs.field4))) {
    return false;
  }
  if (!((field5 == rhs.field5))) {
    return false;
  }
  return true;
}

const std::vector<int8_t>& Struct2::get_field1() const& {
  return field1;
}

std::vector<int8_t> Struct2::get_field1() && {
  return std::move(field1);
}

const std::map<int16_t, int16_t>& Struct2::get_field2() const& {
  return field2;
}

std::map<int16_t, int16_t> Struct2::get_field2() && {
  return std::move(field2);
}

void Struct2::translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "field1") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_LIST;
  }
  else if (_fname == "field2") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_MAP;
  }
  else if (_fname == "field3") {
    fid = 3;
    _ftype = apache::thrift::protocol::T_STRING;
  }
  else if (_fname == "field4") {
    fid = 4;
    _ftype = apache::thrift::protocol::T_I32;
  }
  else if (_fname == "field5") {
    fid = 5;
    _ftype = apache::thrift::protocol::T_I16;
  }
}

void swap(Struct2& a, Struct2& b) {
  using ::std::swap;
  swap(a.field1, b.field1);
  swap(a.field2, b.field2);
  swap(a.field3, b.field3);
  swap(a.field4, b.field4);
  swap(a.field5, b.field5);
  swap(a.__isset, b.__isset);
}

template uint32_t Struct2::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Struct2::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Struct2::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Struct2::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Struct2::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t Struct2::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Struct2::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Struct2::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}} // example::thrift1
