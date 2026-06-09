#include <bits/stdc++.h>
using namespace std;

 int longestOnes(vector<int>& nums, int k) {
        int l=0, h=0;
        int maxlen=0;
        int zeroes=0;
        unordered_map<int,int> mpp;
        while(h<nums.size()){
            mpp[nums[h]]++;
            if(nums[h]==0){
                zeroes++;
            }
             while(zeroes>k){
                if(nums[l]==0){
                zeroes--;
            }
                mpp[nums[l]]--;
                l++;
             }
             maxlen = max(maxlen,h-l+1);
             h++;
        }
        return maxlen;
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
        
        cout<<longestOnes(nums,k)<<endl;
        return 0;
        
    }