#include <iostream>
using namespace std;

int main() {

    int start, end, i, j, isPrime;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    for(i = start; i <= end; i++) {

        isPrime = 1;

        for(j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if(isPrime == 1 && i > 1)
            cout << i << " ";
    }

    return 0;
}
