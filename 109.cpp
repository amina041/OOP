#include <iostream>
using namespace std;

int main() {

    int arr[100], n, freq[1000] = {0};

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    for(int i = 0; i < 1000; i++) {
        if(freq[i] > 0)
            cout << i << " occurs " << freq[i] << " times\n";
    }

    return 0;
}
