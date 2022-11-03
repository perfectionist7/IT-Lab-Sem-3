#include <iostream>
using namespace std;
class sparse {
public:
    int row,col,val;
    void create(int r, int c, int v) {
        row = r;
        col = c;
        val = v;
    }
    void display() {
       cout << row << " " << col << " " << val << endl;
    }

};
 sparse* transpose(sparse s[]) {
        sparse *s2 = new sparse[s[0].val+1];
        s2[0].col = s[0].row;
        s2[0].row = s[0].col;
        s2[0].val = s[0].val;
        int k=0;
        for(int i=0; i<s[0].col; i++) {
            for(int j=1; j<=s[0].val;j++) {
                if(s[j].col==i) {
                    s2[++k].create(s[j].col,s[j].row,s[j].val);
                }
            }
        }
        return s2;
    }
int main() {
        int r,c,v;
        int k=0;
        int count = 0;
        cout << "Enter the number of rows";
        cin >> r;
        cout << "Enter the number of columns";
        cin >> c;
        int arr[r][c];
        for(int i=0; i<r;i++) {
            for(int j=0; j<c;j++) {
                cin >> arr[i][j];
                if(arr[i][j]!=0) {
                    count++;
                }
            }
        }
        sparse s[count+1];
        s[0].create(r,c,count);
        for(int i=0; i<r;i++) {
            for(int j=0; j<c; j++) {
                if(arr[i][j]!=0) {
                    s[++k].create(i,j,arr[i][j]);
                }
            }
        }
        cout << "The matrix before transposing : " << endl;
        for(int i=0; i<=count; i++) {
            s[i].display();
        }
        sparse *s2 = transpose(s);
        cout << "The matrix after transposing : " << endl;;
        for(int i=0; i<=count;i++) {
            s2[i].display();
        }
    }