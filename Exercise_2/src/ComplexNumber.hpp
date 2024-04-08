#include <iostream>
#include <cmath>

using namespace std;

namespace ComplexLibrary{

struct ComplexNumber
{
    double real;
    double immaginary;

    ComplexNumber() = default; // Default constructor.

    ComplexNumber(double a, double b) // constructor
    {
        real = a;
        immaginary = b;

    }

};

ostream& operator<<(ostream& os, const ComplexNumber& c)
{
    if(c.immaginary > 0 && c.immaginary != 1){
        os << c.real << "+" << c.immaginary << "i";
    }
    else if(c.immaginary == 1){
        os << c.real << "+i";
    }
    else if(c.immaginary == 0){
        os << c.real;
    }
    else if(c.immaginary == -1){
        os << c.real << "-i";
    }
    else{
        os << c.real << c.immaginary << "i";
    }

    return os;
}

ComplexNumber operator+(const ComplexNumber& c1, const ComplexNumber& c2)
{
    double real = c1.real + c2.real;
    double imm = c1.immaginary + c2.immaginary;
    ComplexNumber c(real, imm);
    return c;
}

bool operator==(const ComplexNumber& c1, const ComplexNumber& c2)
{
    double tol = 2.2e-12;
    double diff_r = abs(c1.real-c2.real);
    double diff_i = abs(c1.immaginary - c2.immaginary);
    if(diff_r < tol && diff_i < tol)
        return true;
    else
        return false;
}

ComplexNumber conjugate(ComplexNumber& c)
{
    c.immaginary = -c.immaginary;
    return c;
}
}
