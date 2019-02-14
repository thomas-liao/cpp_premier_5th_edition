#include <iostream>
int main() {
  int start = 0, end = 0;
  std::cin >> start >> end;
  while (start <= end)
    std::cout << start++ <<" ";
  std::cout << std::endl;
  return 0;
}
