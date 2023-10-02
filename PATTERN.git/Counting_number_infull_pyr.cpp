#include<iostream>
using namespace std;

int main(){
    int row, col, start, n;
    cin>>n;

    for(row=0; row<n; row++){
        //spaces
        for(col=0; col<n-row-1; col= col+1){
            cout<<" ";
        }

        //numbers
        for(col=0; col<row+1; col= col+1){
            cout<<row+col+1; 
        }

        //reverse counting
        int start = 2*row;
        for(col=1; col<=row; col= col+1){
            cout<<start;
            start = start-1;
        }
        cout<<endl;
    }
}