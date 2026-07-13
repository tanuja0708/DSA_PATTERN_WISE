#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
        int low = 0, high= nums.size()-1;
        while(low<high){
            int mid= low +(high-low)/2;
            if(nums[mid]<nums[high]){
                high=mid;
            }else{
                low=mid+1;
            }
        }
        int pivot=low;
        int l1=0, r1= pivot-1;
        while(l1<=r1){
            int mid1 =l1 +(r1-l1)/2;
            if(nums[mid1]==target){
                return mid1;
            }else if(nums[mid1]>target){
                r1=mid1-1;
            }else{
                l1=mid1+1;
            }
        }
        int l2=pivot, r2= nums.size()-1;
        while(l2<=r2){
            int mid2 =l2 +(r2-l2)/2;
            if(nums[mid2]==target){
                return mid2;
            }else if(nums[mid2]>target){
                r2=mid2-1;
            }else{
                l2=mid2+1;
            }
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

        int target;
        cin>>target;

        cout<<search(nums,target)<<endl;
        return 0;
    }