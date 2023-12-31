// Generated by gencpp from file slam_toolbox_msgs/DeserializePoseGraphResponse.msg
// DO NOT EDIT!


#ifndef SLAM_TOOLBOX_MSGS_MESSAGE_DESERIALIZEPOSEGRAPHRESPONSE_H
#define SLAM_TOOLBOX_MSGS_MESSAGE_DESERIALIZEPOSEGRAPHRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace slam_toolbox_msgs
{
template <class ContainerAllocator>
struct DeserializePoseGraphResponse_
{
  typedef DeserializePoseGraphResponse_<ContainerAllocator> Type;

  DeserializePoseGraphResponse_()
    {
    }
  DeserializePoseGraphResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::slam_toolbox_msgs::DeserializePoseGraphResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::slam_toolbox_msgs::DeserializePoseGraphResponse_<ContainerAllocator> const> ConstPtr;

}; // struct DeserializePoseGraphResponse_

typedef ::slam_toolbox_msgs::DeserializePoseGraphResponse_<std::allocator<void> > DeserializePoseGraphResponse;

typedef boost::shared_ptr< ::slam_toolbox_msgs::DeserializePoseGraphResponse > DeserializePoseGraphResponsePtr;
typedef boost::shared_ptr< ::slam_toolbox_msgs::DeserializePoseGraphResponse const> DeserializePoseGraphResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::slam_toolbox_msgs::DeserializePoseGraphResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::slam_toolbox_msgs::DeserializePoseGraphResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace slam_toolbox_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::slam_toolbox_msgs::DeserializePoseGraphResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::slam_toolbox_msgs::DeserializePoseGraphResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::slam_toolbox_msgs::DeserializePoseGraphResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::slam_toolbox_msgs::DeserializePoseGraphResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::slam_toolbox_msgs::DeserializePoseGraphResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::slam_toolbox_msgs::DeserializePoseGraphResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::slam_toolbox_msgs::DeserializePoseGraphResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::slam_toolbox_msgs::DeserializePoseGraphResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::slam_toolbox_msgs::DeserializePoseGraphResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "slam_toolbox_msgs/DeserializePoseGraphResponse";
  }

  static const char* value(const ::slam_toolbox_msgs::DeserializePoseGraphResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::slam_toolbox_msgs::DeserializePoseGraphResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::slam_toolbox_msgs::DeserializePoseGraphResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::slam_toolbox_msgs::DeserializePoseGraphResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DeserializePoseGraphResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::slam_toolbox_msgs::DeserializePoseGraphResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::slam_toolbox_msgs::DeserializePoseGraphResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // SLAM_TOOLBOX_MSGS_MESSAGE_DESERIALIZEPOSEGRAPHRESPONSE_H
