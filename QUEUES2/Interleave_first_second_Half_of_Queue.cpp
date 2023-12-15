#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void interleave(queue<int>&q){
    //STEP 1:separraate both halves
    int n = q.size();
    int k = n/2;
    int count = 0;
    queue<int>q2;

    while(!q.empty()){
        int temp = q.front();
        q.pop();
        q2.push(temp);
        count++;

        if(count == k)
        break;
    }

    //step 2; INTERCHANGE START KR DO
    while(!q.empty() && !q2.empty()){
        int first = q2.front();
        q2.pop();

        q.push(first);

        int second = q.front();
        q.pop();

        q.push(second);
    }

    //IF QUEUE IS ODD CASE 
    if(n&1){ //fastest way to find if n ios odd or not
        
        int element = q.front();
        q.pop();
        q.push(element);
     }
}

int main(){

    queue<int>&q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    q.push(10);
