#include <iostream>
using namespace std;

int main() {

    int arr[100], n;
    int largest, second;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    largest = second = arr[0];

    for(int i = 1; i < n; i++) {

        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    cout << "Second Largest Number = " << second;

    return 0;
}
