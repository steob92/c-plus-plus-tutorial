#include <iostream>

using namespace std;

int main(){


    int values[] = {0,1,2,3,4,5};
    for (int i: values){
        cout << i << endl;
    }


    int i = 0;
    while (true){

        // Check if i is even
        if ( i %2 == 0){
            cout << i << " is even!" << endl;
        }
        else {
            cout << i << " is odd!" << endl;
        }

        i++;

        if (i > 10 ){
            break;
        }
        else if (i == 3){
            continue;
        }
        else {
            cout << "Back to the start!"  << endl;
        }
    }

    return 0;


}