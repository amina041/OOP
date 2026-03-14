#include <iostream>
using namespace std;

int main() {

    int num, original, remainder, sum = 0, fact;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while(num != 0) {

        remainder = num % 10;
        fact = 1;

        for(int i = 1; i <= remainder; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        num = num / 10;
    }

    if(sum == original)
        cout << "Strong Number";
    else
        cout << "Not a Strong Number";

    return 0;
}
