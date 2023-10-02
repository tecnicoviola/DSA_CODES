#include<iostream>
using namespace std;

int main(){
    
    int  i, j,k,p,n;
    cin>>n;

    for(i=1; i<=n; i++){
        
        for(j=1; j<i; j++){
            cout<<j;
        }
        for(p=n; p>2*i; p--){
            cout<<" ";

          for(k=1; k<1; k++){
            cout<<k;
        }
         cout<<endl;
    }
}
}