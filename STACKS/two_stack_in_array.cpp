#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int size;
    int top1;
    int top2;

    stack(int size){

        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

    //functions

    void push1(int data){
        if(top2 - top1 == 1){
            //space not available 
        cout<<"stack overflow"<<endl;
        }
        else{
            //space available
            top1++;// stack is growing from left to right thtsy we have done ++
            arr[top] = data;
        }
    }

    void pop1(){
        if(top1 == -1){
            //stack empty
            cout<<"underflow in stack "<<endl;
        }
        else{
            //stack not empty
            top1--;
        }
    }

    void push2(int data){
        if(top2 - top1 == 1){
            //space not available 
        cout<<"stack overflow"<<endl;
        }
        else{
            //space available
            top1++;// stack is growing from right to left thtsy we have done --
            arr[top] = data;
        }
    }
    
    void pop2(){
        if(top2 == size){
            //stack2 is empty
            if(top1 == -1){
            //stack empty
            cout<<"underflow in stack "<<endl;
        }
        else{
            //stack not empty
            top2++;
        }
     } 
     void print(){ //just to show how stack is performing we make stack function we dont need to make it
        cout<<endl;
        cout<<"top1: "<<top1<<endl;
        cout<<"top2: "<<top3<<endl;
        for(int i = 0; i<size; i++){
            cout<<arr[i]<<" ";
            cout<<endl;
        }
     }

    }
}

int main(){

    Stack s;
    s.push1(10);
    s.print();
    s.push1(20);
    s.print();
    s.push1(30);
    s.print();
    s.push1(40);
    s.print();
    s.push1(50);
    s.print();

    s.push2(100);
    s.print();
    s.push2(110);
    s.print();
    s.push2(120);
    s.print();
    
}
