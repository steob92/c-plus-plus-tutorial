#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    // Print the number of command-line arguments
    cout << "Number of arguments: " << argc << endl;

    // Print all the command-line arguments
    for (int i = 0; i < argc; i++) {
        cout << "Argument " << i << ": " << argv[i] << endl;
    }

    // Ensure we have at least one argument (the filename)
    if (argc < 2) {
        cout << "No filename provided." << endl;
        return 0;
    }

    string filename = argv[1];

    // Print the provided filename
    cout << "Filename: " << filename << endl;

    // Open a file for reading using fstream
    fstream in_file;
    string line;
    in_file.open(filename, ios::in);

    // Create a 2D vector to store the data
    vector<vector<string>> my_table;

    if (in_file) {
        while (getline(in_file, line)) {
            cout << line << endl;

            stringstream ss(line);

            vector<string> row;
            string line_element;

            while (getline(ss, line_element, ',')) {
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
        cout << my_table[i][0] << " " << my_table[i].back() << endl;

        if (my_table[i].back() == "") {
            continue;
        }

        numerical_data[i][0] = atoi(my_table[i].back().c_str());
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
    out_file.open(out_filename, ios::out);

    if (out_file) {
        for (int i = 0; i < numerical_data.size(); i++) {
            out_file << numerical_data[i][0] << " , ";
            out_file << endl;
        }
        out_file.close();
    }

    return 0;
}
