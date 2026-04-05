#include <iostream>
using namespace std;

int main() {

    string str;

    cout << "Enter a sentence: ";
    getline(cin, str);

    cout << "First letters: ";

    cout << str[0] << " ";

    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ' ')
            cout << str[i+1] << " ";
    }

    return 0;
}
