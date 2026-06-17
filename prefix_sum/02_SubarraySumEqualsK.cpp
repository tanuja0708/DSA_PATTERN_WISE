#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
        int n= nums.size();
        unordered_map<int,int> freq;
        freq[0]=1;
        int preSum = 0, count=0;
        for(int i=0;i<n;i++){
            preSum+=nums[i];
            int remove = preSum-k;
            count+=freq[remove];
            freq[preSum]+=1;
        }
        return count;
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
        cout<<subarraySum(nums,k)<<endl;
        return 0;
    }