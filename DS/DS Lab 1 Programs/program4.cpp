#include<iostream>
using namespace std;
int main ()
{
   int temp,pass=0,m;
   cout << "Enter the size of the list ";
   cin >> m;
   int a[m];
   cout << "Enter the elements of the list ";
   for(int i=0; i<m;i++) {
    cin >> a[i];
   }
cout<<endl;
for(int i = 0; i<m; i++) {
   for(int j = i+1; j<m; j++)
   {
      if(a[j] < a[i]) {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
pass++;
}
cout <<"Sorted Element List is ";
for(int i = 0; i<m; i++) {
   cout <<a[i];
}

return 0;
}

