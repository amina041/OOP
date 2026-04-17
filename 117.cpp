#include <iostream>
using namespace std;

struct Student {
    int id;
    string name;
    float marks;
};

int main() {

    Student s;

    cout << "Enter ID, Name, Marks: ";
    cin >> s.id >> s.name >> s.marks;

    cout << "\nStudent Details:\n";
    cout << "ID: " << s.id << endl;
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks;

    return 0;
}
