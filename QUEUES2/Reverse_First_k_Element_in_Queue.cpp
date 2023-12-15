#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reverseK(queue<int>&q, int k){
    //step 1: insert queue k elemnt into stack
    stack<int>s;
    int count = 0;
    int n = q.size();

    if(k == 0 || k > n)
    return ;

    while(!q.empty() && (n-k)!= 0){
        int temp = q.front();
        q.pop();
        s.push(temp);
        count++;

        if(count == k)
        break;
    }
    //STEP 2: STACK ELEMENT QUEUE MAIN WAPAS
    while(!s.empty()){
        int temp = s.top();
        s.pop();
        q.push(temp);
    }
    //STEP 3: push n-k elemnt from q ro back
    count = 0;

    while(!q.empty()){
        int temp = q.front();
        q.pop();
        q.push(temp);
        count++;

        if(count == n-k)
        break;
    }
}

int main(){
    queue<int>q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(12); 
    q.push(15);

    reverseK(q,4);

    cout<<"printing queue after reversing"<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
