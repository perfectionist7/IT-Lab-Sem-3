#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    int arr[t];
    int freq[t];
    for(int i=0; i<t; i++) {
        cin >> arr[i];
    }
    vector<bool> visited(t, false);
    for(int i=0; i<t; i++) {
        int count = 1;
        if (visited[i] == true)
            continue;
        for(int j=i+1; j<t; j++) {
            if(arr[i]==arr[j]) {
                visited[j] = true;
                count++;
            }
        }
        freq[i] = count;
    }
    int queries;
    cin >> queries;
    int a,b;
    while(queries--) {
        cin >> a >> b;
        int sum = 0;
        for(int i=a; i<=b; i++) {
            for(int j=0; j<t; j++) {
                if(freq[j]==i) {
                    sum = sum+arr[j];
                }
            }
        }
        cout << sum << endl;
    }
}