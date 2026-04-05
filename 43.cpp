#include <iostream>
using namespace std;

int main() {

    int n, t1 = 0, t2 = 1, next, sum = 0;

    cout << "Enter number of terms: ";
    cin >> n;

    for(int i = 0; i < n; i++) {

        if(i % 2 == 0)
            sum = sum + t1;

        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }

    cout << "Sum = " << sum;

    return 0;
}
