#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
        int i=0,j=0, k = nums.size()-1;
        while(j<=k){
            if(nums[j]==2){
                swap(nums[j],nums[k]);
                k--;
            }else if(nums[j]==0){
                swap(nums[i],nums[j]);
                i++;
                j++;
            }else if(nums[j]==1){
                j++;
            }
        }
    }

    int main(){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        sortColors(nums);
        for(int x: nums){
            cout<<x<<" ";
        }
        cout<<endl;
        return 0;

    }