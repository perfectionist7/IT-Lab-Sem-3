#include <iostream>
#include <algorithm>
using namespace std;
#define stacksize 10
class Stack {
    int top;
    string arr[stacksize];
public:
    Stack(){
        top=-1;
    }
    void push(string x){
        if(top<stacksize){
            arr[++top]=x;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }

    string pop(){
        if(top>=0)
            return arr[top--];
    }

    string peek(){
        if(top>=0)
            return arr[top];
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        return false;
    }
};

string pretoInfix(string pre){
    Stack s;
    string output, final;
    reverse(pre.begin(),pre.end());
    int l=pre.length();
    for(int i=0;i<l;i++){
        if(isdigit(pre[i])||isalpha(pre[i])){
            s.push(string(1,pre[i]));
        }
        else{
            string a=s.pop();
            string b=s.pop();
            string exp='('+b+pre[i]+a+')';
            s.push(exp);
        }
    }
    output=s.peek();
    int len=output.length();
    for(int i=len-1;i>=0;i--){
        if(output[i]=='('){
            final+=')';}
        else if(output[i]==')'){
            final+='(';}
        else
        {
            final+=output[i];
        }
    }
    return final;
}

int getPriority(string c){
    switch (c[0])
    {
    case '-':
    case '+':
        return 1;
        break;
    case '*':
    case '/':
        return 2;
        break;
    case '$':
    case '^':
        return 3;
        break;
    default:
        return 0;
        break;
    }
}

string infixtoPostfix(string infix){
    infix='('+infix+')';
    int l=infix.size();
    string output;
    Stack s;
    for(int i=0;i<l;i++){
        if(isalpha(infix[i])||isdigit(infix[i]))
            output+=infix[i];
        else if(string(1,infix[i])=="(")
            s.push(string(1,infix[i]));
        else if(string(1,infix[i])==")"){
            while(s.peek()!="(")
                output+=s.pop();
            s.pop();
        }
        else{
            while(getPriority(string(1,infix[i]))<=getPriority(s.peek()))
                output+=s.pop();
            s.push(string(1,infix[i]));
        }
    }
    return output;
}

int main(){
    string inp;
    cout<<"Enter the expression:";
    cin>>inp;
    cout<<infixtoPostfix(pretoInfix(inp));
}