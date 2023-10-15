#include<iostream>
using namespace std;

int main(){

    vector<int>arr{5,4,3,2,1};
    int n = arr.size();

    for(int i = 0; i<n-1; i++){

        for(int j = i+1; j<n; j++){
            if(arr[j]< arr[j+1]){

               int minindex = j;
            }
        }

        swap(arr[i], arr[minindex]);
    }
    
     for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }cout << endl;

  return 0;
}
