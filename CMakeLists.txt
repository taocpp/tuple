cmake_minimum_required (VERSION 3.2.0 FATAL_ERROR)

project (taocpp-tuple VERSION 1.0.0 LANGUAGES CXX)

# installation directories
set (TAOCPP_TUPLE_INSTALL_INCLUDE_DIR "include" CACHE STRING "The installation include directory")
set (TAOCPP_TUPLE_INSTALL_DOC_DIR "share/doc/tao/tuple" CACHE STRING "The installation doc directory")
set (TAOCPP_TUPLE_INSTALL_CMAKE_DIR "share/taocpp-tuple/cmake" CACHE STRING "The installation cmake directory")

# define a header-only library
add_library (tuple INTERFACE)
add_library (taocpp::tuple ALIAS tuple)
target_include_directories (tuple INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:${TAOCPP_TUPLE_INSTALL_INCLUDE_DIR}>
)

# features used by taocpp/tuple
target_compile_features (tuple INTERFACE
  cxx_constexpr
  cxx_noexcept
  cxx_rvalue_references
)

# testing
enable_testing ()
option (TAOCPP_TUPLE_BUILD_TESTS "Build test programs" ON)
if (TAOCPP_TUPLE_BUILD_TESTS)
  add_subdirectory (src/test/tuple)
endif ()

# install and export target
install (TARGETS tuple EXPORT tuple-targets)

install (EXPORT tuple-targets
  FILE taocpp-tuple-config.cmake
  NAMESPACE taocpp::
  DESTINATION ${TAOCPP_TUPLE_INSTALL_CMAKE_DIR}
)

install (DIRECTORY include/ DESTINATION ${TAOCPP_TUPLE_INSTALL_INCLUDE_DIR})
install (FILES LICENSE DESTINATION ${TAOCPP_TUPLE_INSTALL_DOC_DIR})
