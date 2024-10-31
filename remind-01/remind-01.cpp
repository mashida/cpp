#include <iostream>

class Example {
	int mValue;
public:
	// gtter & setter
	int Value() { return mValue; }
	// ctor & dtor
	Example() = default;
	Example(int value) : mValue(value) {};

};

int main() {
	Example example = Example(10);

	std::cout << example.Value();
}