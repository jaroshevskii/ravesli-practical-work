#include <iostream>

double getDouble() {
  std::cout << "Enter a double values: ";
  double value;
  std::cin >> value;
  return value;
}

char getOper() {
  std::cout << "Enter one of the following: +, -, *, or /: ";
  char oper;
  std::cin >> oper;
  return oper;
}

void printResult(const double &a, const double &oper, const double &b) {
  if (oper == '+') {
    std::cout << a << ' ' << oper << ' ' << b << " = " << a + b << '\n';
  } else if (oper == '-') {
    std::cout << a << ' ' << oper << ' ' << b << " = " << a - b << '\n';
  } else if (oper == '*') {
    std::cout << a << ' ' << oper << ' ' << b << " = " << a * b << '\n';
  } else if (oper == '/') {
    std::cout << a << ' ' << oper << ' ' << b << " = " << a * b << '\n';
  }
}

int main() {
  const double a(getDouble());
  const double b(getDouble());

  const char oper(getOper());
  
  printResult(a, b, oper);
  std::cout << '\n';
  return 0;
}