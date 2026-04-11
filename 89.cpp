#include <iostream>
#include <sstream>
using namespace std;

int main() {

    string str, word, result = "";

    cout << "Enter a sentence: ";
    getline(cin, str);

    stringstream ss(str);

    while(ss >> word) {

        if(result.find(word) == string::npos) {
            result += word + " ";
        }
    }

    cout << "After removing duplicates: " << result;

    return 0;
}
