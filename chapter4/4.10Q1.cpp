#include <iostream>

int main()
{
    std::cout << "Enter an integer 0 through 9: ";

	int num{ };
	std::cin >> num;

    bool flag = false;
    for(int i = 2; i < num-1; ++i)
    {
        if(num % i == 0)
        {
            flag = true;
            std::cout << "The number " << num << " is not prime.\n";
            return 0;
        }
    }
    std::cout << "The number " << num << " is prime.\n";
}