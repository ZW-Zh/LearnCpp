#include <iostream>


int main()
{
    std::cout << "Enter a number between 0 and 255: ";
    unsigned short number{};
    std::cin >> number;

    std::cout << "In binary, that's: ";
    std::cout << (number / 128) % 2;
    std::cout << (number / 64) % 2;
    std::cout << (number / 32) % 2;
    std::cout << (number / 16) % 2;
    std::cout << (number / 8) % 2;
    std::cout << (number / 4) % 2;
    std::cout << (number / 2) % 2;
    std::cout << (number / 1) % 2;
    std::cout << '\n';
}
