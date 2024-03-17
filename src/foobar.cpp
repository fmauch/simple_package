#include <simple_package/foobar.hpp>

#include <iostream>

int int_func(int input)
{
  std::cout << input << std::endl;

  throw std::runtime_error("Just some error.");

  return input;
}
