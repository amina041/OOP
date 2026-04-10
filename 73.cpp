#include <iostream>
using namespace std;

int main() {

    int arr[10][10], r, c;

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    cout << "Enter elements:\n";
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> arr[i][j];

    // Sorting each row
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c-1; j++) {
            for(int k = 0; k < c-j-1; k++) {
                if(arr[i][k] > arr[i][k+1]) {
                    int temp = arr[i][k];
                    arr[i][k] = arr[i][k+1];
                    arr[i][k+1] = temp;
                }
            }
        }
    }

    cout << "Sorted 2D array:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    return 0;
}
