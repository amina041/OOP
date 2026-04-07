#include <iostream>
using namespace std;

int main() {

    int n, total = 0;

    cout << "Enter number of rows: ";
    cin >> n;

    total = n * (n + 1) / 2;

    for(int i = n; i >= 1; i--) {

        for(int j = 1; j <= i; j++) {
            cout << total << " ";
            total--;
        }

        cout << endl;
    }

    return 0;
}
