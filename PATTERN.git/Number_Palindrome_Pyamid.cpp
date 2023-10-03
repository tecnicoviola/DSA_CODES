        //         1
        //       1 2 1
        //     1 2 3 2 1
        //   1 2 3 4 3 2 1
        // 1 2 3 4 5 4 3 2 1
#include<iostream>
using namespace std;

int main(){
    
    int  i, j,k, n;
    cin>>n;

    for(i=1; i<=n; i++){
        for(j=n; j>=i; j--){
            cout<<" ";
        }
        
        for(j=1; j<i; j++){
            cout<<j;
        }

    for(k=i; k>=1; k--){
        cout<<k;
    }
         cout<<endl;
}
}