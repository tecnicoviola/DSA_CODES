#include<iostream>
using namespace std;

class doubly{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    doubly(int size){
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void pushRear(int data){

        if(front == 0 &&(rear == size-1)){
            cout<<"Q is full, cannot insert"<<endl;
            return;
            }       
        else if(front == -1){
            front = rear = 0;  //first element is inserted
            
        }
        else if(rear = size-1 && front!= 0 ){
            rear = 0;
            
        else{
            rear++;
            
            }
            arr[rear] = data;
        }
        
        void pushfront(int data){

            if(front == 0 &&(rear == size-1)){
            cout<<"Q is full, cannot insert"<<endl;
            return;
            }       
        else if(front == -1){
            front = rear = 0;  //first element is inserted
            
        else if(front == 0 && rear! = size-1){  // rear! = size-1 to check if n-1 position is empty or not becoj front can go to last only when tht position is empty ;             rear = 0;
            front = n-1;
        else{
            front--;
            
            }
            arr[rear] = data;
        }
        
        void popfront(){

        if(front == -1){
            cout<<"Q is empty cannot pop"<<endl;
        }
        else if(front == rear){
            arr[front] = -1;
            front = -1; //empty queue are shown by both of these
            rear = -1;  //empty queuq are shown by both of these   
        }
        else if(front == size-1){  //if front is at the rightmost 
            front = 0;     //and we want to bring it to the zeroth index
         }
        else{
            front++;
        }
    } 

    void poprear(){ 
        if(front == -1){
            cout<<"Q is empty cannot pop"<<endl;
            return;
        }  
        else if(front == rear){
            arr[front] = -1;
            front = -1; //empty queue are shown by both of these
            rear = -1;  //empty queuq are shown by both of these   
        }
        else if(rear == 0){  //if front is at the rightmost 
              rear = size-1;     //and we want to bring it to the zeroth index
         }
        else{
            rear--;
        }
    }
};
int main() {
    int queueSize = 5; // Define the size of the queue

    doubly dq(queueSize); // Create a doubly ended queue of given size

    // Push elements to the rear of the queue
    dq.pushRear(10);
    dq.pushRear(20);
    dq.pushRear(30);

    // Push elements to the front of the queue
    dq.pushFront(5);
    dq.pushFront(15);

    // Pop elements from the front and rear of the queue
    dq.popFront();
    dq.popRear();

    return 0;
}
