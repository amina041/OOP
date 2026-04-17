#include <iostream>
using namespace std;

int main() {

    int r, c;

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int **arr = new int*[r];

    for(int i = 0; i < r; i++)
        arr[i] = new int[c];

    cout << "Enter matrix:\n";
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> arr[i][j];

    cout << "Transpose:\n";
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++) {
            cout << *(*(arr + j) + i) << " ";
        }
        cout << endl;
    }

    return 0;
}
