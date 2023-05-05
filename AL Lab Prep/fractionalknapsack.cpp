// 01knapsack problem
#include <iostream>
using namespace std;
class knapsack
{
public:
    int profit;
    int weight;
    int profitbyweight;
};
int main()
{
    int n = 0, c = 0;
    cout << "Enter the number of items: ";
    cin >> n;
    knapsack k[n];
    cout << "Enter the capacity: ";
    cin >> c;
    cout << "Enter the profit & weight: ";
    for (int i = 0; i < n; i++)
    {
        cin >> k[i].profit >> k[i].weight;
    }
    for (int i = 0; i < n; i++)
    {
        k[i].profitbyweight = k[i].profit / k[i].weight;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (k[j].profitbyweight > k[j + 1].profitbyweight)
            {
                swap(k[j], k[j + 1]);
            }
        }
    }
    int m = 0;
    int profit = 0;
    int f = 0;
    while (c > 0 && m < n)
    {
        if (c > k[m].weight)
        {
            profit += k[m].profit;
            c = c - k[m].weight;
            f++;
        }
        m++;
    }
    cout << profit << endl;
    if (m == n && c > 0)
    {
        profit = profit + c / k[f].weight * k[f].profit;
    }
    cout << profit << endl;
}