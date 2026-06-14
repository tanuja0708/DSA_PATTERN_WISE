#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
        int ans=nums[0];
        int bestEnd = nums[0];
        for(int i=1;i<nums.size();i++){
            int v1= bestEnd + nums[i];
            int v2 = nums[i];
            bestEnd = max(v1,v2);
            ans=max(ans,bestEnd);
        }
        return ans;
    }

    int main(){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }

        cout<<maxSubArray(nums)<<endl;
        return 0;
    }