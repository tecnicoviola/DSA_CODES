#include<iostream>
using namespace std;

int main(){

    int i, j, n;
    cin>>n;

    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            cout<<i;
            if(j!=i)//not a last charaacter
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=1; i<=n; i++){

         for(j=4; j>=i; j--){
            cout<< n-i;
            if(j!=i)
            cout<<"*";
        }
        cout<<endl;
    }
}