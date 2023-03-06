#include<iostream>
using namespace std;
int knapsack(int w,int wt[],int val[],int n)
{

if(n==0 || w==0)
{
    return 0;
}
if(wt[n-1]>w)
{
    return knapsack(w,wt,val,n);
}
else{
    return max(val[n-1]+knapsack(w-wt[n-1],wt,val,n-1),knapsack(w,wt,val,n-1));
}
}
int main()
{
      int profit[]={100,50,10,30};
      int weight[]={10,20,30,40};
      int w=90;
      int n = sizeof(profit) / sizeof(profit[0]);
      cout<<knapsack(w,weight,profit,n)<<" ";
}
