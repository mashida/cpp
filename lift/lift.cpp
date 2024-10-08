// Lift-01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;

class CLift
{
	int mLowerFloor;
	int mUpperFloor;
public:
	//--- getter & setter
	void LowerFloor(int value) { mLowerFloor = value; }
	void UpperFloor(int value) { mUpperFloor = value; }
	int LowerFloor() { return mLowerFloor; }
	int UpperFloor() { return mUpperFloor; }
	string GetString() {
		return "Лифт ездит между " + to_string(mLowerFloor) + " и " +
			to_string(mUpperFloor) + " этажами.\n";
	}
	void Print() { cout << GetString(); }
	//--- ctor & dtor
	CLift(int lower, int upper) : mLowerFloor(lower), mUpperFloor(upper) {};
	~CLift() {};

private:

};

int main()
{
	setlocale(LC_ALL, "");

	// just a comment
	CLift lift = CLift(1, 9);
	lift.Print();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
