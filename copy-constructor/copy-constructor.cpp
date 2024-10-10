#include <iostream>
#include <vector>
#include <string>
#include "copy-constructor.h"

using namespace std;

class Example {
    int a;
public:
    void SetA(int value) { a = value; }
    int GetA() const  { return a; }
    Example() : a(0) {};
    Example(const Example& e) : a(e.GetA()) {};
    ~Example() {};

    string GetString() { return "a = " + to_string(a) + "\n"; }
};

Example check(Example e) {
    cout << e.GetString();
    return e;
}

int main() {

    Example e = Example();
    Example b{ e };
    Example d{ Example() };
    Example c = check(e);
    cout << c.GetString();

}