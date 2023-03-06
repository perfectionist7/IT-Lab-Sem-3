#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
    int ans=0;
 cout<<"Enter the No of container"<<" ";
 int n;
 cin>>n;
 vector<int>a;
 for(int i=0;i<n;i++)
 {
     cout<<"Enter the containter with weight"<<endl;
    int b;
    cin>>b;
    a.emplace_back(b);
 }
sort(a.begin(),a.end());
cout<<"Enter the Total weight of the containter you can take"<<endl;
int total;
cin>>total;
for(int i=0;i<n;i++)
{
    if(total<0)
    {
     break;
    }
    else{
        total=total-a[i];
        if(total>0)
        {
        ans++;
        }
    }
}
cout<<"total no of containter"<<ans<<endl;
}
