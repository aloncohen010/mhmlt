// Generated by gencpp from file ros_mhlmt_msgs/mhlmt_control_serviceResponse.msg
// DO NOT EDIT!


#ifndef ROS_MHLMT_MSGS_MESSAGE_MHLMT_CONTROL_SERVICERESPONSE_H
#define ROS_MHLMT_MSGS_MESSAGE_MHLMT_CONTROL_SERVICERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ros_mhlmt_msgs
{
template <class ContainerAllocator>
struct mhlmt_control_serviceResponse_
{
  typedef mhlmt_control_serviceResponse_<ContainerAllocator> Type;

  mhlmt_control_serviceResponse_()
    : response()  {
    }
  mhlmt_control_serviceResponse_(const ContainerAllocator& _alloc)
    : response(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _response_type;
  _response_type response;





  typedef boost::shared_ptr< ::ros_mhlmt_msgs::mhlmt_control_serviceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_mhlmt_msgs::mhlmt_control_serviceResponse_<ContainerAllocator> const> ConstPtr;

}; // struct mhlmt_control_serviceResponse_

typedef ::ros_mhlmt_msgs::mhlmt_control_serviceResponse_<std::allocator<void> > mhlmt_control_serviceResponse;

typedef boost::shared_ptr< ::ros_mhlmt_msgs::mhlmt_control_serviceResponse > mhlmt_control_serviceResponsePtr;
typedef boost::shared_ptr< ::ros_mhlmt_msgs::mhlmt_control_serviceResponse const> mhlmt_control_serviceResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_mhlmt_msgs::mhlmt_control_serviceResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_mhlmt_msgs::mhlmt_control_serviceResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ros_mhlmt_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ros_mhlmt_msgs::mhlmt_control_serviceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_mhlmt_msgs::mhlmt_control_serviceResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_mhlmt_msgs::mhlmt_control_serviceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_mhlmt_msgs::mhlmt_control_serviceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_mhlmt_msgs::mhlmt_control_serviceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_mhlmt_msgs::mhlmt_control_serviceResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_mhlmt_msgs::mhlmt_control_serviceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6de314e2dc76fbff2b6244a6ad70b68d";
  }

  static const char* value(const ::ros_mhlmt_msgs::mhlmt_control_serviceResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6de314e2dc76fbffULL;
  static const uint64_t static_value2 = 0x2b6244a6ad70b68dULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_mhlmt_msgs::mhlmt_control_serviceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_mhlmt_msgs/mhlmt_control_serviceResponse";
  }

  static const char* value(const ::ros_mhlmt_msgs::mhlmt_control_serviceResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_mhlmt_msgs::mhlmt_control_serviceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string response\n\
\n\
";
  }

  static const char* value(const ::ros_mhlmt_msgs::mhlmt_control_serviceResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_mhlmt_msgs::mhlmt_control_serviceResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.response);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct mhlmt_control_serviceResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_mhlmt_msgs::mhlmt_control_serviceResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_mhlmt_msgs::mhlmt_control_serviceResponse_<ContainerAllocator>& v)
  {
    s << indent << "response: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.response);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_MHLMT_MSGS_MESSAGE_MHLMT_CONTROL_SERVICERESPONSE_H