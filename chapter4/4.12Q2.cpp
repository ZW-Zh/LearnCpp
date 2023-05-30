#include <iostream>

int getInt(int c)
{
	return c;
}

int charAsInt(char c)
{
	return c;
}

int main()
{
    std::cout<<"Enter a single character: ";

    char ch{};
    std::cin >> ch;

    int ascii{ ch };
    std::cout << "You entered: " << ch << " ,which has ASCII code "<< ch << std::endl;
    return 0;
}