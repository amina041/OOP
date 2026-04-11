#include <iostream>
#include <sstream>
using namespace std;

int main() {

    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);

    stringstream ss(str);
    string word;

    while(ss >> word) {
        cout << word << endl;
    }

    return 0;
}
