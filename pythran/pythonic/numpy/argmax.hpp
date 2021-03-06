#ifndef PYTHONIC_NUMPY_ARGMAX_HPP
#define PYTHONIC_NUMPY_ARGMAX_HPP

#include "pythonic/include/numpy/argmax.hpp"
#include "pythonic/numpy/argminmax.hpp"

PYTHONIC_NS_BEGIN

namespace numpy
{
  template <class E>
  struct argmax_op {
    static typename E::dtype constexpr limit()
    {
      return std::numeric_limits<typename E::dtype>::lowest();
    }
    template <class T>
    static T elements(T first, T last)
    {
      return std::max_element(first, last);
    }
    template <class T>
    static T value(T self, T other)
    {
      return self > other;
    }
  };

  template <class E>
  long argmax(E const &expr)
  {
    return argminmax<argmax_op<E>>(expr);
  }

  template <class E>
  types::ndarray<long, E::value - 1> argmax(E const &expr, long axis)
  {
    return argminmax<argmax_op<E>>(expr, axis);
  }

  DEFINE_FUNCTOR(pythonic::numpy, argmax);
}
PYTHONIC_NS_END

#endif
