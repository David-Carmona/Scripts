// Generated by gencpp from file slam_toolbox_msgs/DeserializePoseGraphRequest.msg
// DO NOT EDIT!


#ifndef SLAM_TOOLBOX_MSGS_MESSAGE_DESERIALIZEPOSEGRAPHREQUEST_H
#define SLAM_TOOLBOX_MSGS_MESSAGE_DESERIALIZEPOSEGRAPHREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose2D.h>

namespace slam_toolbox_msgs
{
template <class ContainerAllocator>
struct DeserializePoseGraphRequest_
{
  typedef DeserializePoseGraphRequest_<ContainerAllocator> Type;

  DeserializePoseGraphRequest_()
    : filename()
    , match_type(0)
    , initial_pose()  {
    }
  DeserializePoseGraphRequest_(const ContainerAllocator& _alloc)
    : filename(_alloc)
    , match_type(0)
    , initial_pose(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _filename_type;
  _filename_type filename;

   typedef int8_t _match_type_type;
  _match_type_type match_type;

   typedef  ::geometry_msgs::Pose2D_<ContainerAllocator>  _initial_pose_type;
  _initial_pose_type initial_pose;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(UNSET)
  #undef UNSET
#endif
#if defined(_WIN32) && defined(START_AT_FIRST_NODE)
  #undef START_AT_FIRST_NODE
#endif
#if defined(_WIN32) && defined(START_AT_GIVEN_POSE)
  #undef START_AT_GIVEN_POSE
#endif
#if defined(_WIN32) && defined(LOCALIZE_AT_POSE)
  #undef LOCALIZE_AT_POSE
#endif

  enum {
    UNSET = 0,
    START_AT_FIRST_NODE = 1,
    START_AT_GIVEN_POSE = 2,
    LOCALIZE_AT_POSE = 3,
  };


  typedef boost::shared_ptr< ::slam_toolbox_msgs::DeserializePoseGraphRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::slam_toolbox_msgs::DeserializePoseGraphRequest_<ContainerAllocator> const> ConstPtr;

}; // struct DeserializePoseGraphRequest_

typedef ::slam_toolbox_msgs::DeserializePoseGraphRequest_<std::allocator<void> > DeserializePoseGraphRequest;

typedef boost::shared_ptr< ::slam_toolbox_msgs::DeserializePoseGraphRequest > DeserializePoseGraphRequestPtr;
typedef boost::shared_ptr< ::slam_toolbox_msgs::DeserializePoseGraphRequest const> DeserializePoseGraphRequestConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::slam_toolbox_msgs::DeserializePoseGraphRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::slam_toolbox_msgs::DeserializePoseGraphRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::slam_toolbox_msgs::DeserializePoseGraphRequest_<ContainerAllocator1> & lhs, const ::slam_toolbox_msgs::DeserializePoseGraphRequest_<ContainerAllocator2> & rhs)
{
  return lhs.filename == rhs.filename &&
    lhs.match_type == rhs.match_type &&
    lhs.initial_pose == rhs.initial_pose;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::slam_toolbox_msgs::DeserializePoseGraphRequest_<ContainerAllocator1> & lhs, const ::slam_toolbox_msgs::DeserializePoseGraphRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace slam_toolbox_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::slam_toolbox_msgs::DeserializePoseGraphRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::slam_toolbox_msgs::DeserializePoseGraphRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::slam_toolbox_msgs::DeserializePoseGraphRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::slam_toolbox_msgs::DeserializePoseGraphRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::slam_toolbox_msgs::DeserializePoseGraphRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::slam_toolbox_msgs::DeserializePoseGraphRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::slam_toolbox_msgs::DeserializePoseGraphRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "29a9bb432c3daccc49d63131eece4576";
  }

  static const char* value(const ::slam_toolbox_msgs::DeserializePoseGraphRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x29a9bb432c3dacccULL;
  static const uint64_t static_value2 = 0x49d63131eece4576ULL;
};

template<class ContainerAllocator>
struct DataType< ::slam_toolbox_msgs::DeserializePoseGraphRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "slam_toolbox_msgs/DeserializePoseGraphRequest";
  }

  static const char* value(const ::slam_toolbox_msgs::DeserializePoseGraphRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::slam_toolbox_msgs::DeserializePoseGraphRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int8 UNSET = 0\n"
"int8 START_AT_FIRST_NODE = 1\n"
"int8 START_AT_GIVEN_POSE = 2\n"
"int8 LOCALIZE_AT_POSE = 3\n"
"\n"
"# inital_pose should be Map -> base_frame (parameter, generally base_link)\n"
"#\n"
"\n"
"string filename\n"
"int8 match_type\n"
"geometry_msgs/Pose2D initial_pose\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose2D\n"
"# Deprecated\n"
"# Please use the full 3D pose.\n"
"\n"
"# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.\n"
"\n"
"# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.\n"
"\n"
"\n"
"# This expresses a position and orientation on a 2D manifold.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 theta\n"
;
  }

  static const char* value(const ::slam_toolbox_msgs::DeserializePoseGraphRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::slam_toolbox_msgs::DeserializePoseGraphRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.filename);
      stream.next(m.match_type);
      stream.next(m.initial_pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DeserializePoseGraphRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::slam_toolbox_msgs::DeserializePoseGraphRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::slam_toolbox_msgs::DeserializePoseGraphRequest_<ContainerAllocator>& v)
  {
    s << indent << "filename: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.filename);
    s << indent << "match_type: ";
    Printer<int8_t>::stream(s, indent + "  ", v.match_type);
    s << indent << "initial_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose2D_<ContainerAllocator> >::stream(s, indent + "  ", v.initial_pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SLAM_TOOLBOX_MSGS_MESSAGE_DESERIALIZEPOSEGRAPHREQUEST_H
