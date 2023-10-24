#include<iostream>
#include<vector>
using namespace std;

int firstocc(vector<int> arr, int target){

    int s=0;
    int e= arr.size()-1;
    int mid = s+(e-s)/2;
    int ans =-1;

    while(s <= e){
        if(arr[mid] == target){
            //ans store
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid]<target){
            s = mid+1;
        }
        else if(arr[mid]>target){
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main(){
    vector<int> v{1, 3, 3, 3, 4, 4, 5, 4, 5, 6, 7};
    int target = 4;

    int ans = firstocc(v, target);
    cout<<"ans is:"<<ans<<endl;

    auto ans2 = lower_bound (v.begin(), v.end(), target);
    cout << "ans2 is " << ans2-v.begin() << endl;
    return 0;
}