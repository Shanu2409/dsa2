#include <iostream>
using namespace std;

class Stack{
    public:
        char *arr;
        int size, top;

        Stack(int size){
            this->size = size;
            arr = new char[size];
            top = -1;
        }

    void push(char d){
        if(size - top > 1){
            top++;
            arr[top] = d;
            // cout<<"Adding "<<d<<" to stack"<<endl;
        }
        else {
            cout<<"Stack is full"<<endl;
            return;
        }
    }

    void pop(){
        if(top < 0){
            cout<<"Stack is empty"<<endl;
            return;
        }
        else {
            // cout<<"Removing "<< arr[top]<<" from stack"<<endl;
            arr[top] = 0;
            top--;
        }
    }

    char peek(){
        return arr[top];
        
    }

    void print(){
        cout<<"Starting is ->";
        for(int i = 0; i <= top; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){

    //reverse a string using stack
    Stack s1(5);
    char str[] = "abcd";
    for(int i = 0; i < 4; i++){
        s1.push(str[i]);
    }
    for(int i = 0; i < 4; i++){
        cout<<s1.peek();
        s1.pop();
    }
    cout<<endl;

    

    return 0;
}