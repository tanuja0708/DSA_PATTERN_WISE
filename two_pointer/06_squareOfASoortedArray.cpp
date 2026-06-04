#include <bits/stdc++.h>
using namespace std;


vector<int> sortedSquares(vector<int>& nums) {
        int left=0, right=nums.size()-1;
        vector<int> ans (nums.size());
        int pos = nums.size()-1;
        while(left<=right){
            if(abs(nums[left])>abs(nums[right])){
                ans[pos]=nums[left]*nums[left];
                left++;
            }else{
                ans[pos]=nums[right]*nums[right];
                right--;
            }
            pos--;
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

    vector<int>ans = sortedSquares(nums);
    for(auto it: ans){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}