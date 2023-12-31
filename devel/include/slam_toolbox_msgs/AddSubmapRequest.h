// Generated by gencpp from file slam_toolbox_msgs/AddSubmapRequest.msg
// DO NOT EDIT!


#ifndef SLAM_TOOLBOX_MSGS_MESSAGE_ADDSUBMAPREQUEST_H
#define SLAM_TOOLBOX_MSGS_MESSAGE_ADDSUBMAPREQUEST_H


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
struct AddSubmapRequest_
{
  typedef AddSubmapRequest_<ContainerAllocator> Type;

  AddSubmapRequest_()
    : filename()  {
    }
  AddSubmapRequest_(const ContainerAllocator& _alloc)
    : filename(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _filename_type;
  _filename_type filename;





  typedef boost::shared_ptr< ::slam_toolbox_msgs::AddSubmapRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::slam_toolbox_msgs::AddSubmapRequest_<ContainerAllocator> const> ConstPtr;

}; // struct AddSubmapRequest_

typedef ::slam_toolbox_msgs::AddSubmapRequest_<std::allocator<void> > AddSubmapRequest;

typedef boost::shared_ptr< ::slam_toolbox_msgs::AddSubmapRequest > AddSubmapRequestPtr;
typedef boost::shared_ptr< ::slam_toolbox_msgs::AddSubmapRequest const> AddSubmapRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::slam_toolbox_msgs::AddSubmapRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::slam_toolbox_msgs::AddSubmapRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::slam_toolbox_msgs::AddSubmapRequest_<ContainerAllocator1> & lhs, const ::slam_toolbox_msgs::AddSubmapRequest_<ContainerAllocator2> & rhs)
{
  return lhs.filename == rhs.filename;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::slam_toolbox_msgs::AddSubmapRequest_<ContainerAllocator1> & lhs, const ::slam_toolbox_msgs::AddSubmapRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace slam_toolbox_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::slam_toolbox_msgs::AddSubmapRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::slam_toolbox_msgs::AddSubmapRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::slam_toolbox_msgs::AddSubmapRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::slam_toolbox_msgs::AddSubmapRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::slam_toolbox_msgs::AddSubmapRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::slam_toolbox_msgs::AddSubmapRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::slam_toolbox_msgs::AddSubmapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "030824f52a0628ead956fb9d67e66ae9";
  }

  static const char* value(const ::slam_toolbox_msgs::AddSubmapRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x030824f52a0628eaULL;
  static const uint64_t static_value2 = 0xd956fb9d67e66ae9ULL;
};

template<class ContainerAllocator>
struct DataType< ::slam_toolbox_msgs::AddSubmapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "slam_toolbox_msgs/AddSubmapRequest";
  }

  static const char* value(const ::slam_toolbox_msgs::AddSubmapRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::slam_toolbox_msgs::AddSubmapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string filename\n"
;
  }

  static const char* value(const ::slam_toolbox_msgs::AddSubmapRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::slam_toolbox_msgs::AddSubmapRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.filename);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AddSubmapRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::slam_toolbox_msgs::AddSubmapRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::slam_toolbox_msgs::AddSubmapRequest_<ContainerAllocator>& v)
  {
    s << indent << "filename: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.filename);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SLAM_TOOLBOX_MSGS_MESSAGE_ADDSUBMAPREQUEST_H
