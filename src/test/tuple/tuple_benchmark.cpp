// Copyright (c) 2015-2020 Daniel Frey
// Please see LICENSE for license or visit https://github.com/taocpp/tuple/

#include <tao/tuple/tuple.hpp>

#include <tuple>
#include <type_traits>

// To benchmark the standard library's version, enable this:
// #define tao std

int main()
{
   auto t = tao::tuple_cat( tao::make_tuple( 1, true ),
                            tao::make_tuple( 1.0 ),
                            tao::make_tuple(),
                            tao::make_tuple( 1UL, nullptr ) );

   static_assert( std::is_same< decltype( t ), tao::tuple< int, bool, double, unsigned long, std::nullptr_t > >::value, "oops" );

   auto t2 = tao::tuple_cat( t, tao::make_tuple( 1, true ), t, tao::make_tuple( 1.0 ), t, tao::make_tuple(), t, tao::make_tuple( 1UL, nullptr ) );

   static_assert( tao::tuple_size< decltype( t2 ) >::value == 25, "oops" );

   auto t3 = tao::tuple_cat( t2, tao::make_tuple( 1, true ), t2, tao::make_tuple( 1.0 ), t2, tao::make_tuple(), t2, tao::make_tuple( 1UL, nullptr ) );

   static_assert( tao::tuple_size< decltype( t3 ) >::value == 105, "oops" );

   auto t4 = tao::tuple_cat( t3, tao::make_tuple( 1, true ), t2, tao::make_tuple( 1.0 ), t3, tao::make_tuple(), t2, tao::make_tuple( 1UL, nullptr ) );

   static_assert( tao::tuple_size< decltype( t4 ) >::value == 265, "oops" );
}
