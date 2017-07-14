#ifndef PYTHONIC_INCLUDE_BUILTIN_STR_MOD_HPP
#define PYTHONIC_INCLUDE_BUILTIN_STR_MOD_HPP

#include "pythonic/include/types/str.hpp"
#include "pythonic/include/utils/functor.hpp"

namespace pythonic
{

  namespace __builtin__
  {

    namespace str
    {
      template <class T>
      types::str __mod__(types::str const &, T const &arg);
      template <class... Ts>
      types::str __mod__(types::str const &, std::tuple<Ts...> const &args);
      template <size_t N, class T>
      types::str __mod__(types::str const &, types::array<T, N> const &args);

      DECLARE_FUNCTOR(pythonic::__builtin__::str, __mod__);
    }
  }
}
#endif