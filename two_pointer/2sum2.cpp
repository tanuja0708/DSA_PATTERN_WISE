#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;
        for (int i=0;i<nums.size();i++){
            int otherNo= target-nums[i];
            if(mpp.find(otherNo)!=mpp.end()){
                return {i,mpp[otherNo]};
            }
            mpp[nums[i]]=i;
        }
        return {};
 }

 int main()
{
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int target;
    cin>>target;
    
    vector<int> ans = twoSum(nums,target);
    if(!ans.empty()){
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }else{
        cout<<"No pair found"<<endl;
    }
    
    return 0;
}