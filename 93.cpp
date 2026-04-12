#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float a, b, c, d, r1, r2;

    cout << "Enter coefficients: ";
    cin >> a >> b >> c;

    d = (b*b) - (4*a*c);

    if(d > 0) {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        cout << "Real Roots: " << r1 << " " << r2;
    }
    else if(d == 0) {
        r1 = r2 = -b / (2*a);
        cout << "Equal Roots: " << r1;
    }
    else {
        cout << "Complex Roots";
    }

    return 0;
}
