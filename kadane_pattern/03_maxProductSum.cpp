#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums) {
        int n = nums.size();
        long long prefix = 1;
        int ans=INT_MIN;
        long long suffix = 1;
        if(n==1){
            return nums[0];
        }else{
            for(int i=0;i<n;i++){
               if(prefix==0)  prefix=1;
               if(suffix==0)   suffix=1;
               prefix = prefix*nums[i];
               suffix = suffix*nums[n-i-1];
               
               ans = max(ans,(int)max(prefix,suffix));
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

        cout<<maxProduct(nums)<<endl;
        return 0;
    }