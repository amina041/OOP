#include <iostream>
using namespace std;

int main() {

    int num, square;

    cout << "Enter a number: ";
    cin >> num;

    square = num * num;

    if(square % 100 == num)
        cout << "Automorphic Number";
    else
        cout << "Not an Automorphic Number";

    return 0;
}
