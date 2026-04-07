#include <iostream>
using namespace std;

int main() {

    int arr[100], n;
    float sum = 0, avg;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    avg = sum / n;

    cout << "Average = " << avg;

    return 0;
}
