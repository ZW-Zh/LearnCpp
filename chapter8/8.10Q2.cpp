#include <iostream>

int sumTo(int i)
{
    if(i == 1)
        return 1;
    return sumTo(i-1) + i;
}
int main()
{
    int i{0};
    std::cout << "Please enter a number: ";
    std::cin >> i;
    std::cout << sumTo(i) << '\n';
}