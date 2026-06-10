#include <bits/stdc++.h>
using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,h=0;
        int minLen=INT_MAX;
        int sum=0;
        while(h<nums.size()){
            sum+=nums[h];
            while(sum>=target){
                int len = h-l+1;
                minLen = min(minLen,h-l+1);
                sum-=nums[l];
                l++;
            }  
            h++; 
        }
        return (minLen==INT_MAX)? 0 : minLen;
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