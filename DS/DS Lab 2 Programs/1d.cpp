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
    int n1 = strlen(s1);
    int n2 = strlen(s2);
    for(int i=1; i<=n1-pos;i++) {
        s1[n1+n2-i] = s1[n1-i];
    }
    for(int j=0; j<n2; j++) {
        s1[pos+j] = s2[j];
    }
    cout << s1;
}
