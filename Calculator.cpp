#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  char operation;
  double num1, num2;

  cout << "Calculator\n";
  cout << "Choose an operation:\n";
  cout << "+ for addition\n- for subtraction\n* for multiplication\n/ for division\n";
  cout << "% for modulus (integers only)\n";
  cout << "Enter operation : ";
  cin >> operation;

  cout << "Enter two numbers: ";
  cin >> num1 >> num2;

  switch (operation)
  {
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
  default:
    cout << "Invalid operation!\n";
    break;
  }

  return 0;
}
