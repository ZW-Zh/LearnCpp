#include <iostream>

double calculateHeight(double height, int seconds)
{
    constexpr double gravity{ 9.8 };
    const double distanceFallen{ (gravity * seconds * seconds) / 2 };
    const double currentHeight{ height - distanceFallen };
    if(currentHeight <= 0) return 0.0;
    return currentHeight;
}
void printHeight(double towerHeight, int seconds)
{
    if(towerHeight < 0.0)
    {
        std::cout << "At "<<seconds<<" seconds, the ball is on the ground." << "\n";
    }
    else {
        std::cout << "At "<<seconds<<" seconds, the ball is at height: " << towerHeight << " meters" << "\n";
    }
}
void calculateAndPrintHeight(double towerHeight, int seconds)
{
	const double height{ calculateHeight(towerHeight, seconds) };
	printHeight(height, seconds);
}

int main()
{
    std::cout << "Enter the height of the tower in meters: ";
    double height{};
    std::cin >> height;

    int seconds{0};
    while(!calculateHeight(height, seconds))
        ++seconds;
}