#include <iostream>

using namespace std;

int main(){

    int a = 42;
    int b = a;
    int *a_pointer = &a;

    // Access the value of the pointer
    cout << "The Value of a is: " << a << " or by pointer " << *a_pointer << endl;
    cout << "The address of a is: " << &a << " or by pointer " << a_pointer << endl;
    cout << "The Value of b is: " << b << " and its address is " << &b << endl;

    return 0;
}