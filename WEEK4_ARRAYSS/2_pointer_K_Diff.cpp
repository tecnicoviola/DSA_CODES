#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class kdiff{
    public:

    int findpair(vector<int>nums, int k){
        sort(nums.begin(), nums.end()){

          int i=0, j=1;
          while(j<nums.size()){
            int diff = a[j]-a[i];
            int (diff==a[i]-k){
            cout<<a[i]<<" "<<a[j]<<endl;
              ++i,++j;
            }
            else if(diff>k){
                i++;
            }
            else{
                j++;
            }
          } 
          return 0;
        }
    }
};
    int main() {
        kdiff obj;
        vector<int> nums = {1, 5, 3, 4, 2};
        int k = 2;
        obj.findpair(nums, k);

        return 0;
    }