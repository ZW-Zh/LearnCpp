#include <iostream>

int main()
{
    char c{'a'};
    while(c != 'z' + 1)
    {
        std::cout << c << ' ' << static_cast<int>(c) << '\n';
        ++c;
    }
}