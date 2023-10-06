    // *
    // * 1 *
    // * 1 2 1 *
    // * 1 2 3 2 1 *
    // * 1 2 1 *
    // * 1 *
    // * 
 
 #include<iostream>
 using namespace std;

 int main(){
         
    int n,i,j;
    cin>>n;
    for(i=0; i<=6; i++){
      for(j=0; j<=2*i+1; j++){
        if(i%2 != 0){
            if(j%2 == 0){
                cout<<"*";
            }
            else {
                cout<<j;
            }
        }
        else{
            if(j%2 == 0){
                cout<<j;
            }
        }
      }
    }
 }
       