# The Art of C++ / Tuple

[![Release](https://img.shields.io/github/release/taocpp/tuple.svg)](https://github.com/taocpp/tuple/releases/latest)
[![TravisCI](https://travis-ci.org/taocpp/tuple.svg)](https://travis-ci.org/taocpp/tuple)
[![AppVeyor](https://ci.appveyor.com/api/projects/status/9opt30ae579kw19b/branch/master?svg=true)](https://ci.appveyor.com/project/taocpp/tuple)

[The Art of C++](https://taocpp.github.io/) / Tuple is a C++11 header-only reference implementation of
[`std::tuple`](http://en.cppreference.com/w/cpp/utility/tuple).

## Rationale

Why another implementation of `std::tuple`? To provide a proof-of-concept that,
when avoiding recursion, code can benefit in significant ways. I prepared a talk
about it, including some benchmarks.

[Download presentation](https://github.com/taocpp/tuple/blob/master/Variadic%20Templates.pdf)

TL;DR: GCC 5 on Linux with libstdc++'s `std::tuple` requires 19.6s and an instantiation
depth of at least 3.719 to compile an
[example](https://github.com/taocpp/tuple/blob/master/src/test/tuple/tuple_benchmark.cpp)
generating a tuple with 265 elements via `std::tuple_cat`.
`tao::tuple` requires 1.2s and an instantiation depth of 26 on the same system.

Apple LLVM 7.0 (~Clang 3.7) with libc++'s `std::tuple` requires 70s and an instantiation
depth of 514 to compile the example. `tao::tuple` requires 1.7s and an instantiation depth
of 15 on the same system.

## Compatibility

* Requires C++11 or newer.
* Tested with GCC 4.8+ and Clang 3.4+.

## License

The Art of C++ is certified [Open Source](http://www.opensource.org/docs/definition.html) software. It may be used for any purpose, including commercial purposes, at absolutely no cost. It is distributed under the terms of the [MIT license](http://www.opensource.org/licenses/mit-license.html) reproduced here.

> Copyright (c) 2015-2018 Daniel Frey
>
> Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
>
> The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
>
> THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
