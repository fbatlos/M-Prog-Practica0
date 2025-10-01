#include "complejo2.h"
#include <iostream>
#include <string>

void complejo::setr(int new_r){real = new_r;}

void complejo::seti(int new_i){imaginario = new_i;}

std::string complejo::ver() {
    std::string z = "z = ";
    std::string resulta = " => " + std::to_string(real) + (imaginario >= 0 ? "+" : "") + std::to_string(imaginario) + "i";

    if (real == 0 && imaginario == 0) {
        return z + "0" + resulta;
    }

    if (real == 0) {
        return z + std::to_string(imaginario) + "i" + resulta;
    }

    if (imaginario == 0) {
        return z + std::to_string(real) + resulta;
    }

    return z + std::to_string(real) + (imaginario >= 0 ? "+" : "") + std::to_string(imaginario) + "i" + resulta;
}

void complejo::set(int new_r, int new_i){
    real = new_r;
    imaginario = new_i;

}

void complejo::set() {
    std::cout << "Introduce la parte real: ";
    std::cin >> real;
    std::cout << "Introduce la parte imaginaria: ";
    std::cin >> imaginario;
}

