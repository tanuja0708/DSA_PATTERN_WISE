#include <bits/stdc++.h>
using namespace std;

int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> freq;
        int one =0;
        int zero=0;
        int res=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zero++;
            }else{
                one++;
            }
            int diff = zero-one;
            if(diff==0){
                res=max(res,i+1);
                continue;
            }
            if(freq.find(diff)==freq.end()){
                freq[diff]=i;
            }
            else{
                int idx=freq[diff];
                int len = i-idx;
                res=max(res,len);
            }
        }
        return res;
    }

    int main(){
        int n;
        cin>>n;

        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }

        cout<<findMaxLength(nums)<<endl;
        return 0;
    }