#include <iostream>
class Example {
	int value;
public:
	int Value() { return value; }
	void Value(int digit) { value = digit; }
};


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

	Example example;
	example.Value(16);
	std::cout << example.Value();
}