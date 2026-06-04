#include <bits/stdc++.h>
using namespace std;

string twoSum(vector<int>& nums, int target) {
    sort(nums.begin(),nums.end());
    int left=0, right= nums.size()-1;
    while(left<right){
        int twosum= nums[left]+nums[right];
        if(twosum<target){
            left++;
        }else if(twosum>target){
            right--;
        }else{
            return "YES";
        }
    }
    return "NO";
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
    
    cout<<twoSum(nums,target);
    
    return 0;
}