#include <iostream>
using namespace std;

int main() {
    double celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    double kelvin = celsius + 273.15;
    cout << "Temperature in Kelvin: " << kelvin;
    return 0;
}