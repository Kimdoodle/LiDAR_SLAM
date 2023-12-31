// Generated by gencpp from file std_srvs/Empty.msg
// DO NOT EDIT!

/*
 *  Empty Request / Response일 때의 MD5Sum의 계산을 정의한 헤더파일.
 *  1. std_srvs namespace
 *    - Empty Request/Response 구조체
 *  2. ros/service_traits
 *    - MD5 checksum 정보 반환
 *    - 메세지 데이터타입 정보 반환, 현재 반환값은 std_srvs/Empty
 *    - MD5Sum, DataType, Request, Response의 값이 각각 Empty 구조체의 데이터와 동일해야 
 *      해당 값을 반환하는 조건이 있다.
 */

#ifndef STD_SRVS_MESSAGE_EMPTY_H
#define STD_SRVS_MESSAGE_EMPTY_H

#include <ros/service_traits.h>


#include <std_srvs/EmptyRequest.h>
#include <std_srvs/EmptyResponse.h>


namespace std_srvs
{

struct Empty
{

typedef EmptyRequest Request;
typedef EmptyResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Empty
} // namespace std_srvs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::std_srvs::Empty > {
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::std_srvs::Empty&) { return value(); }
};

template<>
struct DataType< ::std_srvs::Empty > {
  static const char* value()
  {
    return "std_srvs/Empty";
  }

  static const char* value(const ::std_srvs::Empty&) { return value(); }
};


// service_traits::MD5Sum< ::std_srvs::EmptyRequest> should match
// service_traits::MD5Sum< ::std_srvs::Empty >
template<>
struct MD5Sum< ::std_srvs::EmptyRequest>
{
  static const char* value()
  {
    return MD5Sum< ::std_srvs::Empty >::value();
  }
  static const char* value(const ::std_srvs::EmptyRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::std_srvs::EmptyRequest> should match
// service_traits::DataType< ::std_srvs::Empty >
template<>
struct DataType< ::std_srvs::EmptyRequest>
{
  static const char* value()
  {
    return DataType< ::std_srvs::Empty >::value();
  }
  static const char* value(const ::std_srvs::EmptyRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::std_srvs::EmptyResponse> should match
// service_traits::MD5Sum< ::std_srvs::Empty >
template<>
struct MD5Sum< ::std_srvs::EmptyResponse>
{
  static const char* value()
  {
    return MD5Sum< ::std_srvs::Empty >::value();
  }
  static const char* value(const ::std_srvs::EmptyResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::std_srvs::EmptyResponse> should match
// service_traits::DataType< ::std_srvs::Empty >
template<>
struct DataType< ::std_srvs::EmptyResponse>
{
  static const char* value()
  {
    return DataType< ::std_srvs::Empty >::value();
  }
  static const char* value(const ::std_srvs::EmptyResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // STD_SRVS_MESSAGE_EMPTY_H
