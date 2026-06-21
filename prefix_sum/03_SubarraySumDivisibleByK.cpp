#include <bits/stdc++.h>
using namespace std;

 int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        int preSum = 0;
        int res=0;
        freq[0]=1;
        for(int i=0;i<nums.size();i++){
            preSum+=nums[i];
            int rem=preSum%k;
            if(rem<0){
                rem+=k;
            }
            res+=freq[rem];
            freq[rem]++;
        }
        return res;
    }

    int main(){
        int n;
        cin>>n;

        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }

        int k;
        cin>>k;

        cout<<subarraysDivByK(nums,k)<<endl;
        return 0;
    }