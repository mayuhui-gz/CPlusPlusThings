# CMakeList.txt: cppthings 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)

# 如果支持，请为 MSVC 编译器启用热重载。
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("cppthings")

# 将源代码添加到此项目的可执行文件。
add_executable (const "./basic_content/const/extern_const/const_file2")
add_executable (file "./basic_content/const/extern_const/file2")
add_executable (example_const "./basic_content/const/funciton_const/condition1/condition3")
add_executable (class_const "./basic_content/const/class_const/c++11_example/main.cpp")
add_executable (class_const_first "./basic_content/const/class_const/first_example/main.cpp")
add_executable (static_error "./basic_content/static/static_error_variable.cpp")
add_executable (inline "./basic_content/inline/inline_virtual.cpp")
add_executable (blackclass "./basic_content/sizeof/blackclass.cpp")
add_executable (sizeofstatic "./basic_content/sizeof/static.cpp")
add_executable (func "./basic_content/func_pointer/func_pointer.cpp")
#add_executable (vptr "./basic_content/vptr_vtable/vptr1.cpp")
add_executable (set1 "./basic_content/virtual/set1/emp.cpp")
add_executable (variadic "./c++2.0/c++11/variadic/variadic")
add_executable (variadic1 "./c++2.0/c++11/variadic/variadic1")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET variadic PROPERTY CXX_STANDARD 20)
  set_property(TARGET variadic1 PROPERTY CXX_STANDARD 20)
endif()

# TODO: 如有需要，请添加测试并安装目标。
