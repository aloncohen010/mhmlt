// Generated by gencpp from file controller_manager_msgs/ControllersStatistics.msg
// DO NOT EDIT!


#ifndef CONTROLLER_MANAGER_MSGS_MESSAGE_CONTROLLERSSTATISTICS_H
#define CONTROLLER_MANAGER_MSGS_MESSAGE_CONTROLLERSSTATISTICS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <controller_manager_msgs/ControllerStatistics.h>

namespace controller_manager_msgs
{
template <class ContainerAllocator>
struct ControllersStatistics_
{
  typedef ControllersStatistics_<ContainerAllocator> Type;

  ControllersStatistics_()
    : header()
    , controller()  {
    }
  ControllersStatistics_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , controller(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::controller_manager_msgs::ControllerStatistics_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::controller_manager_msgs::ControllerStatistics_<ContainerAllocator> >::other >  _controller_type;
  _controller_type controller;





  typedef boost::shared_ptr< ::controller_manager_msgs::ControllersStatistics_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::controller_manager_msgs::ControllersStatistics_<ContainerAllocator> const> ConstPtr;

}; // struct ControllersStatistics_

typedef ::controller_manager_msgs::ControllersStatistics_<std::allocator<void> > ControllersStatistics;

typedef boost::shared_ptr< ::controller_manager_msgs::ControllersStatistics > ControllersStatisticsPtr;
typedef boost::shared_ptr< ::controller_manager_msgs::ControllersStatistics const> ControllersStatisticsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::controller_manager_msgs::ControllersStatistics_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::controller_manager_msgs::ControllersStatistics_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace controller_manager_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'controller_manager_msgs': ['/tmp/binarydeb/ros-melodic-controller-manager-msgs-0.15.1/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::controller_manager_msgs::ControllersStatistics_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::controller_manager_msgs::ControllersStatistics_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::controller_manager_msgs::ControllersStatistics_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::controller_manager_msgs::ControllersStatistics_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::controller_manager_msgs::ControllersStatistics_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::controller_manager_msgs::ControllersStatistics_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::controller_manager_msgs::ControllersStatistics_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a154c347736773e3700d1719105df29d";
  }

  static const char* value(const ::controller_manager_msgs::ControllersStatistics_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa154c347736773e3ULL;
  static const uint64_t static_value2 = 0x700d1719105df29dULL;
};

template<class ContainerAllocator>
struct DataType< ::controller_manager_msgs::ControllersStatistics_<ContainerAllocator> >
{
  static const char* value()
  {
    return "controller_manager_msgs/ControllersStatistics";
  }

  static const char* value(const ::controller_manager_msgs::ControllersStatistics_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::controller_manager_msgs::ControllersStatistics_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
controller_manager_msgs/ControllerStatistics[] controller\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: controller_manager_msgs/ControllerStatistics\n\
# This message contains the state of one realtime controller\n\
# that was spawned in the controller manager\n\
\n\
# the name of the controller\n\
string name\n\
\n\
# the type of the controller\n\
string type\n\
\n\
# the time at which these controller statistics were measured\n\
time timestamp\n\
\n\
# bool that indicates if the controller is currently\n\
# in a running or a stopped state\n\
bool running\n\
\n\
# the maximum time the update loop of the controller ever needed to complete\n\
duration max_time\n\
\n\
# the average time the update loop of the controller needs to complete.\n\
# the average is computed in a sliding time window.\n\
duration mean_time\n\
\n\
# the variance on the time the update loop of the controller needs to complete.\n\
# the variance applies to a sliding time window.\n\
duration variance_time\n\
\n\
# the number of times this controller broke the realtime loop\n\
int32 num_control_loop_overruns\n\
\n\
# the timestamp of the last time this controller broke the realtime loop\n\
time time_last_control_loop_overrun\n\
";
  }

  static const char* value(const ::controller_manager_msgs::ControllersStatistics_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::controller_manager_msgs::ControllersStatistics_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.controller);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ControllersStatistics_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::controller_manager_msgs::ControllersStatistics_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::controller_manager_msgs::ControllersStatistics_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "controller[]" << std::endl;
    for (size_t i = 0; i < v.controller.size(); ++i)
    {
      s << indent << "  controller[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::controller_manager_msgs::ControllerStatistics_<ContainerAllocator> >::stream(s, indent + "    ", v.controller[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // CONTROLLER_MANAGER_MSGS_MESSAGE_CONTROLLERSSTATISTICS_H
