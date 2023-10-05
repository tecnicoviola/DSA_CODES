    // *********1********
    //  *******2*2*******
    //  ******3*3*3******
    //  *****4*4*4*4*****
    //  ****5*5*5*5*5****


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        int start_num_index = 8-i;
        int num = i+1;
        int count_num= num;
        for(int j = 0; j<17; j++){
            if(j == start_num_index){
                cout<<num;
                start_num_index+=2;
                count_num--;
            }
        }
        cout<<endl;
            cout<<"*";

        }
    }
    }
}