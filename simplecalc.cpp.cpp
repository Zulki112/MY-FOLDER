#include <iostream>

using namespace std;

int main () {

char op;
double Num1;
double Num2;
double result;

cout<< "Enter any Operator of your choice (between +, -, *, and /)" <<endl;
cin>> op;



cout<< "Enter Num1: ";
cin>> Num1;

cout<< "Enter Num2: ";
cin>> Num2;

switch (op){

    case '+':
        result = Num1 + Num2;
        cout<< "result for addition: " << result <<endl;
        break;

    case '-':
        result = Num1 - Num2;
        cout<< "result for subtraction: " << result <<endl;
        break;

     case '*':
        result = Num1 * Num2;
        cout<< "result for multiplication: " << result <<endl;
        break;

    case '/':
        result = Num1 / Num2;
        cout<< "result for division: " << result <<endl;
        break;

    default:
        cout<< "You have entered a wrong operator"<<endl;
        break;
}


    return 0;
}
