#include <iostream>
#include <cmath> // For math functions like pow, sqrt, sin, etc.
using namespace std;

double factorial(int num) {
    if (num < 0) return -1; // Error case for negative numbers
    double result = 1;
    for (int i = 1; i <= num; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    char operation;
    double num1, num2;

    cout << "Extended Calculator\n";
    cout << "Choose an operation:\n";
    cout << "+ for addition\n- for subtraction\n* for multiplication\n/ for division\n";
    cout << "% for modulus (integers only)\n^ for power\nr for square root\n";
    cout << "l for natural logarithm\nL for log base 10\n";
    cout << "s for sine\nc for cosine\nt for tangent\n";
    cout << "f for factorial\np for percentage\n";
    cout << "S for inverse sine\nC for inverse cosine\nT for inverse tangent\n";
    cout << "e for exponent (e^x)\n";
    cout << "Enter an operator: ";
    cin >> operation;

    if (operation == 'r' || operation == 'l' || operation == 'L' || 
        operation == 's' || operation == 'c' || operation == 't' || 
        operation == 'S' || operation == 'C' || operation == 'T' || 
        operation == 'e' || operation == 'f') {
        
        // Operations that require only one input
        cout << "Enter a number: ";
        cin >> num1;

        switch (operation) {
            case 'r':
                if (num1 >= 0) cout << "Result: " << sqrt(num1) << endl;
                else cout << "Error: Square root of a negative number is undefined in real numbers.\n";
                break;
            case 'l':
                if (num1 > 0) cout << "Result: " << log(num1) << endl;
                else cout << "Error: Logarithm of non-positive number is undefined.\n";
                break;
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
            case 'S':
                if (num1 >= -1 && num1 <= 1) cout << "Result: " << asin(num1) << endl;
                else cout << "Error: Value out of domain for arcsin.\n";
                break;
            case 'C':
                if (num1 >= -1 && num1 <= 1) cout << "Result: " << acos(num1) << endl;
                else cout << "Error: Value out of domain for arccos.\n";
                break;
            case 'T':
                cout << "Result: " << atan(num1) << endl;
                break;
            case 'e':
                cout << "Result: " << exp(num1) << endl;
                break;
            case 'f':
                if (num1 >= 0 && floor(num1) == num1) cout << "Result: " << factorial(static_cast<int>(num1)) << endl;
                else cout << "Error: Factorial only defined for non-negative integers.\n";
                break;
            default:
                cout << "Invalid operation!\n";
                break;
        }

    } else {
        // Operations that require two inputs
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
                if (num2 != 0) cout << "Result: " << num1 / num2 << endl;
                else cout << "Error: Division by zero is not allowed.\n";
                break;
            case '%':
                if ((int)num2 != 0) cout << "Result: " << (int)num1 % (int)num2 << endl;
                else cout << "Error: Modulus by zero is not allowed.\n";
                break;
            case '^':
                cout << "Result: " << pow(num1, num2) << endl;
                break;
            case 'p':
                cout << "Result: " << (num1 * num2 / 100) << " (as " << num2 << "% of " << num1 << ")\n";
                break;
            default:
                cout << "Invalid operator!" << endl;
                break;
        }
    }
    return 0;
}