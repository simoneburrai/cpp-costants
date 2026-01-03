// Definire una costante di tipo long long int e stamparne il valore.

#include <iostream>

using namespace std;

int main(){

    const long long int MY_BIG_NUMBER = 4'893'279'578'947'953'792LL;

    cout << "My big number is " << MY_BIG_NUMBER << endl;
    cout << "Byte dimension: " << sizeof(MY_BIG_NUMBER) << " byte" << endl;

    return 0;
}