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
    ptr_a = &a; //
    cout << ptr_a << endl;

    int array[200] = {0,10,20,30,340,50,5};
    array[180] = 80;

    for (int i=0;i<200;i++) 
    {
        cout << "Value: " << array[i] << " at address: " << &array[i] << endl;
    }
}