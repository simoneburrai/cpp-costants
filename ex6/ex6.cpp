// Utilizzare una costante in una condizione if.

#include <iostream>

using std::string;

int main() {

    const string MY_NAME = "Simone";

    string your_guess;

    std::cout << "Guess my name:";
    std::cin >> your_guess;

    if(MY_NAME != your_guess){
        std::cout << "I'm sorry, you didn't guess it" << std::endl;
        if(your_guess == "simone"){
            std::cout << "(HINT): the name was right, but the first letter is a capital letter";
        }
    }else {
        std::cout << "Good job, you guessed the name";
    }


    return 0;
}