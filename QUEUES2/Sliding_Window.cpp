#include<iostream>
#include<dequeue>
using namespace std;

void solve(int arr[], int n, int k){
    deque<int>

    //process first window of size k
    for(int i = 0; i<k; i++){
        if(arr[i] < 0){
            q.push_back(i);
        }
    } 

    //reamining window k process kro
    for(int i = k; i<n; i++){
        //answer dedo purani window ka
        if(!q.empty()){
            cout<<0<<" ";
        }
        else{
            cout<<arr[q.front()]<<" ";
        }
        //out of window element ko remove kr do
        while(!q.empty()&& (i.q.front() >= k)){
            q.pop_front();
        }
        //check current element for insertion
        if(arr[i] < 0)
        q.pushback(i);
    }
    //answer print for last window
    if(q.empty()){
        cout<<0<<" ";
    }
    else{
        cout<<arr[q.front()]<<" ";
    }
}
int main(){
    int arr[] = {12, -1, -7, -8, -15, 30, 16, 28};
    int size = 0;

    int k =3;

    solve(arr,size,k);
    return 0;
}
