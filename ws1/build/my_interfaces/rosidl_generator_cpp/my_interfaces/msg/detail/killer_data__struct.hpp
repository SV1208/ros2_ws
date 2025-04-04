// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_interfaces:msg/KillerData.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__KILLER_DATA__STRUCT_HPP_
#define MY_INTERFACES__MSG__DETAIL__KILLER_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_interfaces__msg__KillerData __attribute__((deprecated))
#else
# define DEPRECATED__my_interfaces__msg__KillerData __declspec(deprecated)
#endif

namespace my_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KillerData_
{
  using Type = KillerData_<ContainerAllocator>;

  explicit KillerData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->killername = "";
      this->numberofpeoplekilled = 0ll;
    }
  }

  explicit KillerData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : killername(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->killername = "";
      this->numberofpeoplekilled = 0ll;
    }
  }

  // field types and members
  using _killername_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _killername_type killername;
  using _numberofpeoplekilled_type =
    int64_t;
  _numberofpeoplekilled_type numberofpeoplekilled;
  using _keykilledpeople_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _keykilledpeople_type keykilledpeople;

  // setters for named parameter idiom
  Type & set__killername(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->killername = _arg;
    return *this;
  }
  Type & set__numberofpeoplekilled(
    const int64_t & _arg)
  {
    this->numberofpeoplekilled = _arg;
    return *this;
  }
  Type & set__keykilledpeople(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->keykilledpeople = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interfaces::msg::KillerData_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interfaces::msg::KillerData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interfaces::msg::KillerData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interfaces::msg::KillerData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interfaces::msg::KillerData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::msg::KillerData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interfaces::msg::KillerData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::msg::KillerData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interfaces::msg::KillerData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interfaces::msg::KillerData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interfaces__msg__KillerData
    std::shared_ptr<my_interfaces::msg::KillerData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interfaces__msg__KillerData
    std::shared_ptr<my_interfaces::msg::KillerData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KillerData_ & other) const
  {
    if (this->killername != other.killername) {
      return false;
    }
    if (this->numberofpeoplekilled != other.numberofpeoplekilled) {
      return false;
    }
    if (this->keykilledpeople != other.keykilledpeople) {
      return false;
    }
    return true;
  }
  bool operator!=(const KillerData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KillerData_

// alias to use template instance with default allocator
using KillerData =
  my_interfaces::msg::KillerData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_interfaces

#endif  // MY_INTERFACES__MSG__DETAIL__KILLER_DATA__STRUCT_HPP_
