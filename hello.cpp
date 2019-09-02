#include <iostream>

int main(void)
{
  int num1;
  std::cout << "첫 번째 숫자 : ";
  std::cin >> num1;
  
  int num2;
  std::cout << "두 번째 숫자 : ";
  std::cin >> num2;
  
  int result = num1 + num2;
  std::cout << " 합 : " << num1 + num2 << std::end;
  
  return 0;
  }
