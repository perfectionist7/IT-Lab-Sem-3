#include <iostream>
using namespace std;
struct Node {
    int value;
    Node *next;

};
class structure {
    Node *head;
public:
    structure() {
        head = NULL;
    }
    void insert(int x) {
        Node *temp = new Node;
        temp->value = x;
        temp->next = head;
        head = temp;
    }
    void del(int x) {
        Node *cur=head;
        int k=0;


        if(cur->value==x){
            head=cur->next;
            return;
        }

        while(cur->next!=NULL){
            if((cur->next)->value==x){
                cur->next=(cur->next)->next;
                k=1;
                break;
            }
            cur=cur->next;
        }

        if(cur->next==NULL && cur->value==x){
            delete cur->next;
            cur->next=NULL;
            k = 1;
        }
            
        if(k==0){
            cout<<"Element not found!"<<endl;
        }
    }

    void add_after(int x, int xafter) {
        Node *temp = new Node;
        temp->value = x;
        Node *cur = head;
        int k=0;
        while(cur->next!=NULL) {
            if(cur->value == xafter) {
                temp->next = cur->next;
                cur->next = temp;
                k=1;
                break;
            }
            cur = cur->next;
        }
        if(k==0) {
            cout << "Element not found!";
        }

    }
    void add_before(int x, int xbefore) {
        Node *temp = new Node;
        temp->value = x;
        Node *cur=head;
        int k=0;
        while((cur->next!=NULL)) {
            if((cur->next)->value==xbefore) {
                temp->next = cur->next;
                cur->next = temp;
                k=1;
                break;
            }
            cur = cur->next;
        }
        if(k==0) {
            cout << "Element not found!";
        }
    }
    void display() {
        Node *cur = new Node;
        cur = head;
        while(cur!=NULL) {
            cout << cur->value << " ";
            cur = cur->next;
        }
        cout << endl;
    }
    void reverse(){
        Node *before=NULL, *after=NULL, *cur=head;
        while(cur!=NULL){
            after=cur->next;
            cur->next=before;
            before=cur;
            cur=after;
        }
        head=before;
    } 
    void sort(){
        Node *a=head, *b, *minimum;
        int temp;
        while(a){
            minimum=a;
            b=a->next;
            while(b){
                if(b->value<minimum->value)
                    minimum=b;
                b=b->next;
            }
            if(minimum!=a)
                swap(minimum->value,a->value);
            a=a->next;
        }
    }
    void delete_alternate(){
        Node *temp=head;
        Node *temp2=temp->next;
        while(temp && temp2){
            temp->next=temp2->next;
            delete temp2;
            temp=temp->next;
            if(temp)
                temp2=temp->next;
        }
        
    }
    void insert_sort(int x){
        Node *temp=new Node;
        Node *cur=head;
        temp->value=x;
        if(head==NULL){
            insert(x);
            return;
        }
        if(cur->value>x){
            temp->next=head;
            head=temp;
            return;
        }
        while(cur->next!=NULL){
            if(cur->next->value>x){
                temp->next=cur->next;
                cur->next=temp;
                break;
            }
            cur=cur->next;
        }
        if(cur->next==NULL){
            cur->next=temp;
            temp->next=NULL;
        }
    }
};

int main() {
    int input,a,b;
    structure s;
    s.insert(1);
    s.insert(2);
    s.insert(5);
    s.insert(6);
    cout << "PREDEFINED LINKED LIST IS 6 5 2 1" << endl;
    cout <<"YOU MAY PERFORM THE FOLLOWING FUNCTIONS ON THE LINKED LIST:"<<endl;
    cout<<"1.Insert before another element"<<endl;
    cout<<"2.Insert after another element"<<endl;
    cout<<"3.Delete an element"<<endl;
    cout<<"4.Traverse the list"<<endl;
    cout<<"5.Reverse the list"<<endl;
    cout<<"6.Sort the list"<<endl;
    cout<<"7.Delete alternate elements"<<endl;
    cout<<"8.Insert in an order"<<endl;
    cout<<"9.Exit"<<endl;
    while(input!=9){
        cout<<">";
        cin>>input;
        switch(input){
            case 1:
                cout<<"Enter the element to insert: ";
                cin>>a;
                cout<<"Enter the element to insert before: ";
                cin>>b;
                s.add_before(a,b);
                break;
            case 2:
                cout<<"Enter the element to insert: ";
                cin>>a;
                cout<<"Enter the element to insert after: ";
                cin>>b;
                s.add_after(a, b);
                break;
            case 3:
                cout<<"Enter the element to delete:";
                cin>>a;
                s.del(a);
                break;
            case 4:
                s.display();
                break;
            case 5:
                s.reverse();
                break;
            case 6:
                s.sort();
                break;
            case 7:
                s.delete_alternate();
                break;
            case 8:
                cout<<"Enter the element to insert: ";
                cin>>a;
                s.insert_sort(a);
                break;
            case 9:
                cout << "Thanks! ";
            default:
                cout<<"Invalid Choice!"<<endl;
        }
            cout << "UPDATED LIST: " << endl;
            s.display();
            cout << "PRESS ANY OTHER FUNCTION TO PERFORM: ";
    }
}