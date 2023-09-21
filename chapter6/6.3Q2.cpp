#include <iostream>

bool isEven(int a)
{
    return a % 2 == 0;
}

int main()
{
    std::cout << "Enter an integer: ";
    int a{};
    std::cin >> a;

    std::cout << a << " is " << (isEven(a) ? "even" : "odd") << '\n';

}