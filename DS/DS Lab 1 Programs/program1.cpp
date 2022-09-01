#include<iostream>
using namespace std;
int main ()
{
   int temp,n;
   cout << "Enter the size of the list ";
   cin >> n;
   int a[n];
   cout <<"Enter the list";
   for(int i=0; i<n;i++) {
    cin >> a[i];
   }
cout<<endl;
for(int i = 0; i<n; i++) {
   for(int j = i+1; j<n; j++)
   {
      if(a[j] < a[i]) {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
}
cout <<"Sorted Element List is \n";
for(int i = 0; i<n; i++) {
   cout <<a[i]<<"\t";
   }
return 0;
}

