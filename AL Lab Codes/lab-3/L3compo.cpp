#include<bits/stdc++.h>
using namespace std;

int cnt=0;

int bfs(int adjmat[][10],int n,int e,int source)
{
    int visited[n];
    for (int i=0;i<n;i++)
    visited[i]=0;
    queue<int> q;
    q.push(source);
    visited[source]=1;
    cnt++;
    while (!q.empty()){
        int h=q.front();
        q.pop();
        for (int i=0;i<n;i++)
        {
            if (adjmat[h][i]==1 && visited[i]==0)
            {
                q.push(i);
                visited[i]=1;
                cnt++;
            }
        }
        cout<<h<<" ";
    }
    cout<<endl;
    return cnt;
}

int main()
{
    int adjmat[10][10],n,e;
    cnt=0;
    cout<<"nodes";
    cin>>n;
    cout<<"edges";
    cin>>e;

    for (int i=0;i<n;i++)
    for (int j=0;j<n;j++)
    adjmat[i][j]=0;

    int s,d;
    for (int i=0;i<e;i++)
    {
        cout<<"source";
        cin>>s;
        cout<<"destination";
        cin>>d;
        adjmat[s][d]=1;
        adjmat[d][s]=1;
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<<adjmat[i][j]<<" ";
        }
        cout<<endl;
    }
    if (n==bfs(adjmat,n,e,0))
        cout<<"Connected Graph"<<endl;
    else
        cout<<"Disconnected Graph"<<endl;
}
