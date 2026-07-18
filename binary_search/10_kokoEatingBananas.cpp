#include <bits/stdc++.h>
using namespace std;

long long speed(vector<int> &arr , int k){
        long long sum=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]%k==0){
                sum+=(arr[i]/k);
            }else{
                sum = sum + arr[i]/k + 1;
            }
        }
        return sum;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxN=0;
        for(int i=0;i<piles.size();i++){
            maxN = max(maxN ,piles[i]);
        }
        int res=-1;
        int low=1, high = maxN;
        while(low<=high){
            int mid = (low+high)/2;
            long long ans = speed(piles,mid);
            if(ans<=h){
                res=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return res;
    }

    int main(){
        int n;
        cin>>n;
        vector<int> piles(n);
        for(int i=0;i<n;i++){
            cin>>piles[i];
        }
        int k;
        cin>>k;
        cout<<speed(piles,k)<<endl;
        return 0;
    }