#include <iostream>

using namespace std;

int main() {
    int a = 7;
    int b = 5;

    int& c = a; // c refers to variable a
    cout << c << endl;
    c = 10;
    cout << a << endl;

    cout << &a << endl; // print out memory address of variable a(0x5ffe8c)

    int* ptr_a =0;
    cout << ptr_a << endl;
}