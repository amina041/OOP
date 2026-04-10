#include <iostream>
using namespace std;

int main() {

    int arr1[100], arr2[100], n;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
        arr2[i] = arr1[i];
    }

    cout << "Copied array: ";
    for(int i = 0; i < n; i++)
        cout << arr2[i] << " ";

    return 0;
}
