#include <iostream>
using namespace std;

void subsets(int arr[], int n, int index, int result[], int rSize) {

    if(index == n) {
        for(int i = 0; i < rSize; i++)
            cout << result[i] << " ";
        cout << endl;
        return;
    }

    // include
    result[rSize] = arr[index];
    subsets(arr, n, index+1, result, rSize+1);

    // exclude
    subsets(arr, n, index+1, result, rSize);
}

int main() {

    int arr[] = {1, 2, 3};
    int result[100];

    subsets(arr, 3, 0, result, 0);

    return 0;
}
