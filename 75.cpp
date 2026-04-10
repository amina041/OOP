#include <iostream>
using namespace std;

int main() {

    string a, b, result = "";
    int carry = 0;

    cout << "Enter first binary: ";
    cin >> a;

    cout << "Enter second binary: ";
    cin >> b;

    int i = a.length() - 1;
    int j = b.length() - 1;

    while(i >= 0 || j >= 0 || carry) {

        int sum = carry;

        if(i >= 0) sum += a[i--] - '0';
        if(j >= 0) sum += b[j--] - '0';

        result = char(sum % 2 + '0') + result;
        carry = sum / 2;
    }

    cout << "Sum = " << result;

    return 0;
}
