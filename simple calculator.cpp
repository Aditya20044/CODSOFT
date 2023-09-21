#include <iostream>
using namespace std;

int main() {
    char operation;
    int firstNumber, secondNumber;

    cout << "Enter the first number: ";
    cin >> firstNumber;

    cout << "Enter the operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter the second number: ";
    cin >> secondNumber;

    switch (operation) {
        case '+':
            cout << "Result: " << firstNumber + secondNumber;
            break;
        case '-':
            cout << "Result: " << firstNumber - secondNumber;
            break;
        case '*':
            cout << "Result: " << firstNumber * secondNumber;
            break;
        case '/':
            if (secondNumber != 0) {
                cout << "Result: " << static_cast<double>(firstNumber) / secondNumber;
            } else {
                cout << "Division by zero is not allowed.";
            }
            break;
        default:
            cout << "Please enter a valid operation (+, -, *, /).";
    }

    return 0;
}

