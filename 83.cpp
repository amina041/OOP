#include <iostream>
using namespace std;

int main() {

    string str;

    cout << "Enter a number: ";
    cin >> str;

    int i = 0;

    while(str[i] == '0')
        i++;

    cout << "Result: " << str.substr(i);

    return 0;
}
