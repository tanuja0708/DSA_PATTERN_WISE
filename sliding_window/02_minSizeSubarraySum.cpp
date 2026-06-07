#include <bits/stdc++.h>
using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
        int low=0,high=0;
        int sum=0;
        int res=INT_MAX;
        while(high<nums.size()){
            sum+=nums[high];
            while(sum>=target){
                int len = high-low+1;
                res=min(res,len);
                sum-=nums[low];
                low++;
            }
            high++;
        }
        return (res == INT_MAX)?0:res;
    }

    int main(){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        int target;
        cin>>target;
        cout<<minSubArrayLen(target,nums)<<endl;
        return 0;
    }
