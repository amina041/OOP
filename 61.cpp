#include <iostream>
using namespace std;

int main() {

    int arr[100], n, key, found = 0;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> key;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Found at position " << i;
            found = 1;
            break;
        }
    }

    if(found == 0)
        cout << "Not Found";

    return 0;
}
