#include <iostream>
#include <cstdlib>  // Include the standard library for generating random numbers
#include <ctime>    // Include the time library for seeding random number generation

using namespace std;

int main() {
    cout << "Generating a random Number... " << endl;

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number between 1 and 10
    int random_int = rand() % 10 + 1;

    // Gather the user's guess
    int guess;
    // Use cin to gather the user's input

    // Check if the guess is correct or not
    // Write if/else if/else statements to check if the guess is correct, too high or too low
    
        cout << "Correct!" << endl;
        cout << "Too Low! The number was " << random_int << endl;
        cout << "Too High! The number was " << random_int << endl;
    
    // Example of a for loop
    // Count from 0 -9
    cout << "Counting... " << endl;
        cout << i << " ";

        // Skip when i == 3
            // When we're not at i ==3 count backwards form i to 0
            // Counting backward
                // Skip when we're on 7
                // Use continue to skip to the end of the current iteration
                cout << j << " ";
            }
        }
        cout << endl;
    }

    // Example of a while loop
    // Write a while loop to loop over a count from 0 - 9
    cout << "While counter" << endl;
        counter += 1;
        cout << "..." << counter << endl;

    // Example of a do-while loop
    // Do the same with a do-while loop
    counter = 0;
    cout << "Do while counter" << endl;

        cout << "count: " << counter << endl;
        counter += 1;



    // Create an infinite loop with a break statement
    // Write an inifite loop that will add 2 to our counter and exit when we go above 20
    // Use a break statement
    counter = 0;
    cout << "Count up" << endl;
    while (true) {
        counter += 2;
        cout << "..." << counter << endl;

        // Break out of the loop if counter exceeds 20

        // Use break to exit the inner while loop, but not the outer loop
        int x = 0;
        // Start counting up in x by 1. Break this whole loop when x goes above 3
        while (true) {
            cout << "->" << x;
            x++;

            // Break out of the inner while loop when x exceeds 3

        }

        cout << "Back in the parent loop" << endl;
    }

    return 0;
}
