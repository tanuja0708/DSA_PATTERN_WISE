#include <bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2,-1);
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid= low + (high-low)/2;
            if(nums[mid]==target){
                int minI=mid, maxI =mid;
                int l=low, r=mid;
                while(l<=r){
                    int mid1 = l + (r - l)/2;
                    if(nums[mid1]==target){
                        minI = mid1;
                        r=mid1-1;
                    }else{
                        l=mid1+1;
                    }
                }
                int l2=mid,r2=high;
                while(l2<=r2){
                    int mid2 = l2 + (r2 - l2)/2;
                    if(nums[mid2]==target){
                        maxI = mid2;
                        l2=mid2+1;
                    }else {
                        r2=mid2-1;
                    }
                }
                ans[0]=minI;
                ans[1]=maxI;
                return ans;

            }else if(nums[mid]>target){
                high=mid-1;
            }else{
                low=mid+1;
            }
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

        int target;
        cin>>target;

        for (int x : searchRange(nums, target))
           cout << x << " ";
        cout << endl;
        return 0;
    }