#include <iostream>
#include "Sales_item.h"

int main()
{
  Sales_item total, item;
  if (std::cin >> total)
  {
    while (std::cin >> item) 
      total += item;
    std::cout << total << std::endl;
  }
  else
  {
    std::cout << "Invalid input encountered!" << std::endl;
  }
  


}
