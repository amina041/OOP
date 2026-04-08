#include <iostream>
using namespace std;

int main() {

    int a[50], b[50], n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;

    cout << "Enter elements: ";
    for(int i = 0; i < n1; i++)
        cin >> a[i];

    cout << "Enter size of second array: ";
    cin >> n2;

    cout << "Enter elements: ";
    for(int i = 0; i < n2; i++)
        cin >> b[i];

    cout << "Common elements: ";

    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            if(a[i] == b[j]) {
                cout << a[i] << " ";
                break;
            }
        }
    }

    return 0;
}
