#include <iostream>

using namespace std;

int main(){

    int i;

    for (i = 0; i < 10; i++ ){

        switch (i) {
            case 0:
                cout << "i = 0" << endl;
                break;
            case 1:
                // Iterate i by 1 ( i = 2 )
                i += 1;
                cout << "i was 1, now " << i << endl;
                break;
            case 2:
                cout <<"This shouldn't happend" << endl;
                break;
            default:
                cout << "i > 2 (i is " << i << ")" << endl;
                break;
        }
    }


    i = 0;
    while (true) {

        // Check if i is even using the % operator
        switch (i % 2) {
            case 0:
                cout << i << " is even!" << endl;
                break;
            case 1:
                cout << i << " is odd!" << endl;
                break;
        }

        i++;

        switch (i){
            case 0 ... 3:
                cout << i << " is between 0 and 3" << endl;
                break;
            case 4:
                cout << i << " is exactly 4" << endl;
                break;
            case 5 ... 7:
                cout << i << " is between 5 and 7" << endl;
                break;
            default:
                cout << i << " greter than 7" << endl;
                return 0;
                
        }
    }
    return 0;
}