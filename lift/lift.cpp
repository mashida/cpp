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

class Money
{
	float mAmount;
public:
	// getter & setter
	void SetMoney(float value) { mAmount = value; }
	float GetMoney() { return mAmount;  }
	// ctor & dtor
	Money(float a) : mAmount(a) {};
	~Money() {};
	// output
	void Print() { cout << "We have " << mAmount << " rubles.\n"; }
private:

};


int main()
{
	setlocale(LC_ALL, "");

	Money money = Money(100);
	money.Print(); // 100

	cout << "Enter you money amount, please.\n";
	float temp = 0;
	cin >> temp;
	money.SetMoney(temp);

	// проверяем если нет денег
	if (money.GetMoney() == 0)
	{
		cout << "We have no money.";
	}

	money.Print(); // 0
}
