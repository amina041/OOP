#include <iostream>
using namespace std;

struct Student {
    int id;
    string name;
};

int main() {

    Student s[100];
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> s[i].id >> s[i].name;
    }

    // Sorting by name
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(s[i].name > s[j].name) {
                Student temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    cout << "Sorted by Name:\n";
    for(int i = 0; i < n; i++) {
        cout << s[i].id << " " << s[i].name << endl;
    }

    return 0;
}
