#include <iostream>

double calculateHeight(double height, int seconds)
{
    constexpr double gravity{ 9.8 };
    const double distanceFallen{ (gravity * seconds * seconds) / 2 };
    const double currentHeight{ height - distanceFallen };
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

    calculateAndPrintHeight(height, 0);
    calculateAndPrintHeight(height, 1);
    calculateAndPrintHeight(height, 2);
    calculateAndPrintHeight(height, 3);
    calculateAndPrintHeight(height, 4);
    calculateAndPrintHeight(height, 5);
}