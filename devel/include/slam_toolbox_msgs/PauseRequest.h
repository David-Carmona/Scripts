// Generated by gencpp from file slam_toolbox_msgs/PauseRequest.msg
// DO NOT EDIT!


#ifndef SLAM_TOOLBOX_MSGS_MESSAGE_PAUSEREQUEST_H
#define SLAM_TOOLBOX_MSGS_MESSAGE_PAUSEREQUEST_H


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
struct PauseRequest_
{
  typedef PauseRequest_<ContainerAllocator> Type;

  PauseRequest_()
    {
    }
  PauseRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::slam_toolbox_msgs::PauseRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::slam_toolbox_msgs::PauseRequest_<ContainerAllocator> const> ConstPtr;

}; // struct PauseRequest_

typedef ::slam_toolbox_msgs::PauseRequest_<std::allocator<void> > PauseRequest;

typedef boost::shared_ptr< ::slam_toolbox_msgs::PauseRequest > PauseRequestPtr;
typedef boost::shared_ptr< ::slam_toolbox_msgs::PauseRequest const> PauseRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::slam_toolbox_msgs::PauseRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::slam_toolbox_msgs::PauseRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace slam_toolbox_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::slam_toolbox_msgs::PauseRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::slam_toolbox_msgs::PauseRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::slam_toolbox_msgs::PauseRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::slam_toolbox_msgs::PauseRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::slam_toolbox_msgs::PauseRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::slam_toolbox_msgs::PauseRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::slam_toolbox_msgs::PauseRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::slam_toolbox_msgs::PauseRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::slam_toolbox_msgs::PauseRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "slam_toolbox_msgs/PauseRequest";
  }

  static const char* value(const ::slam_toolbox_msgs::PauseRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::slam_toolbox_msgs::PauseRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# trigger pause toggle\n"
"\n"
;
  }

  static const char* value(const ::slam_toolbox_msgs::PauseRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::slam_toolbox_msgs::PauseRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PauseRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::slam_toolbox_msgs::PauseRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::slam_toolbox_msgs::PauseRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // SLAM_TOOLBOX_MSGS_MESSAGE_PAUSEREQUEST_H
