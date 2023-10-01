#include<iostream>
using namespace std;

int main(){
    
    int i, j,k, ans;
    int n;
    char ch;
    cin>>n;
    for(i=1; i<=5; i++){
        
        for(j=1; j<i; j++){
            ans = j;
            char ch = ans + 'A'-1;
            cout<<ch;
        }

        for(k=i; k>=1; k--){
            ans = k;
            char ch = ans + 'A'-1;
            cout<<ch;
        }
            cout<<endl;
    }
}