# The Art of C++ / Tuple

[![Release](https://img.shields.io/github/release/taocpp/tuple.svg)](https://github.com/taocpp/tuple/releases/latest)
[![License](https://img.shields.io/github/license/taocpp/tuple.svg)](#license)
[![TravisCI](https://travis-ci.org/taocpp/tuple.svg)](https://travis-ci.org/taocpp/tuple)
[![Issues](https://img.shields.io/github/issues/taocpp/tuple.svg)](https://github.com/taocpp/tuple/issues)

The Art of C++ / Tuple is a C++11 header-only reference implementation of [`std::tuple`](http://en.cppreference.com/w/cpp/utility/tuple).

## Rationale

Why another implementation of `std::tuple`? To provide a proof-of-concept that, when avoiding recursion, code can benefit in significant ways. I prepared a talk about it, including some benchmarks.

[Download presentation](https://github.com/taocpp/tuple/blob/master/Variadic%20Templates.pdf)

TL;DR: GCC 5 with libstdc++'s `std::tuple` requires 19.6s and an instantiation depth of 3.719 to compile a tuple with 265 elements. `tao::tuple` requires 1.2s and an instantiation depth of 26. Similar advantages can be seen for Clang / libc++.

## Compatibility

* Requires C++11 or newer.
* Tested with GCC 4.8+ and Clang 3.4+.

## TODO

Add more documentation.
