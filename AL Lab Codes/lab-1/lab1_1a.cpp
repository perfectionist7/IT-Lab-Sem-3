#include<iostream>
using namespace std ;
int c;
void BinarySearch(int arr[],int first,int last,int key)
{
   int  mid=(first+last)/2;
    c++;
      while(mid!=key && first<=last)
      {   c++;
          
          if(key<mid)
            {
               last=mid-1;
               c++;
            }

          else if(key>mid)
           {
             first=mid+1;
              c++;
           }
        
         mid=(first+last)/2;
         c++;

      }
      c++;

      if(mid==key)
      { c++;
        cout<<"key found";
      }
      else
      {
        c++;
       cout<<"not found";
      }
}
int main()
{
    int arr[100],n,key;
    cout<<"enter the size\n";
    cin>>n;
    cout<<"enter the array\n";
    for(int i=0;i<n;i++)
    {
      cin>>arr[i]  ;
    }
    cout<<"enter key\n";
    cin>>key;
    BinarySearch(arr,arr[0],arr[n-1],key);
     cout<<"\n Steps: "<<c;
    return 0;
}
