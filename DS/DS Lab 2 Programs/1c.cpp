#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    char s1[100],s2[100];
    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;
    int k = 0;
    for(int i=0; s1[i]!='\0';i++) {
        if(s1[i] > s2[i]) {
            cout << "The first string is greater";
            k++;
            break;
        }
        else if(s1[i] < s2[i]) {
            cout << "The second string is greater";
            k++;
            break;
        }
    }
    if(k==0) {
        cout << "Both of the strings are equal";
    }
}