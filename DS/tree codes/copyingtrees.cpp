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
void preordertraversal(node *root) {
    if(root==NULL) {
        return;
    }
    cout << root->data << " ";
    preordertraversal(root->left);
    preordertraversal(root->right);
}
node *copy(node *root) {
    node *root2 = new node();
    if(!root) {
        return NULL;
    }
    root2->data = root->data;
    root2->left = copy(root->left);
    root2->right = copy(root->right);
    return root2;
}
int main() {
    cout << "HEY FELLAS IM BACK!";
    node *root = NULL;
    node *root2 = NULL;
    root = buildtree(root);
    preordertraversal(root);
    root2 = copy(root);
    preordertraversal(root2);
}