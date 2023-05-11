#include <bits/stdc++.h>
using namespace std;
int knapsack(int w, int wt[], int val[], int n)
{
    if (n == 0 || w == 0)
    {
        return 0;
    }
    if (wt[n - 1] > w)
    {
        float temp;
        temp = val[n - 1] * w / wt[n - 1];
        return temp + knapsack(w, wt, val, n - 1);
    }
    else
        return max(val[n - 1] + knapsack(w - wt[n - 1], wt, val, n - 1), knapsack(w, wt, val, n - 1));
}
int main()
{
    int profit[] = {5, 10, 60};
    int weight[] = {20, 20, 10};

    int w = 35;
    int n = sizeof(profit) / sizeof(profit[0]);
    cout << knapsack(w, weight, profit, n);
}