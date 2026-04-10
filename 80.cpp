#include <iostream>
using namespace std;

int main() {

    string str;

    cout << "Enter a string: ";
    cin >> str;

    int count = 0;

    for(int i = 0; str[i] != '\0'; i++) {
        count++;
    }

    cout << "Length = " << count;

    return 0;
}
