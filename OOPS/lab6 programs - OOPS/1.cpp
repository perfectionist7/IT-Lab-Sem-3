#include <iostream>
#include <cmath>
using namespace std;
int smallestnondiv(int a) {
    int i;
    for(i=1; i<a; i++) {
        if(a%i!=0) {
            return i;
        }
    }
    return 0;
}
int main() {
    int a,b;
    cin >> a >> b;
    int sum =0;
    for(int x=a; x<=b; x++) {
        int y=x;
        int k=1;
        while(y!=2) {
            y = smallestnondiv(y);
            k++;
        }
        sum = sum + k;

    }
    cout << sum;
}
    
    