// Generated by gencpp from file pcl_msgs/Vertices.msg
// DO NOT EDIT!


#ifndef PCL_MSGS_MESSAGE_VERTICES_H
#define PCL_MSGS_MESSAGE_VERTICES_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pcl_msgs
{
template <class ContainerAllocator>
struct Vertices_
{
  typedef Vertices_<ContainerAllocator> Type;

  Vertices_()
    : vertices()  {
    }
  Vertices_(const ContainerAllocator& _alloc)
    : vertices(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other >  _vertices_type;
  _vertices_type vertices;





  typedef boost::shared_ptr< ::pcl_msgs::Vertices_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pcl_msgs::Vertices_<ContainerAllocator> const> ConstPtr;

}; // struct Vertices_

typedef ::pcl_msgs::Vertices_<std::allocator<void> > Vertices;

typedef boost::shared_ptr< ::pcl_msgs::Vertices > VerticesPtr;
typedef boost::shared_ptr< ::pcl_msgs::Vertices const> VerticesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pcl_msgs::Vertices_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pcl_msgs::Vertices_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pcl_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'pcl_msgs': ['/tmp/binarydeb/ros-melodic-pcl-msgs-0.2.0/msg'], 'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pcl_msgs::Vertices_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pcl_msgs::Vertices_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pcl_msgs::Vertices_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pcl_msgs::Vertices_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pcl_msgs::Vertices_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pcl_msgs::Vertices_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pcl_msgs::Vertices_<ContainerAllocator> >
{
  static const char* value()
  {
    return "39bd7b1c23763ddd1b882b97cb7cfe11";
  }

  static const char* value(const ::pcl_msgs::Vertices_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x39bd7b1c23763dddULL;
  static const uint64_t static_value2 = 0x1b882b97cb7cfe11ULL;
};

template<class ContainerAllocator>
struct DataType< ::pcl_msgs::Vertices_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pcl_msgs/Vertices";
  }

  static const char* value(const ::pcl_msgs::Vertices_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pcl_msgs::Vertices_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# List of point indices\n\
uint32[] vertices\n\
";
  }

  static const char* value(const ::pcl_msgs::Vertices_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pcl_msgs::Vertices_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.vertices);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Vertices_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pcl_msgs::Vertices_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pcl_msgs::Vertices_<ContainerAllocator>& v)
  {
    s << indent << "vertices[]" << std::endl;
    for (size_t i = 0; i < v.vertices.size(); ++i)
    {
      s << indent << "  vertices[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.vertices[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PCL_MSGS_MESSAGE_VERTICES_H
