#include <iostream>
using namespace std;

int main() {

    int arr[100], n, key;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to remove: ";
    cin >> key;

    int j = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] != key) {
            arr[j++] = arr[i];
        }
    }

    cout << "Updated array: ";
    for(int i = 0; i < j; i++)
        cout << arr[i] << " ";

    return 0;
}
