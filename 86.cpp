#include <iostream>
using namespace std;

int main() {

    string str1, str2;
    int pos;

    cout << "Enter main string: ";
    cin >> str1;

    cout << "Enter string to insert: ";
    cin >> str2;

    cout << "Enter position: ";
    cin >> pos;

    str1.insert(pos, str2);

    cout << "Result: " << str1;

    return 0;
}
