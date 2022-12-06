#include <iostream>
using namespace std;
class node {
    public:
    int data;
    node *left;
    node *right;
    node(int d) {
        this->left = NULL;
        this->right = NULL;
        this->data = d;
    }
};
node *buildtree(node *root) {
    cout << "Enter the data " << endl;
    int c;
    cin >> c;
    if(c==-1) {
        return NULL;
    }
    root = new node(c);
    cout << "Enter the left child of " << c << endl;
    root->left = buildtree(root->left);
    cout << "Enter the right child of " << c << endl;
    root->right = buildtree(root->right);
    return root;

}
bool checkmirror(node *root, node *root2) {
    if(!root && !root2) {
        return true;
    }
    if(!root || !root2) {
        return false;
    }
    return root->data == root2->data && checkmirror(root->left, root2->right) && checkmirror(root->right, root2->left);
}   
int main() {
    node *root = NULL;
    node *root2 = NULL;
    root = buildtree(root);
    root2 = buildtree(root2);
    if(checkmirror(root, root2)) {
        cout << "YES IT IS MIRROR";
    }
    else {
        cout << "NAH ITS NOT";
    }
}
