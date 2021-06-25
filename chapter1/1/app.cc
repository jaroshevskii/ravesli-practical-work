#include <iostream>

int getNumber() {
  std::cout << "> number = ";
  int x;
  std::cin >> x;
  return x;
}

void printResult(int x) {
  std::cout << "Result: " << x << '\n';
  std::cout << '\n';
}

int main() {
  // Отримую перше число
  int number1 = getNumber();
  
  // отимую друге число
  int number2 = getNumber();
  std::cout << '\n';
  
  // Вивожу результат складоння двох чисел
  printResult(number1 + number2);
  return 0;
}
