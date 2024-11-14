#include <iostream>
#include <cmath>
using namespace std;

int factorial(int n) {
  if (n == 0 || n == 1)
    return 1;
  return n * factorial(n - 1);
}

int main() {
  char operation;
  double num1, num2;

  cout << "Calculator\n";
  cout << "Choose an operation:\n";
  cout << "+ for addition\n- for subtraction\n* for multiplication\n/ for division\n";
  cout << "% for modulus (integers only)\n^ for power\np for percentage\n";
  cout << "! for factorial (first number only)\nl for logarithm (base 10)\ne for exponential (e^num1)\n";
  cout << "Enter operation : ";
  cin >> operation;

  if (operation == '!') {
    cout << "Enter an integer: ";
    cin >> num1;
    if (num1 >= 0 && floor(num1) == num1)
      cout << "Result: " << factorial((int)num1) << endl;
    else
      cout << "Error: Factorial is only defined for non-negative integers.\n";
  } else {
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (operation) {
    case '+':
      cout << "Result: " << num1 + num2 << endl;
      break;
    case '-':
      cout << "Result: " << num1 - num2 << endl;
      break;
    case '*':
      cout << "Result: " << num1 * num2 << endl;
      break;
    case '/':
      if (num2 != 0)
        cout << "Result: " << num1 / num2 << endl;
      else
        cout << "Error: Division by zero is not allowed.\n";
      break;
    case '%':
      if ((int)num2 != 0)
        cout << "Result: " << (int)num1 % (int)num2 << endl;
      else
        cout << "Error: Modulus by zero is not allowed.\n";
      break;
    case '^':
      cout << "Result: " << pow(num1, num2) << endl;
      break;
    case 'p':
      cout << "Result: " << (num1 * num2 / 100) << " (as " << num2 << "% of " << num1 << ")\n";
      break;
    case 'l':
      if (num1 > 0)
        cout << "Result: " << log10(num1) << endl;
      else
        cout << "Error: Logarithm is only defined for positive numbers.\n";
      break;
    case 'e':
      cout << "Result: " << exp(num1) << endl;
      break;
    case '!':
      if (num1 >= 0 && floor(num1) == num1)
        cout << "Result: " << factorial((int)num1) << endl;
      else
        cout << "Error: Factorial is only defined for non-negative integers.\n";
      break;
    default:
      cout << "Invalid operation!\n";
      break;
    }
  }

  return 0;
}
