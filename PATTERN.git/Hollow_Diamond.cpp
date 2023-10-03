#include<iostream>
using namespace std;

int main(){

for(int row = 0; row<n; row++){
    //spaces
    for(int col = 0; col<n-row-1; col = col++)
    cout<<" ";
}
//stars
for(col = 0; col<2*row+1;col++){
    //if first char or last char 
    if(col==0 || col == 2*row){
        //firs or last char
        cout<<"*";
        else
        cout<<" ";
    }
        cout<< endl;
}
for(int row = 0; row<n; row++){
    //spaces
    for(col = 0; col<row; col++){
         cout<<" ";
}

//STAR
for(int col = 0; col<2*n-2*row-1; col = col+1){
    //if first or last character
    if(col == 0 || col ==2*n-2*row-2){
        cout<<" * "
    }
    else{
        cout<<" ";
    }
    }
    cout<<endl; 
}
}


