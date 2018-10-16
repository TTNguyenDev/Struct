#include <iostream>
#include <vector>
using namespace std;

struct student {
    string fullName;
    string ID;
};

void inputStudent(vector<student> &stu, int n) {
    for (int i = 0; i < n; i++) {
        student temp;
        cout << "Enter your name: ";
        getline(cin, temp.fullName);
        cout << "Enter your ID: ";
        getline(cin, temp.ID);
        
        stu.push_back(temp);
    }
}

string sequentialSearchStudent(vector<student> &stu, string x) {
    for (int i = 0; i < stu.size(); i++)
        if (stu[i].ID == x)
            return stu[i].fullName;
    return "-1";
}

string binarySearchStudent(vector<student> &stu, string x) {
    int l = 0;
    int r = stu.size() - 1;
    while (l <= r) {
        int m = (l+r)/2;
        
        if (stu[m].ID == x)
            return stu[m].fullName;
        if (stu[m].ID< x)
            l = m + 1;
        else
            r = m - 1;
    }
    return "-1";
}

void printStudent(vector<student> &stu) {
    for (int i = 0; i < stu.size(); i++) {
        cout << "Name  : " << stu[i].fullName << endl;
        cout << "ID    : " << stu[i].ID << endl;
    }
}

int main() {
    int n;
    cout << "Enter number of student: ";
    cin >> n;
    cin.ignore();
    vector<student> stu;
    inputStudent(stu, n);
    printStudent(stu);
    cout << sequentialSearchStudent(stu, "1753113");
    cout << binarySearchStudent(stu, "1753113");
    
}
