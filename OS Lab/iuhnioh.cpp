#include <bits/stdc++.h>
using namespace std;

void fcfs(vector<int>ref,int in){
    vector<pair<int,int>>path;
    path.push_back({in,ref[0]});
    for (int i = 0; i < ref.size()-1; i++)
        path.push_back({ref[i],ref[i+1]});
    for (int i = 0; i < path.size(); i++)
        cout<<path[i].first<<"---"<<path[i].second<<endl;
    int sum = 0;
    for (int i = 0; i < path.size(); i++)
        sum+=abs(path[i].first-path[i].second);
    cout<<sum;
}
int index(int ele,vector<int>ref,vector<bool>&occupied){
    int min = INT_MAX;
    int in=0;
    for (int i = 0; i < ref.size(); i++){
        if(!occupied[i]){
            int diff = abs(ref[i]-ele);
            if(diff<min){
                min=diff;
                in = i;
            }
        }
    }
    occupied[in]=1;
    return in;
}
void sstf(vector<int>ref,int in){
    vector<bool>done(ref.size(),0);
    vector<pair<int,int>>path;
    int ind = index(50,ref,done);
    path.push_back({50,ref[ind]});
    for (int i = 0; i < ref.size()-1; i++){
        ind = index(path[i].second,ref,done);
        path.push_back({path[i].second,ref[ind]});
    }
    for (int i = 0; i < path.size(); i++)
        cout<<path[i].first<<"---"<<path[i].second<<endl;
    int sum = 0;
    for (int i = 0; i < path.size(); i++)
        sum+=abs(path[i].first-path[i].second);
    cout<<sum;
}
int main(){
    vector<int>ref ={176, 79, 34, 60, 92, 11, 41, 114};
    sstf(ref,50);
}