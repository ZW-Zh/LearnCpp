#include <iostream>

void fizzbuzz(int i)
{
    for(int j{1}; j <= i; ++j)
    {   
        if(j % 3 == 0 && j % 5 == 0) 
        {
            std::cout << "fizzbuzz" << '\n';
            continue;
        }
        if(j % 3 == 0) 
        {
            std::cout << "fizz" << '\n';
            continue;
        }
        if(j % 5 == 0) 
        {
            std::cout << "buzz" << '\n';
            continue;
        }
        std::cout << j << '\n';
    }
}
int main()
{
    fizzbuzz(15);
}