#include <iostream>
using namespace std;
    int main() {
        int m,n,p,q;
        cout << "Enter the size of the matrix A: ";
        cin >> m;
        cin >> n;
        cout << "Enter the size of the matrix B: ";
        cin >> p;
        cin >> q;

        cout << "Enter the elements of matrix A: " << endl;
        int a[m][n];
        int b[p][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin >> a[i][j];
            }
        }
        
        cout << "Enter the elements of matrix B: " << endl;
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin >> b[i][j];
            }
        }


        int c[m][q];
        int d[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                c[i][j]=0;
                for(int k=0;k<n;k++){
                    c[i][j]+=a[i][k]*b[k][j];}
            }
        }
        cout << "Matrix on multiplying: " << endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                d[i][j] = a[i][j] + b[i][j];
                cout << c[i][j];
                cout << " ";
            }
            cout << endl;
        }
        cout << "Matrix on adding: " << endl;
        for(int i=0;i<m;i++) {
            for(int j=0;j<q;j++) {
                cout << d[i][j];
                cout << " ";
            }
            cout << endl;
        }
    }