template <class F>
decltype(auto) compose(F&& f)
{
  return [=](auto x) { return f(x); };
}

template <class F, class... Other>
decltype(auto) compose(F&& f, Other&&... o)
{
  return [=](auto x) { return f(compose(o...)(x)); };
}

#include <iostream>
#include <math.h>

int main()
{
  std::cout << compose(sin, asin, cos, acos, tan)(0.5) << '\n';
  std::cout << sin(asin(cos(acos(tan(0.5))))) << '\n';
}
