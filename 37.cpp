#include <iostream>
using namespace std;

int main() {

    int num, square, sum = 0, remainder;

    cout << "Enter a number: ";
    cin >> num;

    square = num * num;

    while(square != 0) {
        remainder = square % 10;
        sum = sum + remainder;
        square = square / 10;
    }

    if(sum == num)
        cout << "Neon Number";
    else
        cout << "Not a Neon Number";

    return 0;
}
