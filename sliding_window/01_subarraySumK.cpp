#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int low=0 ,high=k-1;
        int sum=0;
        for(int i=0;i<k;i++){
                sum+=arr[i];
        }
        int res=INT_MIN;
        while(high<arr.size()){
            res= max(res,sum);
            low++;
            high++;
            sum=sum-arr[low-1];
            if(high==arr.size()){
                break;
            }
            sum=sum+arr[high];
        }
        return res;
    }

    int main(){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int k;
        cin>>k;

        cout<<maxSubarraySum(arr,k)<<endl;
    }