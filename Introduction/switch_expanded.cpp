#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <unistd.h>

enum Status {On, Off, Standby};

using namespace std;

Status get_status(){
    srand (time(NULL));
    int stat = rand() % 3 + 1;
    switch(stat){
        case 1:
            return Status::On;
        case 2:
            return Status::Off;
        default:
            return Status::Standby;
    }
}

void activate_device(){
    sleep(1);
}

int main(){

    
    activate_device();

    Status stat;
    while (stat != Status::Standby)
    {        
        stat = get_status();
        cout << "Status: " << stat << endl;
        switch (stat){
            case Status::On:
                cout << "Device is On" << endl;
                sleep(1);
                break;
            case Status::Off:
                cout << "Device is Off" << endl;
                sleep(1);
                break;
            case Status::Standby:
                cout << "Device is in Standby" << endl;
                break;
        }

    }
}