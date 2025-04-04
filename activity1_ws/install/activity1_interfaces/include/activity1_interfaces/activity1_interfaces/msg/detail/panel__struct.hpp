// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from activity1_interfaces:msg/Panel.idl
// generated code does not contain a copyright notice

#ifndef ACTIVITY1_INTERFACES__MSG__DETAIL__PANEL__STRUCT_HPP_
#define ACTIVITY1_INTERFACES__MSG__DETAIL__PANEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__activity1_interfaces__msg__Panel __attribute__((deprecated))
#else
# define DEPRECATED__activity1_interfaces__msg__Panel __declspec(deprecated)
#endif

namespace activity1_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Panel_
{
  using Type = Panel_<ContainerAllocator>;

  explicit Panel_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led1 = 0l;
      this->led2 = 0l;
      this->led3 = 0l;
    }
  }

  explicit Panel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led1 = 0l;
      this->led2 = 0l;
      this->led3 = 0l;
    }
  }

  // field types and members
  using _led1_type =
    int32_t;
  _led1_type led1;
  using _led2_type =
    int32_t;
  _led2_type led2;
  using _led3_type =
    int32_t;
  _led3_type led3;

  // setters for named parameter idiom
  Type & set__led1(
    const int32_t & _arg)
  {
    this->led1 = _arg;
    return *this;
  }
  Type & set__led2(
    const int32_t & _arg)
  {
    this->led2 = _arg;
    return *this;
  }
  Type & set__led3(
    const int32_t & _arg)
  {
    this->led3 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    activity1_interfaces::msg::Panel_<ContainerAllocator> *;
  using ConstRawPtr =
    const activity1_interfaces::msg::Panel_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<activity1_interfaces::msg::Panel_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<activity1_interfaces::msg::Panel_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      activity1_interfaces::msg::Panel_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<activity1_interfaces::msg::Panel_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      activity1_interfaces::msg::Panel_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<activity1_interfaces::msg::Panel_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<activity1_interfaces::msg::Panel_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<activity1_interfaces::msg::Panel_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__activity1_interfaces__msg__Panel
    std::shared_ptr<activity1_interfaces::msg::Panel_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__activity1_interfaces__msg__Panel
    std::shared_ptr<activity1_interfaces::msg::Panel_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Panel_ & other) const
  {
    if (this->led1 != other.led1) {
      return false;
    }
    if (this->led2 != other.led2) {
      return false;
    }
    if (this->led3 != other.led3) {
      return false;
    }
    return true;
  }
  bool operator!=(const Panel_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Panel_

// alias to use template instance with default allocator
using Panel =
  activity1_interfaces::msg::Panel_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace activity1_interfaces

#endif  // ACTIVITY1_INTERFACES__MSG__DETAIL__PANEL__STRUCT_HPP_
