#include <iostream>
#include <future>
#include <vector>
#include <chrono>
#include <iostream>

template <typename Iter, typename Fn>
void parallel_map(Iter begin, Iter end, Fn fn)
{
  auto len = end - begin;
  if (len < 1000)
  {
    for (auto it = begin; it < end; it++)
      *it = fn(*it);
  }
  else
  {
    auto mid = begin + len / 2;
    auto a = std::async(std::launch::async, parallel_map<Iter, Fn>, mid, end, fn);
    auto b = std::async(std::launch::async, parallel_map<Iter, Fn>, begin, mid, fn);

    a.get();
    b.get();
  }
}

template <typename Iter, typename Fn>
void sequential_map(Iter begin, Iter end, Fn fn)
{
  for (auto it = begin; it < end; it++)
    *it = fn(*it);
}

int main()
{
  std::vector<int> a(1000000, 1);
  std::vector<int> b(1000000, 1);

  std::cout << "With parallel_map: ";
  auto begin = std::chrono::steady_clock::now();
  parallel_map(a.begin(), a.end(), [](auto n) { return n + 1; });
  auto end = std::chrono::steady_clock::now();
  auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
  std::cout << ms.count() << "ms" << std::endl;

  std::cout << "With sequential_map: ";
  begin = std::chrono::steady_clock::now();
  sequential_map(b.begin(), b.end(), [](auto n) { return n + 1; });
  end = std::chrono::steady_clock::now();
  ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
  std::cout << ms.count() << "ms" << std::endl;
}
