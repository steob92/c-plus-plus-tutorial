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
    cout << "Guess the number: ";
    cin >> guess;

    // Check if the guess is correct or not
    if (guess == random_int) {
        cout << "Correct!" << endl;
    } else if (guess < random_int) {
        cout << "Too Low! The number was " << random_int << endl;
    } else {
        cout << "Too High! The number was " << random_int << endl;
    }

    // Example of a for loop
    cout << "Counting... " << endl;
    for (int i = 0; i < 10; i++) {
        cout << i << " ";

        // Skip when i == 3
        if (i != 3) {
            // Counting backward
            for (int j = i - 1; j >= 0; j--) {
                // Use continue to skip to the end of the current iteration
                if (j == 7) {
                    continue;
                }
                cout << j << " ";
            }
        }
        cout << endl;
    }

    // Example of a while loop
    int counter = 0;
    cout << "While counter" << endl;
    while (counter < 10) {
        counter += 1;
        cout << "..." << counter << endl;
    }

    // Example of a do-while loop
    counter = 0;
    cout << "Do while counter" << endl;

    do {
        cout << "count: " << counter << endl;
        counter += 1;
    } while (counter < 10);

    // Create an infinite loop with a break statement
    counter = 0;
    cout << "Count up" << endl;
    while (true) {
        counter += 2;
        cout << "..." << counter << endl;

        // Break out of the loop if counter exceeds 20
        if (counter > 20) {
            break;
        }

        // Use break to exit the inner while loop, but not the outer loop
        int x = 0;
        while (true) {
            cout << "->" << x;
            x++;

            // Break out of the inner while loop when x exceeds 3
            if (x > 3) {
                cout << endl;
                break;
            }
        }

        cout << "Back in the parent loop" << endl;
    }

    return 0;
}
