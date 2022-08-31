#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Student {
    private:
        int rollno;
        char grade[100];
        char name[100];
        public:
            void read(Student s[], int n) {
                for(int i=0; i<n;i++) {
                    cout << "Enter the rollno: ";
                    cin >> s[i].rollno;
                    cout << "Enter the grade: ";
                    cin >> s[i].grade;
                    cout << "Enter the name of the student: ";
                    cin >> s[i].name;
                }
            }
            void display(Student s[], int n) {
                for(int i=0; i<n;i++) {
                    cout << "Name: " << s[i].name << endl;
                    cout << "Grade: " << s[i].grade << endl;
                    cout << "Roll No: " << s[i].rollno << endl;
                }
            }
            void sort(Student s[], int n) {
                int arr[n];
                Student temp;
                for(int i=0; i<n;i++) {
                    for(int j=0; j<n;j++) {
                        if(s[j].rollno > s[j+1].rollno ) {
                            temp = s[j];
                            s[j] = s[i];
                            s[i] = temp;
                        }
                    }
                }
            }
};
int main() {
    int n;
    cout << "No of students: ";
    cin >> n;
    Student s[n], a;
    a.read(s,n);
    a.sort(s,n);
    a.display(s,n);
}
