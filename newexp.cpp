//cpp program to implement a stack without using any predefined stack functions and features

//feel free to modify the code as per your needs 
#include<iostream>
using namespace std;    
class stack{
    public:
    int *arr;
    int size;
    int top;
    
    stack(int c){
        size=c;
        arr=new int[size];
        top=-1;
    }
    bool is_full(){
        if(top==size-1){
            return true;
        }
        return false;
    }
    bool is_empty(){
        if(top==-1){
            return true;
        }
        return false;
    }
    int ret_top() {
        if (is_empty()) {
            cout << "Stack is empty." << endl;
            return -1;
        }
        return arr[top];
    }
    void push(int x){
        if(top==size-1){
            cout<<"Stack Overflow";
        }
        else{
            top=top+1;
            arr[top]=x;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"Stack Underflow";
        }
        else{
            top=top-1;
        }
    }
};
int main(){
    stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<s.is_empty()<<endl;
    cout<<s.is_full()<<endl;
    cout<<s.ret_top()<<endl;
    s.pop();
    cout<<s.ret_top()<<endl;
}
