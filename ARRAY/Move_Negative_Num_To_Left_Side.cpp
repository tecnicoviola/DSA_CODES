#include<iostream>
using namespace std;

void moveallNegToLeft(int a[], int n){
    //DUTCH NATIONAL FLAG
    int l=0, h = n-1;
    while(l<h){
        if(a[l]<0){
            l++;
        }
        else if(a[h]>0){
            h--;
        }
        else{
            swap(a[l],a[h]);
        }
    }
}

int main(){

    int arr[] = {1,2,-3,4,-5,6};
    int n = sizeof(arr)/ sizeof(int);

    moveallNegToLeft(arr,n);

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}