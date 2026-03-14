#include <iostream>
using namespace std;

int main() {

    int arr[100], n, count;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {

        count = 1;

        if(arr[i] == -1)
            continue;

        for(int j = i + 1; j < n; j++) {

            if(arr[i] == arr[j]) {
                count++;
                arr[j] = -1;
            }
        }

        cout << arr[i] << " occurs " << count << " times" << endl;
    }

    return 0;
}
