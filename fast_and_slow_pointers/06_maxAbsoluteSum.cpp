#include <bits/stdc++.h>
using namespace std;

int maxAbsoluteSum(vector<int>& nums) {
        int minSum = nums[0];
        int maxSum = nums[0];
        int ans = nums[0];
        for(int i=1;i<nums.size();i++){
            int v1=nums[i];
            int v2 = minSum + nums[i];
            int v3 = maxSum + nums[i];
            minSum = min(v1,min(v2,v3));
            maxSum = max(v1,max(v2,v3));
            ans = max(ans,max(abs(minSum),abs(maxSum)));
        }
        return abs(ans);
    }

    int main(){
        int n;
        cin>>n;

        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }

        cout<<maxAbsoluteSum(nums)<<endl;
        return 0;
    }