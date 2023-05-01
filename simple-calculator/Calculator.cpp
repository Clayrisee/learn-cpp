#include "Calculator.h"

double Calculator::Calculate(double x, char oper, double y){
    switch (oper)
    {
        // if you want to compare char, use '' not "" :D
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            return x / y;
        default:
            return 0.0;
    }
}