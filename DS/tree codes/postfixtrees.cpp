#include <iostream>
#include <stack>
using namespace std;
class node {
    public:
    char data;
    node *left;
    node *right;
    node(char d) {
        this->left = NULL;
        this->right = NULL;
        this->data = d;
    }
};
bool isoperator(char ch) {
    if(ch=='*' || ch=='-' || ch=='+' || ch=='/') {
        return true;
    }
    else {
        return false;
    }
}

//creating a postfix tree
node* createtree(string postfix) {
    stack<node*> s;
    for(int i=0; i<postfix.length(); i++) {
        if(!isoperator(postfix[i])) {
            node *temp = new node(postfix[i]);
            s.push(temp);
        }
        else {
            node *temp = new node(postfix[i]);
            temp->right = s.top();
            s.pop();
            temp->left = s.top();
            s.pop();
            s.push(temp);
        }
    }
    return s.top();
}
void inordertraversal(node *root) {
    if(root==NULL) {
        return;
    }
    inordertraversal(root->left);
    cout << root->data << " ";
    inordertraversal(root->right);
}
void preordertraversal(node *root) {
    if(root==NULL) {
        return;
    }
    cout << root->data << " ";
    preordertraversal(root->left);
    preordertraversal(root->right);
}


int main() {
    string postfix;
    cout << "Enter the postfix expression: ";
    cin >> postfix;
    node *root=NULL;
    root = createtree(postfix);
    cout << "The infix of the expression is: ";
    inordertraversal(root);
    cout << "The prefix of the expression is: ";
    preordertraversal(root);
}