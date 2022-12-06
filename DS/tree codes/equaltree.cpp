#include <iostream>
#include <queue>
using namespace std;
class node {
    public:
    node *left;
    node *right;
    int data;
    node(int d) {
        this->left=NULL;
        this->right= NULL;
        this->data=d;
    }
};
node *createtree(node *root) {
    int k;
    cout << "Enter the data ";
    cin >> k;
    root = new node(k);
    if(k==-1) {
        return NULL;
    }
    cout << "Enter the left child of " << k << endl;
    root->left = createtree(root->left);
    cout << "Enter the right child of " << k << endl;
    root->right = createtree(root->right);
    return root;
}
bool checkequal(node *root, node *root2) {
    if(!root && !root2) {
        return false;
    }
    queue <node*> q1;
    queue <node*> q2;
    q1.push(root);
    q2.push(root2);
    while(!q1.empty() && !q2.empty()) {
         node *n1 = q1.front();
         node *n2 = q2.front();
         q1.pop();
         q2.pop();
         
         if(n1->data!=n2->data) {
            return false;
         }
         if(n1->right && n2->right) {
            q1.push(n1->right);
            q2.push(n2->right);
         }
         else if(n1->right || n2->right) {
            return false;
         }
         if(n1->left && n2->left) {
            q1.push(n1->left);
            q2.push(n2->left);
         }
         else if(n1->left || n2->left) {
            return false;
         }
    }
    return true;
}
int main() {
    node *root=NULL;
    node *root2=NULL;
    root = createtree(root);
    root2 = createtree(root);
    if(checkequal(root, root2)) {
        cout << "YES THEY BE EQUAL";
    }
    else {
        cout << "NAH THEY AINT";
    }


}
