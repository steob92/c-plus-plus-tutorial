// We'll use iostream for printing
#include <iostream>
// We'll use fstream for reading in files
#include <fstream>
// We'll use vectors for storing data
#include <vector>
// We'll use algorithm for sorting
#include <algorithm>
// We'll use string and sstream to parse the line
#include <string>

// We'll mosting be using std c++ so we'll same some keys
using namespace std;

// Let's create a usage function
// It will just print out how to use this program
// Since it's not returning it will be a "void"
void print_usage(){
    cout <<"day1 <intput> [debug]" << "\n\t <input> - input text file \n\t [debug] - optional 1 for extra debug info, 0 (default) for standard output\n";
}

/*
The Problem:

The jungle must be too overgrown and difficult to navigate in vehicles or access from the air; the Elves' expedition traditionally goes on foot. 
As your boats approach land, the Elves begin taking inventory of their supplies. 
One important consideration is food - in particular, the number of Calories each Elf is carrying (your puzzle input).

The Elves take turns writing down the number of Calories contained by the various meals, snacks, rations, etc. that they've brought with them, one item per line. 
Each Elf separates their own inventory from the previous Elf's inventory (if any) by a blank line.
*/

// Read in the data
vector <vector<int>> read_data(char *filename, bool debug = false){
    

    // We'll return this 2D vector
    vector <vector<int>> backpack;
    
    return backpack;
}


// We want to find the sum in each of the vector
vector <int> get_sums(vector< vector<int> > input, bool debug = false){
    vector <int> sums;


    }
    return sums;
}

// Create a fuction to compare two ints
bool is_larger(int i, int j) {
}

bool is_smaller(int i, int j) {
}


// We'll be reading in from the command line
int main(int argc, char *argv[]){

    // Check if we have enough arguments
    if (argc < 2){
        print_usage();
        // Since we don't have a success execution
        // We should output a non-zero exit code
        return -1;
    }

    // Bool to handle debugging
    bool debug = false;
    if (argc > 2) {
        debug = (bool)atoi(argv[2]);
    }

    char *filename = argv[1];
    // Extract the data from a file
    vector < vector<int> > elf_data = read_data(filename, debug);
    // Get the sum of each vector
    vector <int> summed_data = get_sums(elf_data, debug);

    // Use algorthim to sort the vector
    // Get the maximum value
    sort(summed_data.begin(), summed_data.end(), is_larger);
    cout << "Answer: " << summed_data[0] << endl;

    

    /* 
    Part two:
    By the time you calculate the answer to the Elves' question, they've already realized that the Elf carrying the most Calories of food might eventually run out of snacks.

    To avoid this unacceptable situation, the Elves would instead like to know the total Calories carried by the top three Elves carrying the most Calories. 
    That way, even if one of those Elves runs out of snacks, they still have two backups.
    */

    // So we need to calcualte the sum of the top 3
    int top_n = 3;
    int total_sum = 0;
    // Add the top 3 together
    for (int i = 0; i < top_n; i++){
    }
    cout << "Answer 2: " << total_sum << endl;

    return 0;

    
}
