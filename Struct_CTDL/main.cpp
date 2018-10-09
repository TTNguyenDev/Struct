#include <iostream>

using namespace std;

struct student {
    string fullName;
    string ID;
    int credit;
};

void inputStudent(student &A) {
    cout << "Enter your name: ";
    getline(cin, A.fullName);
    cout << "Enter your ID: ";
    getline(cin, A.ID);
    cout << "Enter your credit that you studied: ";
    cin >> A.credit;
}

void printStudent(student A) {
    cout << "Name  : " << A.fullName << endl;
    cout << "ID    : " << A.ID << endl;
    cout << "Credit: " << A.credit << endl;
}

int main() {
    student a;
    inputStudent(a);
    printStudent(a);
}
