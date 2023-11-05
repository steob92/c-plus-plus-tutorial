#include <iostream>
#include <vector>

using namespace std;

int main() {

    // Define an array of 6 integers
    int my_array[6] = {1, 2, 3, 4, 5, 6};

    cout << "The 3rd entry in the array is: " << my_array[2] << endl;

    // Let's see what happens when we go out of bounds on our array
    // This may result in undefined behavior or accessing memory that doesn't belong to the array.
    cout << "The 7th entry in the array is: " << my_array[6] << endl;

    // Read in a value and use that value to set the size of the array
    int my_array_size;

    cout << "What is the size of the array: ";
    cin >> my_array_size;

    // Dynamically allocate an array
    // int *my_custom_array = new int[my_array_size];

    // Better to allocate an array using std::vector
    // std::vector is a safer and more flexible alternative to dynamic arrays.
    vector<int> my_custom_vector(my_array_size);

    for (int i = 0; i < my_array_size; i++) {
        my_custom_vector[i] = i * i;
        cout << i << " " << my_custom_vector[i] << endl;
    }

    cout << "The 3rd entry in the vector is: " << my_custom_vector[2] << endl;

    // Attempting to access an element in the vector beyond its size will not cause undefined behavior.

    // If we create something with "new," then we must delete it too!
    // Arrays are deleted with the delete [] array
    // Standard pointers can be deleted with just delete value
    // Accessing my_custom_array after deletion is undefined behavior.

    // Use std::vector to avoid manual memory management and potential issues.
    
    // We can also dynamically expand vectors
    vector<int> my_empty_vector;

    for (int i = 0; i < my_array_size; i++) {
        my_empty_vector.push_back(i * i);
        cout << i << " " << my_empty_vector[i] << endl;
    }

    cout << "The 3rd entry in the vector is: " << my_empty_vector[2] << endl;

    // With vectors we can also resize as is needed
    cout << "The size of our vector is: " << my_empty_vector.size() << endl;
    my_empty_vector.resize(100);
    cout << "The size of our vector is: " << my_empty_vector.size() << endl;
    my_empty_vector.resize(1);
    cout << "The size of our vector is: " << my_empty_vector.size() << endl;
    

    // Accessing an element beyond the size of the vector will not cause undefined behavior.

    // We can make multi-dimensional vectors too
    // This creates a 10x10 vector of integers with the default value 42
    vector<vector<int>> multi_dim_vector(10, vector<int>(10, 42));

    cout << "Size of vector: " << multi_dim_vector.size() << endl;
    cout << "Size of vector [" << multi_dim_vector.size() - 1 << "]: " << multi_dim_vector[multi_dim_vector.size() - 1].size() << endl;
    cout << "Value at [" << multi_dim_vector.size() - 1 << "][" << multi_dim_vector[multi_dim_vector.size() - 1].size() - 1 << "]: "
         << multi_dim_vector[multi_dim_vector.size() - 1][multi_dim_vector[multi_dim_vector.size() - 1].size() - 1] << endl;

    return 0;
}
