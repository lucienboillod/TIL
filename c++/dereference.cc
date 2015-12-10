// How to dereference a pointer how to get its value
template <class T>
auto dereference(T var)
{
  return var;
}

template <class T>
auto dereference(T* var)
{
  return dereference(*var);
}

#include <iostream>

int main()
{
  int i{42};
  auto *j = new int{69};
  auto ***k = new int**{new int*{new int{88}}};

  std::cout << dereference(i) << std::endl;
  std::cout << dereference(j) << std::endl;
  std::cout << dereference(k) << std::endl;
}
