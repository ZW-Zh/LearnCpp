#include <iostream>

double getDouble()
{
    std::cout << "Enter a double value: ";
    double d{};
    std::cin >> d;
    return d;
}

char getOperator()
{
    std::cout << "Enter one of the following: +, -, *, or /: ";
    char op{};
    std::cin >> op;
    return op;
}
double calculate(double a, double b, char op)
{
    double result{};
    if(op == '+')
    {
        result = a + b;
    }else if(op == '-')
    {
        result = a - b;
    }else if(op == '*')
    {
        result = a * b;
    }else if(op == '/')
    {
        result = a / b;
    }
    return result;
}
int main()
{
    
    double d1{getDouble()};
    double d2{getDouble()};
    char op{getOperator()};

    std::cout << d1 << ' ' << op << ' ' << d2 << " is " << calculate(d1, d2, op) << '\n';

}