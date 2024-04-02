//qui, cioè nel file source, definisco le funzioni

#include "ComplexNumber.hpp"


//funzione che calcola il coniugato di un num complesso
ComplexNumber ComplexNumber::conjugate()
{
    return ComplexNumber(real, -imag);
}


//funzione che printa il numero complesso nel formato richiesto
ostream& operator<<(ostream& os, const ComplexNumber& x)
{
    os << x.real;
    if (x.imag >= 0)
        os << " + " << x.imag << "i";
    else
        os << " - " << -x.imag << "i";
    return os;
}


//definisco l'operatore + che fa la somma tra due num complessi
ComplexNumber operator+(const ComplexNumber& x1, const ComplexNumber& x2)
{
    double re = x1.real + x2.real;
    double im = x1.imag + x2.imag;
    ComplexNumber x(re, im);
    return x;
}


//definisco l'operatore == che verifica l'ugualianza tra due num complessi
bool operator==(const ComplexNumber& x1, const ComplexNumber& x2)
{
    //definisco un esempio di tolleranza per i confronti
    const double tol = 1e-16;

    //ora confronto parte reale e immaginaria con la tolleranza
    return (abs(x1.real - x2.real) < tol) && (abs(x1.imag - x2.imag) < tol);
}


