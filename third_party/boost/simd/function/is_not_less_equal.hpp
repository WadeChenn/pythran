//==================================================================================================
/*!
  @file

    @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_IS_NOT_LESS_EQUAL_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_IS_NOT_LESS_EQUAL_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{

  /*!
    @ingroup group-predicates

    This function object returns @ref True  or @ref False depending on whether x is
    not less or equal to y or is.


    @par Header <boost/simd/function/is_not_less_equal.hpp>

    @par Note

     Using `is_not_less_equal(x,y)` is similar to: `!(x <= y)`

    @par Example:

      @snippet is_not_less_equal.cpp is_not_less_equal

    @par Possible output:

      @snippet is_not_less_equal.txt is_not_less_equal

  **/
  as_logical_t<Value> is_not_less_equal(Value const& x, Value const &y);
} }
#endif

#include <boost/simd/function/scalar/is_not_less_equal.hpp>
#include <boost/simd/function/simd/is_not_less_equal.hpp>

#endif
