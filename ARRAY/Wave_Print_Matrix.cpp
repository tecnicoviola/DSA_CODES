#include<iostream>
#include<vector>
using namespace std;

void wavePrintmatrix(vector<vector<int>>v){
    int m= v.size();
    int n= v[0].size();
    for(int startcol=0; startcol<n; startcol++){
        //even number of column top to bottom
        if((startcol & 1)==0){
            for(int i=0; i<m; i++){
                cout<<v[i][startcol]<<" ";
            }
        }
        else{
            //odd number of col -> bottom to top
            for(int i=m-1; i>=0; i--){
                cout<<v[i][startcol]<<" ";
            }
        }
    }
}

int main(){
    vector<vector<int>>v{
        {1,2,3,4,5},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
        {17,18,19,20}
    };
    wavePrintmatrix(v);
    return 0;
}