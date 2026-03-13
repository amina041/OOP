#include <iostream>
using namespace std;

int main() {
    long long num;
    cout << "Enter an integer: ";
    cin >> num;

    long long original = num;
    long long reversed = 0;
    long long temp = (num < 0) ? -num : num;

    while (temp > 0) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }

    if (num < 0) {
        reversed = -reversed;
    }

    if (reversed == original)
        cout << original << " is a palindrome number.";
    else
        cout << original << " is not a palindrome number.";

    return 0;
}