#include <iostream>
using namespace std;

int main() {

    int num, original, remainder, result = 0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while(original != 0) {
        remainder = original % 10;
        result = result + remainder * remainder * remainder;
        original = original / 10;
    }

    if(result == num)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}
