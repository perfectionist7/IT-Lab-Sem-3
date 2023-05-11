#include <bits/stdc++.h>
using namespace std;
int container(int w, vector<int> &wt, int n)
{
    if (n == 0 || w == 0)
    {
        return 0;
    }
    if (wt[n - 1] > w)
    {
        return container(w, wt, n - 1);
    }
    else
    {
        return max(1 + container(w - wt[n - 1], wt, n - 1), container(w, wt, n - 1));
    }
}
int main()
{
    int n;
    cout << "Enter the no of container: ";
    cin >> n;
    vector<int> a;
    cout << "Enter the value of conatiner: ";
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        a.emplace_back(b);
    }
    cout << "Enter the capactiy: ";
    int cap;
    cin >> cap;
    cout << container(cap, a, n);
}