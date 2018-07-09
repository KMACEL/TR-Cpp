//============================================================================
// İsim        : 25_Namespace_Kullanimi
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : 25_Namespace_Kullanimi
//============================================================================
#include <iostream>
#include <functional>
#include <utility>
#include <thread>
#include <chrono>

void cb1(int a, double b, char c)
{
  std::cout << "cb1( " << a << ", " << b << ", " << c << ")\n";
}

void cb2(const char *a, const char *b)
{
  std::cout << "cb2( \"" << a << "\", \"" << b << "\")\n";
}

template <typename... Args>
void mylibfun(std::function<void(Args...)> &&func, Args... args)
{
  func(args...);
}

template <typename... Args>
void mylibfun(void f(Args...), Args... args)
{
  mylibfun(std::function<void(Args...)>(f), args...);
}

void callTest1()
{
  while (1)
  {
    std::this_thread::sleep_for(std::chrono::seconds(10));
    mylibfun(cb1, 1, 2.0, 'c');
  }
}

void callTest2()
{
  while (1)
  {
    std::this_thread::sleep_for(std::chrono::seconds(5));
    mylibfun(cb2, "abc", "xyz");
  }
}

int main()
{

  std::thread t1(callTest1);
  t1.detach();

  std::thread t2(callTest2);
  t2.detach();

  std::string x;
  std::cin >> x;
}