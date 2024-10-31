#include <iostream>

void Print(int value)
{
	std::cout << value << "\n";
}

void Print(double value) 
{
	std::cout << value << "\n";
}

int main()
{
	double doubleValue = 10.5;
	int intValue = 5;
	Print(doubleValue);
	Print(intValue);
}