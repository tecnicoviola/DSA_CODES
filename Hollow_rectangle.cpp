// EXAMPLE : * * * * *
//           *       *
//           * * * * *

#include<iostream>
using namespace std;

int main(){
    int row, col;
    for(row = 0; row<3; row++){
        //first or last row print 5
        if(row == 0 || row == 2){
            
            for(col = 0; col<5; col++){
                cout<<" * ";
            }
        }
        else{
            //remaining middle rows
            //first star
            cout<<" * ";
            //spaces
            for(int i = 0; i<3; i++){
                cout<<" ";
            }
            //last star
            cout<<" * ";
        }
        cout<<endl;
    }
}