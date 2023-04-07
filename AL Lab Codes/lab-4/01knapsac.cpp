#include <iostream>
using namespace std;
class knapsack
{
public:
    float weight;
    float profitbyweight;
    float profit;
};
int main()
{
    int n;
    int c;
    knapsack temp;
    cout << "Enter the number of items: ";
    cin >> n;
    knapsack k[n];
    cout << "Enter the capacity: ";
    cin >> c;

    cout << "Enter weights: ";
    for (int i = 0; i < n; i++)
    {
        cin >> k[i].weight;
    }
    cout << "Enter profits: ";
    for (int i = 0; i < n; i++)
    {
        cin >> k[i].profit;
    }
    for (int i = 0; i < n; i++)
    {
        k[i].profitbyweight = float(k[i].profit / k[i].weight);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (k[j + 1].profitbyweight >= k[j].profitbyweight)
            {
                temp = k[j];
                k[j] = k[j + 1];
                k[j + 1] = temp;
            }
        }
    }
    int profit = 0;
    int m = 0;
    while (c > 0)
    {

        if (c >= k[m].weight)
        {
            profit += k[m].profit;
            c = c - k[m].weight;
            m++;
        }
        else
        {
            m++;
        }
        if (m >= n)
        {
            break;
        }
    }
    cout << "Total profit is " << profit << endl;
}
