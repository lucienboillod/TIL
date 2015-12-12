#include <cassert>
#include <iostream>

class A
{
public:
  using self_t = A;
  virtual void print() { std::cout << "I'm A" << std::endl; }
};

class B : public A
{
public:
  using self_t = B;
  virtual void print() { std::cout << "I'm B" << std::endl; }
};

class C : public A
{
public:
  virtual void print() { std::cout << "I'm C" << std::endl; }
};

int main()
{
  A::self_t a;
  B::self_t b;
  C::self_t c;
  a.print(); // I'm A
  b.print(); // I'm B
  c.print(); // I'm A
}
