#include <iostream>
using namespace std;

class Stack{
    public:
        int *arr, size, top;

        Stack(int size){
            this->size = size;
            arr = new int[size];
            top = -1;
        }

    void push(int d){
        if(size - top > 1){
            top++;
            arr[top] = d;
            cout<<"Adding "<<d<<" to stack"<<endl;
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
            cout<<"Removing "<< arr[top]<<" from stack"<<endl;
            arr[top] = 0;
            top--;
        }
    }

    void peek(){
        cout<<"The Top is peeking at -> "<<arr[top]<<endl;

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

    Stack s(2);
    s.pop();

    return 0;
}