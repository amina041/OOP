#include <iostream>
using namespace std;

int main() {

    int num, original, remainder, result;

    cout << "Armstrong numbers between 1 and 1000 are:" << endl;

    for(num = 1; num <= 1000; num++) {

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
