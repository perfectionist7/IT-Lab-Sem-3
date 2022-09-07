#include <iostream>
#include <cmath>
using namespace std;
int main(){
int n,m,flag=0;
cout << "Enter no of rows: ";
cin >> n;
cout << "Enter no of columns:";
cin >> m;
int M=(int)(n*((pow(n,2)+1)/2));
int arr[n][m];

int rowsum=0,columnsum=0;
int s1=0,s2=0;

cout << "Enter elements: " << endl;
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
    cin >> arr[i][j];

}
}



for(int i=0;i<n;i++){
rowsum=0;
columnsum=0;

for(int j=0;j<m;j++){
rowsum+=arr[i][j];

columnsum+=arr[j][i];

if(i==j){
    s1+=arr[i][j];
}
if(j==n-i-1){
s2+=arr[i][n-i-1];
}
}
if(M!=rowsum||M!=columnsum)
{
flag=1;
break;
}
}
if(M!=s1||M!=s2){
flag=1;
}
if(flag==1){
    cout << "The matrix is not a magic matrix" << endl;

}
else 
  cout << "The matrix is a magic matrix" << endl;




}
