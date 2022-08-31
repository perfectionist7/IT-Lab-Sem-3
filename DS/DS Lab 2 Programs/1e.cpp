#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char s1[100], s2[100];
    cout<<"Enter the string: "<<endl;
    gets(s1);
    cout<<"Enter the sub string:"<<endl;
    gets(s2);
    int len1=strlen(s1),len2=strlen(s2);
    bool flag=false;
    int k=-1;


    // SEARCHING FOR THE SUBSTRING IN THE MAIN STRING
    for (int i=0; i<=len1-len2;i++){
        for (int j=i;j<i+len2;j++){
            flag=true;
            if(s1[j]!=s2[j-i]){
                flag=false;
                break;
            }
        }
        if(flag==true){
            k=i;
            break;
        }
    }
    //IF FOUND, DELETING THE SUBSTRING FROM THE MAIN STRING
    if (k==-1){
        cout<<"Substring not found! ";
    }
    else {
    for(int i=0;i<len1-k;i++){
        s1[k+i]=s1[k+len2+i];
    }
    cout << s1;
    }


}