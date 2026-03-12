#include <iostream>
using namespace std;

int main() {

    int start, end, num, original, remainder, result;

    cout << "Enter start and end numbers: ";
    cin >> start >> end;

    for(num = start; num <= end; num++) {

        original = num;
        result = 0;

        while(original != 0) {
            remainder = original % 10;
            result = result + remainder * remainder * remainder;
            original = original / 10;
        }

        if(result == num)
            cout << num << " ";
    }

    return 0;
}
