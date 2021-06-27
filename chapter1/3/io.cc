#include <iostream>

// Отримати число
int getNumber() {
  std::cout << "> ";
  int number;
  std::cin >> number;
  return number;
}

// Вивести результат
void printResult(int result) {
  std::cout << "Result: " << result << '\n';
  std::cout << '\n';
}
