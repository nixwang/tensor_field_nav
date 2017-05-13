// Generated by gencpp from file pure_pursuit_controller/recoverPath.msg
// DO NOT EDIT!


#ifndef PURE_PURSUIT_CONTROLLER_MESSAGE_RECOVERPATH_H
#define PURE_PURSUIT_CONTROLLER_MESSAGE_RECOVERPATH_H

#include <ros/service_traits.h>


#include <pure_pursuit_controller/recoverPathRequest.h>
#include <pure_pursuit_controller/recoverPathResponse.h>


namespace pure_pursuit_controller
{

struct recoverPath
{

typedef recoverPathRequest Request;
typedef recoverPathResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct recoverPath
} // namespace pure_pursuit_controller


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::pure_pursuit_controller::recoverPath > {
  static const char* value()
  {
    return "2a9d4911da8d0a3c15d0a9eae781f434";
  }

  static const char* value(const ::pure_pursuit_controller::recoverPath&) { return value(); }
};

template<>
struct DataType< ::pure_pursuit_controller::recoverPath > {
  static const char* value()
  {
    return "pure_pursuit_controller/recoverPath";
  }

  static const char* value(const ::pure_pursuit_controller::recoverPath&) { return value(); }
};


// service_traits::MD5Sum< ::pure_pursuit_controller::recoverPathRequest> should match 
// service_traits::MD5Sum< ::pure_pursuit_controller::recoverPath > 
template<>
struct MD5Sum< ::pure_pursuit_controller::recoverPathRequest>
{
  static const char* value()
  {
    return MD5Sum< ::pure_pursuit_controller::recoverPath >::value();
  }
  static const char* value(const ::pure_pursuit_controller::recoverPathRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::pure_pursuit_controller::recoverPathRequest> should match 
// service_traits::DataType< ::pure_pursuit_controller::recoverPath > 
template<>
struct DataType< ::pure_pursuit_controller::recoverPathRequest>
{
  static const char* value()
  {
    return DataType< ::pure_pursuit_controller::recoverPath >::value();
  }
  static const char* value(const ::pure_pursuit_controller::recoverPathRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::pure_pursuit_controller::recoverPathResponse> should match 
// service_traits::MD5Sum< ::pure_pursuit_controller::recoverPath > 
template<>
struct MD5Sum< ::pure_pursuit_controller::recoverPathResponse>
{
  static const char* value()
  {
    return MD5Sum< ::pure_pursuit_controller::recoverPath >::value();
  }
  static const char* value(const ::pure_pursuit_controller::recoverPathResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::pure_pursuit_controller::recoverPathResponse> should match 
// service_traits::DataType< ::pure_pursuit_controller::recoverPath > 
template<>
struct DataType< ::pure_pursuit_controller::recoverPathResponse>
{
  static const char* value()
  {
    return DataType< ::pure_pursuit_controller::recoverPath >::value();
  }
  static const char* value(const ::pure_pursuit_controller::recoverPathResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PURE_PURSUIT_CONTROLLER_MESSAGE_RECOVERPATH_H