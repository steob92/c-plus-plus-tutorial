#include <iostream>
#include <vector>

using namespace std;

float add_two_numbers(float a, float b){
    return a + b;
}



// Multiply two numbers together
int multiply_numbers(int a, int b){
    return a * b;
}

// In c++ we can "overload" functions
// This allows use to use common function names
// And define different behaviour based on the type of the argument passed
float multiply_numbers(float a, float b){
    return a * b;
}


bool add_two_numbers(bool a, bool b){
    // the "||" is the "or" symbol in c++
    return a || b;
}

// We can also rewrite this to take generic arguments
template <typename T>
T generic_add(T a, T b) {
    return a + b;
}


// We can also rewrite this to take generic arguments
template <typename T>
T generic_multiply(T a, T b) {
    return a * b;
}


// Functions don't need to have a return
// We denote a function that doesn't need to return anything as a void
void add_one(int a){
    cout << "value = " << a << endl;
    a += 1; 
    cout << "value = " << a << endl;
}

void add_one_reference (int &a){
    cout << "value = " << a << endl;
    a += 1; 
    cout << "value = " << a << endl;
}

int main(){
    float x = 2.5;
    float y = 3.7;
    float z = add_two_numbers(x, y);
    cout << x << " + " << y << " = " << z << endl;
    // We can also just pass numbers directly to functions
    cout << 1.7 << " + " << 1. << " = " << add_two_numbers((float)1.7, (float)1.) << endl;

    // C++ can "cast" one type to another
    // integers can easily be cast to a float without any loss of information
    
    int x_int = 1;
    int y_int = 2;
    cout << x_int << " + " << y_int << " = " << add_two_numbers((float)x_int, (float)y_int) << endl;
    cout << x_int << " x " << y_int << " = " << multiply_numbers(x_int, y_int) << endl;
    
    // However when we cast floats to ints we lose information
    cout << x << " x " << y << " = " << multiply_numbers(x, y) << endl;


    cout << "(" << x << " < " << y << ") + " << "(" << x << " != " << y << ") = " << add_two_numbers( (x < y), (x != y)) << endl;;
    cout << "(" << x << " < " << y << ") + " << "(" << x << " == " << y << ") = " << add_two_numbers( (x < y), (x == y)) << endl;;
    cout << "(" << x << " > " << y << ") + " << "(" << x << " == " << y << ") = " << add_two_numbers( (x > y), (x == y)) << endl;;


    cout << "Using Generics: " << endl;
    cout << x << " + " << y << " = " << generic_add(x, y) << endl;
    cout << x << " x " << y << " = " << generic_multiply(x, y) << endl;
    cout << x_int << " + " << y_int << " = " << generic_add(x_int, y_int) << endl;
    cout << x_int << " x " << y_int << " = " << generic_multiply(x_int, y_int) << endl;


    int a = 42;
    cout << "value before function = " << a << endl;
    add_one(a);
    cout << "value after function = " << a << endl;

    // What happens here? We've added a value but the value doesn't change
    cout << "value = " << a << endl;
    // By default we "pass a copy" of the value
    // What we want to do is pass the location of the value rather than the value.
    int value = 17;
    int copy_value = value;
    int &ref_to_val = value;
    cout << value << " " << copy_value << " " << ref_to_val << endl;
    // When we pass by reference, we can modify the data stored in the value
    // When we pass by copy, we don't see any changed to the original value
    value += 1;
    cout << value << " " << copy_value << " " << ref_to_val << endl;

    cout << "value before function = " << a << endl;
    add_one_reference(a);
    // What happens here? We've added a value but the value doesn't change
    cout << "value after function = " << a << endl;

    return 0;
}