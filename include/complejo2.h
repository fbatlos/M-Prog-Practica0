#ifndef COMPLEJO_H
#define COMPLEJO_H
#include <string>
#include <iostream>


class complejo
{
    public:
        complejo(int r, int i):real(r),imaginario(i){}

        int getr() const { return real; }
        int geti() const { return imaginario; }
        std::string ver();

        void setr(int new_r);
        void seti(int new_i);
        void set(int new_r, int new_i);
        void set();


        complejo operator+(const complejo& sumComplejo) const {
            return complejo(real + sumComplejo.getr(), imaginario + sumComplejo.geti());
        }

        complejo operator-(const complejo& restaComplejo) const {
            return complejo(real - restaComplejo.getr(), imaginario - restaComplejo.geti());
        }

        complejo operator-() const {
            return complejo(-real, -imaginario);
        }

        complejo operator+(int sumComplejo) {
            return complejo(real + sumComplejo, imaginario + sumComplejo);
        }

         friend complejo operator+(int val, const complejo& sumComplejo) {
            return complejo(sumComplejo.getr() + val, sumComplejo.geti());
        }

        friend std::ostream& operator<<(std::ostream& os, const complejo& c) {
            os << c.real << (c.imaginario >= 0 ? "+" : "") << c.imaginario << "i";
            return os;
        }

        friend std::istream& operator>>(std::istream& is, complejo& c) {
            int r, i;
            std::cout << "Parte real: ";
            is >> r;
            std::cout << "Parte imaginaria: ";
            is >> i;
            c.set(r, i);
            return is;
        }



    private:
        int real;
        int imaginario;



};

#endif // COMPLEJO_H
