#include <iostream>

int main()
{
    std::cout << "Enter an integer:";
    int a{};
    std::cin >> a;

    std::cout << "Enter a larger integer:";
    int b{};
    std::cin >> b;

    if(b < a)
    {
        std::cout << "Swapping the values\n";
        //int temp;
        //temp = b;
        int temp{b};
        b = a;
        a = temp;

        std::cout << "The smaller value is: " << a << "\n";
        std::cout << "The larger value is: " << b << "\n";
    }
    return 0;
}