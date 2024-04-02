//qui, cioè nel file header, dichiaro le funzioni

#ifndef COMPLEXNUMBER_HPP
#define COMPLEXNUMBER_HPP

#include <iostream>
#include <cmath>
using namespace std;


//creo la mia CLASSE
struct ComplexNumber
{
    double real;
    double imag;

    //creo il mio costruttore COSTRUTTORE
    ComplexNumber(double a, double b)
    {
        real = a;
        imag = b;
    }

    ComplexNumber conjugate();
};

//dichiaro i miei operatori
ostream& operator<<(ostream& os, const ComplexNumber& x);

ComplexNumber operator+(const ComplexNumber& x1, const ComplexNumber& x2);

bool operator==(const ComplexNumber& x1, const ComplexNumber& x2);

#endif


