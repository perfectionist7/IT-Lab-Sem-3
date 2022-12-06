#include <iostream>
#include <stack>
using namespace std;
class node {
    public:
    int data;
    node *left;
    node *right;
    node(int d) {
        this->left=NULL;
        this->right=NULL;
        this->data = d;
    }
};
node *buildtree(node *root) {
    int k;
    cout << "Enter the data" << endl;
    cin >> k;
    if(k==-1) {
        return NULL;
    }
    root = new node(k);
    cout << "Enter the left child of " << k << endl;
    root->left = buildtree(root->left);
    cout << "Enter the right child of " << k << endl;
    root->right = buildtree(root->right);
    return root;
}
void preordertraversal(node *root) {
    stack <node*> s;
    s.push(root);
    while(!s.empty()) {
        node *cur = s.top();
        cout << cur->data << " ";
        s.pop();
        if(cur->right) {
            s.push(cur->right);
        }
        if(cur->left) {
            s.push(cur->left);
        }
    }
    cout << endl;

}
void inordertraversal(node *root) {
    stack <node*> s;
    node *cur = root;
    while(cur!=NULL || !s.empty() ) {
        while(cur!=NULL) {
            s.push(cur);
            cur = cur->left;
        }
        cur = s.top();
        s.pop();
        cout << cur->data << " ";
        cur = cur->right;
    }
}
int main() {
    cout << "Enter the elements of the binary tree ";
    cout << endl;
    node *root = NULL;
    root = buildtree(root);
    cout << "The preorder traversal of the binary tree is ";
    preordertraversal(root);
    cout << "The inorder traversal of the binary tree is ";
    inordertraversal(root);
}