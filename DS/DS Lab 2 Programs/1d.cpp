#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    char s1[100], s2[100];
    int pos;
    cout << "Enter the first string: ";
    gets(s1);
    cout << "Enter the sub string: ";
    gets(s2);
    cout << "Enter the position of the string to be placed: ";
    cin >> pos;
    for(int i=1; i<=strlen(s1)-pos;i++) {
        s1[strlen(s1)+strlen(s2)-i] = s1[strlen(s1)-i];
    }
    for(int j=0; j<strlen(s2); j++) {
        s1[pos+j] = s2[j];
    }
    cout << s1;
}