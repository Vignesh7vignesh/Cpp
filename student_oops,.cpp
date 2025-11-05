// 1.Declaring objects
// Problem: Create a class student with roll number and name. 
//Declare two objects and display their values using a member function.
#include<iostream>
#include<cstring>
using namespace std;
class Student {
private:
    int roll_no;
    char name[100];
public:
    Student(int roll, char str[]) {
        roll_no = roll;
        strcpy(name, str);
    }
    void show() {
        cout << "Roll no: " << roll_no << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    int n;
    char str[100];
    cout << "Enter roll number: ";
    cin >> n;
    cout << "Enter name: ";
    cin >> str;
    Student s1(n, str);
    s1.show();           
    return 0;
}
