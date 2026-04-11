#include <iostream>
using namespace std;

int main() {

    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    if(str1 < str2)
        cout << str1 << " comes before " << str2;
    else if(str1 > str2)
        cout << str1 << " comes after " << str2;
    else
        cout << "Both strings are equal";

    return 0;
}
