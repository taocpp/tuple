#!/usr/bin/env python
# -*- coding: utf-8 -*-
from conans import ConanFile, CMake

class TupleConan(ConanFile):
    name = "tuple"
    description = "C++11 header-only reference implementation of std::tuple"
    homepage = "https://github.com/taocpp/tuple"
    url = homepage
    license = "MIT"
    author = "taocpp@icemx.net"
    exports = "LICENSE"
    exports_sources = "include/*", "CMakeLists.txt"
    no_copy_source = True

    def build(self):
        pass

    def package(self):
        cmake = CMake(self)

        cmake.definitions["TAOCPP_TUPLE_BUILD_TESTS"] = "OFF"
        cmake.definitions["TAOCPP_TUPLE_INSTALL_DOC_DIR"] = "licenses"

        cmake.configure()
        cmake.install()

    def package_id(self):
        self.info.header_only()
