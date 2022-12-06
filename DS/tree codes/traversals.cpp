#include <iostream>
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
    int d;
    cout << "Enter the data of the tree" << endl;
    cin >> d;
    root = new node(d);
    if(d==-1) {
        return NULL;
    }
    cout << "Enter the left child of " << d << endl;
    root->left = buildtree(root->left);
    cout << "Enter the right child of " << d << endl;
    root->right = buildtree(root->right);
    return root;
}
void postordertraversal(node *root) {
    if(root==NULL) {
        return;
    }
    postordertraversal(root->left);
    postordertraversal(root->right);
    cout << root->data << " ";

}
void preordertraversal(node *root) {
    if(root==NULL) {
        return;
    }
    cout << root->data << " ";
    preordertraversal(root->left);
    preordertraversal(root->right);
}
void inordertraversal(node *root) {
    if(root==NULL) {
        return;
    }
    inordertraversal(root->left);
    cout << root->data << " ";
    inordertraversal(root->right);
}

int main() {
    cout << "Enter the elements of the tree: " << endl;
    node *root = NULL;
    root = buildtree(root);
    cout << "The inorder traversal of the tree is: ";
    inordertraversal(root);
    cout << endl;
    cout << "The postorder traversal of the tree is: ";
    postordertraversal(root);
    cout << endl;
    cout << "The preorder traversal of the tree is: ";
    cout << endl;
    preordertraversal(root);
}
