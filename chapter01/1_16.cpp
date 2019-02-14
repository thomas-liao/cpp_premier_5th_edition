#include<iostream>
int main()
{
  std::cout << "Input numbers for sum : " << std::endl;
  int sum = 0, v = 0;
  while (std::cin >> v)
    sum += v;
  std::cout << "Summation result is: " << sum << std::endl;
  return 0;


}
