#include <iostream>
using namespace std;

struct Complex {
    int real, imag;
};

Complex add(Complex c1, Complex c2) {

    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;

    return result;
}

int main() {

    Complex c1, c2, sum;

    cout << "Enter first complex number (real imag): ";
    cin >> c1.real >> c1.imag;

    cout << "Enter second complex number (real imag): ";
    cin >> c2.real >> c2.imag;

    sum = add(c1, c2);

    cout << "Sum = " << sum.real << " + " << sum.imag << "i";

    return 0;
}
