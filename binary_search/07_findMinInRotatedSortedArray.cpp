#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int>& nums) {
        int low=0, high = nums.size()-1;
        while(low<high){
            int mid= low + (high-low)/2;
            if(nums[mid]<nums[high]){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return nums[low];
    }

    int main(){
        int n;
        cin>>n;

        vector<int> nums(n);
        for(int i=0;i<n;++i){
            cin>>nums[i];
        }

        cout<<findMin(nums)<<endl;
        return 0;
    }