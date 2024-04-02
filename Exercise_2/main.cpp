#include "ComplexNumber.hpp"
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    ComplexNumber x1(1, 2); //creo il num compl 1 + 2i
    ComplexNumber x2(1, -2); //creo il num compl 1 -2i

    cout << "The first complex number is: " << x1 << endl;
    cout << "The second complex number is: " << x2 << endl;

    //uso l'operatore +
    ComplexNumber sum = x1 + x2;
    cout << "sum: " << sum << endl;

    //uso l'operatore ==
    if (x1 == x2)
    {
        cout << "x1 is equal to x2" << endl;
    }
    else
    {
        cout << "x1 is not equal to x2" << endl;
    }

    //calcolo il coniugato di x1
    ComplexNumber conjugate_x1 = x1.conjugate();
    cout << "Conjugate of x1: " << conjugate_x1 << endl;


    return 0;
}



