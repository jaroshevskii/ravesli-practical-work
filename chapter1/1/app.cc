#include <iostream>

int getNumber() {
  std::cout << "> ";
  int number;
  std::cin >> number;
  return number;
}

void printResult(int result) {
  std::cout << "Result: " << result << '\n';
  std::cout << '\n';
}

int main() {
  // Отримую перше число
  std::cout << "Enter first number\n";
  int number1 = getNumber();
  
  // отимую друге число
  std::cout << "Enter second number\n";
  int number2 = getNumber();
  std::cout << '\n';
  
  // Вивожу результат складоння двох чисел
  printResult(number1 + number2);
  return 0;
}
