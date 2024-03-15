                                       // TASK 2
                                         // SIMPLE CALCULATOR
                                         
/*statement-->Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.*/

#include <iostream>
using namespace std;
int main()
{ // main function

    int num1, num2;                   // decleration of two input
    char operation;                   // decleration of arithmetic operation
    cout << "enter a first value--> "; // first number input from user
    cin >> num1;
    cout << " enter the arithmetic operation to performs the value--> ";
    // arithmetic operation-->+,-,*,/,%

    cin >> operation;
    cout << "enter a second value--> "; // second number input from user
    cin >> num2;

    switch (operation)
    {
    case '+':
        cout << "Result--> " << num1 + num2 << endl;   //addition operation
        break;

    case '-':
        cout << "result--> " << num1 - num2 << endl;   //subtraction operation
        break;

    case '*':
        cout << "result--> " << num1 * num2 << endl;    //multiplication operation
        break;

    case '/':
        cout << "result--> " << num1 / num2 << endl;   //division operation
        break;

    case '%':
        cout << "result--> " << num1 % num2 << endl;  //find reminder operation
        break;

    default:
        cout << "invalide operation!,please enter valid arithmetic operation !";
        break;
    }
}
