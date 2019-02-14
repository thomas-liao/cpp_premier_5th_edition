#include <iostream>
#include "Sales_item.h"
int main()
{
  Sales_item prev;
  Sales_item now;
  int cnt = 1;
  if (std::cin >> prev) {
    while (std::cin >> now) {
      if (now.isbn() == prev.isbn()) {
        cnt++;
      }
      else {
        std::cout << "ISBN: " << prev.isbn() << " has sold " << cnt \
        << " copies " << std::endl;
        prev = now; 
        cnt = 1;
       }
     }
     // don't forget this one
     std::cout << "ISBN: " << prev.isbn() << " has sold " << cnt << " copies" <<std::endl;   
    
  }
  std::cout << "Invalid input!" << std::endl;
  return 0;
}
