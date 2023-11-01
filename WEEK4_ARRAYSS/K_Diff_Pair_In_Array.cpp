//INPUT={3,1,4,1,5} : K=2;
//OUTPT={1,3}, {3,5}
//above pairs are unique as well as their difference is equals to K

#include<iostream>
using namespace std;

int main(int n,int k){

    int arr[5]={3,1,4,1,5};
    int c=0;
    for(int i=1; i<n; i++){
        for(int j=i+1; j<n; j++){
        
            if((arr[i]-arr[j])==k)
            {
                c++;
            } 
        }
        cout<<c;
    }
}