// remind-01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Example {
    int privateMember;
protected:
    int protectedMember;
public:
    int publicMember;
    // getter & setter
    int GetPrivateMember() { return privateMember; };
    void SetPrivateMember(int value) { privateMember = value; }
};

class ExampleInherited : public Example {
public:
    int GetProtectedMember() { return protectedMember; }
    void SetProtectedMember(int value) { protectedMember = value; }
};

int main()
{
    Example example = Example();
    example.publicMember = 10;
    example.SetPrivateMember(20);

    ExampleInherited exampleInherited = ExampleInherited();
    exampleInherited.SetProtectedMember(30);

    std::cout << "example private: " << example.GetPrivateMember() << "\n";
    std::cout << "example public: " << example.publicMember << "\n";
    std::cout << "exampleInherited protected: " << exampleInherited.GetProtectedMember() << "\n";
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
