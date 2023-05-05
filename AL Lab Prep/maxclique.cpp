#include <iostream>
#include <vector>
using namespace std;
int adj[50][50];
vector<int> maxclique;
int n;
bool isclique(vector<int> clique)
{
    for (int i = 0; i < clique.size(); i++)
    {
        for (int j = i + 1; j < clique.size(); j++)
        {
            if (adj[clique[i]][clique[j]] != 1)
            {
                return false;
            }
        }
    }
    return true;
}
void findmaxclique(vector<int> candidates, vector<int> clique)
{
    if (candidates.empty())
    {
        if (isclique(clique) && clique.size() > maxclique.size())
        {
            maxclique = clique;
        }
        return;
    }
    if (clique.size() + candidates.size() <= maxclique.size())
    {
        return;
    }
    int v = candidates.back();
    candidates.pop_back();
    findmaxclique(candidates, clique);
    clique.push_back(v);
    if (isclique(clique))
    {
        findmaxclique(candidates, clique);
    }
}
int main()
{
    cout << "Enter the number of nodes: ";
    int n;
    cin >> n;
    cout << "Enter the number of edges: ";
    int m;
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            adj[i][j] = 0;
        }
    }
    int a, b;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        adj[a][b] = 1;
        adj[b][a] = 1;
    }
    vector<int> candidates;
    vector<int> clique;
    for (int i = 0; i < n; i++)
    {
        candidates.push_back(i);
    }
    findmaxclique(candidates, clique);
    cout << "The maximum clique is: ";
    for (int i = 0; i < maxclique.size(); i++)
    {
        cout << maxclique[i] << " ";
    }
}