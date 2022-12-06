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
        this->data= d;
    }
};
node *insert(node *root, int element) {
    if(root==NULL) {
        return new node(element);
    }
    if(element>root->data) {
        root->right = insert(root->right, element);
    }
    else {
        root->left = insert(root->left, element);
    }
    return root;
}
node *search(node *root, int element) {
    if(root == NULL || root->data == element) {
        return root;
    }
    else if(root->data>element) {
        return search(root->right, element);
    }
    else {
        return search(root->left, element);
    }
}
void postordertraversal(node *root) {
    if(root==NULL) {
        return;
    }
    postordertraversal(root->left);
    postordertraversal(root->right);
    cout << root->data << " ";
}
int main() {
    node *root = NULL;
    cout << "Enter the elements to insert";
    int n;
    cin >> n;
    while(n--) {
        cout << "Enter value to insert ";
        int m;
        cin >> m;
        root = insert(root,m);
    }
    postordertraversal(root);
    cout << "Enter element to search ";
    node *a = NULL;
    int k;
    cin >> k;
    if(search(root,k)) {
        cout << "YES";
    }
    else {
        cout << "NAH BRUDDA";
    }

}