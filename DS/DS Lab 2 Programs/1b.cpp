#include <iostream>
using namespace std;
int main(){
    char s1[100];
    cout<<"Enter the first string: ";
    cin>>s1;
    char s2[50];
    cout<<"Enter the second string: ";
    cin>>s2;
    int m;
    for(m=0;s1[m]!='\0';m++);
    int n;
    for(n=0;s2[n]!='\0';n++){
        s1[n+m]=s2[n];
    }
    cout<<s1;
}