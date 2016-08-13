/* Auto-generated by genmsg_cpp for file /home/dyutimoy/kinetic_workspace/kraken_3.0-indigo-devel/msgs_stack/kraken_msgs/msg/scanResult.msg */
#ifndef KRAKEN_MSGS_MESSAGE_SCANRESULT_H
#define KRAKEN_MSGS_MESSAGE_SCANRESULT_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace kraken_msgs
{
template <class ContainerAllocator>
struct scanResult_ {
  typedef scanResult_<ContainerAllocator> Type;

  scanResult_()
  {
  }

  scanResult_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::kraken_msgs::scanResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kraken_msgs::scanResult_<ContainerAllocator>  const> ConstPtr;
}; // struct scanResult
typedef  ::kraken_msgs::scanResult_<std::allocator<void> > scanResult;

typedef boost::shared_ptr< ::kraken_msgs::scanResult> scanResultPtr;
typedef boost::shared_ptr< ::kraken_msgs::scanResult const> scanResultConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::kraken_msgs::scanResult_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::kraken_msgs::scanResult_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace kraken_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::kraken_msgs::scanResult_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::kraken_msgs::scanResult_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::kraken_msgs::scanResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::kraken_msgs::scanResult_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::kraken_msgs::scanResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "kraken_msgs/scanResult";
  }

  static const char* value(const  ::kraken_msgs::scanResult_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::kraken_msgs::scanResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#result\n\
\n\
\n\
";
  }

  static const char* value(const  ::kraken_msgs::scanResult_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::kraken_msgs::scanResult_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::kraken_msgs::scanResult_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct scanResult_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kraken_msgs::scanResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::kraken_msgs::scanResult_<ContainerAllocator> & v) 
  {
  }
};


} // namespace message_operations
} // namespace ros

#endif // KRAKEN_MSGS_MESSAGE_SCANRESULT_H
