#include <iostream>

void fizzbuzz(int i)
{
    for(int j{1}; j <= i; ++j)
    {   
        bool flag{false};
        if(j % 3 == 0) 
        {
            std::cout << "fizz";
            flag = true;    
        }
        if(j % 5 == 0) 
        {
            std::cout << "buzz";
            flag = true;
        }
        if(j % 7 == 0) 
        {
            std::cout << "pop";
            flag = true;
        }
        if(flag)
            std::cout << '\n';
        else
            std::cout << j << '\n';
    }
}
int main()
{
    fizzbuzz(30);
}