#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    char optr;

    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Set the operator: ";
    cin >> optr;

    switch (optr) {
        case '+':
            cout << num1 + num2;
            break;
        case '-':
            cout << num1 - num2;
            break;
        case '*':
            cout << num1 * num2;
            break;
        case '/':
            cout << num1 / num2;
            break;
        default:
            cout << "You didn't provide a valid operator";
            break;
    }

    return 0;
}