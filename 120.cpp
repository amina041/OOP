#include <iostream>
using namespace std;

struct Student {
    int id, age;
    string name;
};

int main() {

    Student s[100];
    int n, choice;

    cout << "Enter number of students: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> s[i].id >> s[i].name >> s[i].age;
    }

    cout << "Sort by: 1. ID  2. Age : ";
    cin >> choice;

    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {

            if((choice == 1 && s[i].id > s[j].id) ||
               (choice == 2 && s[i].age > s[j].age)) {

                Student temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    cout << "Sorted Records:\n";
    for(int i = 0; i < n; i++) {
        cout << s[i].id << " " << s[i].name << " " << s[i].age << endl;
    }

    return 0;
}
