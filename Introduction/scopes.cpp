#include <iostream>

using namespace std;

int main() {
    int a = 123;
    int b = 456;
    
    cout << "a is " << a << endl;
    cout << "b is " << b << endl;

    // Creating a new "nested" scope within our main function
    {
        cout << "Within the nested scope" << endl;
        
        // Here, we are "shadowing" the variable named 'a'.
        // Within the nested scope, we have a new 'a', which temporarily hides the outer 'a'.
        // This is allowed, but it can lead to confusion and is generally considered poor practice.
        int a = 43;  // Shadowing the outer 'a'
        
        // The variable 'c' is created locally within this scope.
        int c = 789;
        
        cout << "a is " << a << endl;    // Refers to the 'a' in the nested scope
        cout << "b is " << b << endl;    // Accesses the outer 'b'
        cout << "c is " << c << endl;    // Refers to the 'c' in the nested scope
        cout << "Leaving the nested scope" << endl;
    }

    cout << "a is " << a << endl;    // Refers to the outer 'a'
    cout << "b is " << b << endl;    // Accesses the outer 'b'

    // This will cause an error!
    // Introduction/scopes.cpp:27:24: error: 'c' was not declared in this scope
    // 36 |     cout << "c is " << c << endl;
    // cout << "c is " << c << endl;
    // This is because 'c' was only local to the nested scope; the outer scope cannot access it.

    return 0;
}
