#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

// pass argc and argv to int main
int main() {
    // Print the number of command-line arguments
    cout << "Number of arguments: " << argc << endl;

    // Print all the command-line arguments
        cout << "Argument " << i << ": " <<  << endl;

    // Ensure we have at least one argument (the filename)
        cout << "No filename provided." << endl;
        return 0;
    
    // Assign the first item pass to the string filename
    string filename = ;

    // Print the provided filename
    cout << "Filename: " << filename << endl;

    // Open a file for reading using fstream
    fstream in_file;
    string line;

    // Create a 2D vector to store the data
    vector<vector<string>> my_table;

    if (in_file) {
        // use getline to read in the line
        while () {
            cout << line << endl;

            // Use stringstream to further break the line up

            vector<string> row;
            string line_element;
            // Use getline to break up the stringstream at ","
            while () {
                cout << line_element << " ";
                row.push_back(line_element);
            }

            my_table.push_back(row);
            cout << endl;
        }

        in_file.close();
    }

    // Process and store numerical data
    cout << "Reading table... " << endl;

    vector<vector<int>> numerical_data(my_table.size(), vector<int>(1, -999));

    for (int i = 0; i < my_table.size(); i++) {
        // Print the first and last element
        cout <<  << " " <<  << endl;

        // Skip if we have an empty value
            continue;
        // Add the last element to our vector
        numerical_data[i][0] = ;
    }

    // Print the processed numerical data
    cout << "Printing table: " << endl;
    for (int i = 0; i < numerical_data.size(); i++) {
        cout << numerical_data[i][0] << " ";
        cout << endl;
    }

    // Output the numerical data to a file
    fstream out_file;
    string out_filename = "out.txt";
    // Open a file for writing out
    if (out_file) {
        for (int i = 0; i < numerical_data.size(); i++) {
            // Write to the file

        }
        out_file.close();
    }

    return 0;
}
