                    // *
                    // * *
                    // * * *
                    // * * * *
                    // * * * * *
                    // * * * *
                    // * * *
                    // * *
                    // * 
                
#include<iostream>
using namespace std;

int main(){
    
    int n, i, j;
    cin>>n;
    for(i=0; i<n; i++){
        for(j=1; j<i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(i=n; i>=0; i--){
        for(j=1; j<=i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}