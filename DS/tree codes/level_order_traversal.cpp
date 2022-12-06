#include <iostream>
#include <queue>
using namespace std;
class Node {
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d) {
       this->left=NULL;
       this->right= NULL;
       this->data = data;
    }
};
Node* buildtree(Node* root) {
    int d;
    cout << "Enter the data to input ";
    cin >> d;
    root = new Node(d);
    if(d==-1) {
        return NULL;
    }
    cout << "Enter the element to insert at the left of " << d << endl;
    root->left = buildtree(root->left);
    cout << "Enter the element to insert at the right of " << d << endl;
    root->right = buildtree(root->right);
    return root;

}
void levelordertraversal(Node *root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()) {
        Node *temp = q.front();
        q.pop();
        if(temp==NULL) {
            cout << endl;
            if(!q.empty()) {
                q.push(NULL);
            }
        }
        else {
            cout << temp->data << " ";
        if(temp->left) { 
            q.push(temp->left);
        }
        if(temp->right) {
            q.push(temp->right);
        }
        }
    }
    

}
int main() {
    Node *root = NULL;
    root = buildtree(root);
    levelordertraversal(root);
}