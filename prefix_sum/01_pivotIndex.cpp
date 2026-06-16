#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int>& nums) {
        int left = 0;
        int right;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int idx;
        bool tick = false;
        for(int i=0;i<nums.size();i++){
            right = sum-nums[i]-left;
            if(left==right){
                return i;
            }
            left+=nums[i];
        }
        return -1;
    }

    int main(){
        int n;
        cin>>n;

        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }

        cout<<pivotIndex(nums)<<endl;
        return 0;
    }