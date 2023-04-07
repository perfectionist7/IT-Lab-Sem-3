#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int ans = 0;
    cout << "Enter the No of container"
         << " ";
    int n;
    cin >> n;
    int a[n];
    cout << "Enter the weight of the containers: ";
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        a[i] = b;
    }
    sort(a, a + n);
    cout << "Enter the Total weight of the containter you can take" << endl;
    int total;
    cin >> total;
    for (int i = 0; i < n; i++)
    {
        if (total < 0)
        {
            break;
        }
        else
        {
            total = total - a[i];
            if (total > 0)
            {
                ans++;
            }
        }
    }
    cout << "total no of containers " << ans << endl;
}
