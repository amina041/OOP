#include <iostream>
using namespace std;

int main() {
    double kelvin;
    cout << "Enter temperature in Kelvin: ";
    cin >> kelvin;

    double celsius = kelvin - 273.15;
    cout << "Temperature in Celsius: " << celsius;
    return 0;
}