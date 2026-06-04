#include <bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int left=i+1, right= nums.size()-1;
            while(left<right){
                int sum = nums[i]+nums[left]+nums[right];
                if(sum<target){
                    left++;
                    ans.push_back(sum);
                }else{
                    right--;
                    ans.push_back(sum);
                }
            }
        }
        int minM=INT_MAX;
        int val;
        for(int i=0;i<ans.size();i++){
            int diff=abs(ans[i]-target);
            if(diff<minM){
                minM=diff;
                val=ans[i];
            }
        }
        return val;
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

        cout<<threeSumClosest(nums,target)<<endl;
        return 0;
    }