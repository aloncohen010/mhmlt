// Generated by gencpp from file control_msgs/SingleJointPositionGoal.msg
// DO NOT EDIT!


#ifndef CONTROL_MSGS_MESSAGE_SINGLEJOINTPOSITIONGOAL_H
#define CONTROL_MSGS_MESSAGE_SINGLEJOINTPOSITIONGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace control_msgs
{
template <class ContainerAllocator>
struct SingleJointPositionGoal_
{
  typedef SingleJointPositionGoal_<ContainerAllocator> Type;

  SingleJointPositionGoal_()
    : position(0.0)
    , min_duration()
    , max_velocity(0.0)  {
    }
  SingleJointPositionGoal_(const ContainerAllocator& _alloc)
    : position(0.0)
    , min_duration()
    , max_velocity(0.0)  {
  (void)_alloc;
    }



   typedef double _position_type;
  _position_type position;

   typedef ros::Duration _min_duration_type;
  _min_duration_type min_duration;

   typedef double _max_velocity_type;
  _max_velocity_type max_velocity;





  typedef boost::shared_ptr< ::control_msgs::SingleJointPositionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::control_msgs::SingleJointPositionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct SingleJointPositionGoal_

typedef ::control_msgs::SingleJointPositionGoal_<std::allocator<void> > SingleJointPositionGoal;

typedef boost::shared_ptr< ::control_msgs::SingleJointPositionGoal > SingleJointPositionGoalPtr;
typedef boost::shared_ptr< ::control_msgs::SingleJointPositionGoal const> SingleJointPositionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::control_msgs::SingleJointPositionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::control_msgs::SingleJointPositionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace control_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/melodic/share/trajectory_msgs/cmake/../msg'], 'control_msgs': ['/tmp/binarydeb/ros-melodic-control-msgs-1.4.0/obj-x86_64-linux-gnu/devel/share/control_msgs/msg', '/tmp/binarydeb/ros-melodic-control-msgs-1.4.0/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::control_msgs::SingleJointPositionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::control_msgs::SingleJointPositionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::control_msgs::SingleJointPositionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::control_msgs::SingleJointPositionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::control_msgs::SingleJointPositionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::control_msgs::SingleJointPositionGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::control_msgs::SingleJointPositionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fbaaa562a23a013fd5053e5f72cbb35c";
  }

  static const char* value(const ::control_msgs::SingleJointPositionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfbaaa562a23a013fULL;
  static const uint64_t static_value2 = 0xd5053e5f72cbb35cULL;
};

template<class ContainerAllocator>
struct DataType< ::control_msgs::SingleJointPositionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "control_msgs/SingleJointPositionGoal";
  }

  static const char* value(const ::control_msgs::SingleJointPositionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::control_msgs::SingleJointPositionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
float64 position\n\
duration min_duration\n\
float64 max_velocity\n\
";
  }

  static const char* value(const ::control_msgs::SingleJointPositionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::control_msgs::SingleJointPositionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.position);
      stream.next(m.min_duration);
      stream.next(m.max_velocity);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SingleJointPositionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::control_msgs::SingleJointPositionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::control_msgs::SingleJointPositionGoal_<ContainerAllocator>& v)
  {
    s << indent << "position: ";
    Printer<double>::stream(s, indent + "  ", v.position);
    s << indent << "min_duration: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.min_duration);
    s << indent << "max_velocity: ";
    Printer<double>::stream(s, indent + "  ", v.max_velocity);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CONTROL_MSGS_MESSAGE_SINGLEJOINTPOSITIONGOAL_H
