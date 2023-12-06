#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reverse(queue<int>& q){
    stack<int> s;

    //STEP 1: put all elements of queue into stack
    while(!q.empty()){
        int element = q.front();
        q.pop();
        s.push(element);
    }

    //STEP 2: put all elements from stack into queue
    while(!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }
}

int main(){
    queue<int> q; // Initialize the queue

    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);

    reverse(q); // Call the reverse function

    cout << "Printing queue: ";
    while(!q.empty()){
        cout << q.front() << " "; // Print the front element of the queue
        q.pop();
    }
    cout << endl;

    return 0;
}