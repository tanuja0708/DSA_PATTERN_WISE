#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums) {
        int left= 0, right= 1;
        while(right<nums.size()){
            if(nums[left]==nums[right]){
                right++;
            }else{
                left++;
                nums[left]=nums[right];
                right++;
            }
        }
        int uniqueCount=left+1;
        return uniqueCount;    
    }

    int main(){
        int n;
        cin>>n;
         vector<int> nums(n);
         for(int i=0;i<n;i++){
            cin>>nums[i];
         }
         cout<<removeDuplicates(nums)<<endl;
         return 0;

    }