#include <bits/stdc++.h>
using namespace std;

int maxSubarraySumCircular(vector<int>& nums) {
        int minEnd = nums[0];
        int maxEnd = nums[0];
        int ans = nums[0];
        int sum=nums[0];
        int minRes = nums[0];
        for(int i=1;i<nums.size();i++){
            sum+=nums[i];
            int v1=nums[i];
            int v2=maxEnd+nums[i];
            int v3 = minEnd+nums[i];
            minEnd= min(v1,min(v2,v3));
            maxEnd= max(v1,max(v2,v3));
            ans = max(ans,max(minEnd,maxEnd));
            minRes = min(minRes,minEnd);
        }
        if(ans<0) return ans;
        int left = sum-minRes;
        return max(ans,left);
    }

    int main(){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }

        cout<<maxSubarraySumCircular(nums)<<endl;
        return 0;
    }