#include "ComplexNumber.hpp"
#include <iostream>
#include <cmath>


using namespace std;
using namespace ComplexLibrary;

int main()
{

    ComplexNumber c1(1,20.5);
    cout << "Primo numero in forma complessa c1: " << c1 << endl;
    ComplexNumber c2(1,-2);
    cout << "Secondo numero in forma complessa c2: " << c2 <<endl;
    ComplexNumber sum = c1 + c2;
    cout << "La loro somma è: " << sum << endl;
    if (c1 == c2){
        cout << "I due numeri sono uguali" << endl;
    }
    else{
        cout << "I due numeri sono diversi" << endl;
    }
    ComplexNumber c3 = conjugate(c1);
    cout << "Il coniugato di c1 è: " << c3 << endl;
    return 0;
}
