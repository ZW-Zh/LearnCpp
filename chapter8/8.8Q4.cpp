#include <iostream>

int main()
{
    int i{1};
    while(i <= 5)
    {
        int k{5- i};
        int j{i};
        //先打空格，再打i
        while(k > 0)
        {
            std::cout << ' ' << ' ';
            --k;
        }
        while(j > 0)
        {
            std::cout << j << ' ';
            --j;
        }
        std::cout << '\n';
        ++i;
    }
}