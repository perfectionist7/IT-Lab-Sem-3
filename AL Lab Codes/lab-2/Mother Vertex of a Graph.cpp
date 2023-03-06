#include<iostream>
#include<stack>
using namespace std;
void Mother(int a[100][100],int n,int s)
{
    stack<int> S;
    int visited[100];
    for(int i=0;i<n;i++)
    {
        visited[i]=0;
    }
    S.push(s);
    visited[s]=1;
    while(!S.empty())
    {
        int u=S.top();
        S.pop();
        for(int i=0;i<n;i++)
        {
            if(a[u][i]==1 && visited[i]==0)
            {
                S.push(i);
                visited[i]=1;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(visited[i]==0)
        {
            return;
        }
    }
    cout<<"Mother vertex"<<s;
}
int main()
{
    int v,e;
    cout<<"Enter the vertices"<<endl;
    cin>>v;
    cout<<"Enter the edges"<<endl;
    cin>>e;
    int a[100][100];
    int p,q;
    for(int i=0;i<e;i++)
    {
        cout<<"Enter the source"<<endl;
        cin>>p;
        cout<<"Enter the destination"<<endl;
        cin>>q;
        a[p][q]=1;
    }
    for(int i=0;i<v;i++)
    {
        Mother(a,v,i);
    }
}

