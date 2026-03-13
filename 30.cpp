#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num <= 1) {
        cout << num << " is not a prime number.";
        return 0;
    }

    long long limit = static_cast<long long>(sqrt((double)num));
    bool isPrime = true;

    for (long long i = 2; i <= limit; ++i) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << num << " is a prime number.";
    else
        cout << num << " is not a prime number.";

    return 0;
}