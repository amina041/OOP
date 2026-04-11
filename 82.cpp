#include <iostream>
using namespace std;

int main() {

    string str;
    bool alphabet[26] = {false};

    cout << "Enter a sentence: ";
    getline(cin, str);

    for(char ch : str) {
        if(isalpha(ch)) {
            ch = tolower(ch);
            alphabet[ch - 'a'] = true;
        }
    }

    for(int i = 0; i < 26; i++) {
        if(!alphabet[i]) {
            cout << "Not a Pangram";
            return 0;
        }
    }

    cout << "Pangram";

    return 0;
}
