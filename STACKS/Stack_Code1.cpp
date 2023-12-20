#include<iostream>
#include<stack>
using namespace std;

class stack{
    public:

    int *arr;
    int top;
    int  size;

    stack(int size){
        arr = new int[size];
        this -> size = size;
        top = -1;
    }
    //functions
    void push(int data){
        if(size - top>1){
            //space available
            //insert
            top++
            arr[top] = data;
        }
        else{
            //space not avialble
            cout<<"stack overflow"<<endl;
            }
    }
    void pop(){
        if(top == -1){
           //stack is not empty 
           top--;
        }

    }
    int gettop(){
        if(top == -1){
            cout<<"there  is no element  in stack"<<endl;
        }
        else{
            return arr[top];
            }
        }
        //return number of valid element present in stack
        int getsize(){
            return top +1;
        }
        bool isempty(){
            if(top = -1){
                return true;
            }
            else{
                return false;
            }     
        }
};

int main(){

    stack s;

    //insertion
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while(!s.isempty()){//jab tak stack empty ni hota hai pritning top
        cout<<s.gettop()<<" ";
        s.pop();
    }
    cout<<"size of stack"<<s.getsize()<<endl;

    return 0;
}


