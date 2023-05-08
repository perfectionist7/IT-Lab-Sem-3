#include <bits/stdc++.h>
using namespace std;

bool found(int ele,vector<int>arr,int n){
    for (int i = 0; i < n; i++)
        if(ele == arr[i])
            return true;
    return false;
}
void fifo(vector<int>process,int framesize){
    vector<int>arr(framesize,-1);
    int hit = 0;
    int mat[framesize][process.size()];
    int index = 0;
    for (int i = 0; i < process.size(); i++)
    {
        if(found(process[i],arr,framesize))
            hit++;
        else{
            index = index%framesize;
            arr[index] = process[i];
            index++;
        }
        for (int k = 0; k < framesize; k++)
            mat[k][i]=arr[k];     
    }
    for (int i = 0; i < framesize; i++)
    {
        for (int j = 0; j < process.size(); j++)
        {
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    cout<<"The no. of hits : "<<hit;
}
int main(){
    vector<int>process = { 3,2,1,3,4,1,6,2,4,3,4,2,1,4,5};
    // vector<int>process = {7,0,1,2,0,3,0,4,2,3,0,3,1,2,0,1,7,0,1};
    fifo(process,3);
}