// Definire una costante boolean e utilizzarla in un'operazione logica.

#include <iostream>

int main() {

    const bool IS_ADULT = false;

    if(IS_ADULT){
        std::cout << "You can buy alcohol";
    }else {
        std::cout << "I'm sorry, you can not buy alcohol if you're not at least 18 years old";
    }

    return 0;
}