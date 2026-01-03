// Utilizzare una costante in un loop for.

#include <iostream>

using namespace std;

int main (){

    const unsigned int WEEK_DAYS = 7;

    for(int i = 0; i < WEEK_DAYS; i++){

        if(i >= (WEEK_DAYS -2)){
            cout << "Welcome to the weekend\n";
        }else{
            cout << "Working days, wait for the weekend\n";
        }
    }
}