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
  cout << "% for modulus (integers only)\n^ for power\np for percentage\n";
  cout <<  "l for natural logarithm\nL for log base 10\ns for sine\nc for cosine\nt for tangent\n";
  cout << "Enter operation : ";
  cin >> operation;
  if ( operation == 'L' ||operation == 's' || operation == 'c' || operation == 't' || ) {
        cout << "Enter a number: ";
        cin >> num1;
		switch (operation)
  {
  case 'L':
    if (num1 > 0) cout << "Result: " << log10(num1) << endl;
    else cout << "Error: Logarithm of non-positive number is undefined.\n";
    break;
  case 's':
    cout << "Result: " << sin(num1) << endl;
    break;
  case 'c':
    cout << "Result: " << cos(num1) << endl;
    break;
  case 't':
    cout << "Result: " << tan(num1) << endl;
    break;    
  default:
    cout << "Invalid operation!\n";
    break;
  }
  
  }

  else{
  cout << "Enter two numbers: ";
  cin >> num1 >> num2;}

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
  case '^':
    cout << "Result: " << pow(num1, num2) << endl;
    break;
  case 'p':
    cout << "Result: " << (num1 * num2 / 100) << " (as " << num2 << "% of " << num1 << ")\n";
    break;    
  default:
    cout << "Invalid operation!\n";
    break;
  }
  return 0;
}
