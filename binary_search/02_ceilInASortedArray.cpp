#include <bits/stdc++.h>
using namespace std;

int findCeil(vector<int>& arr, int x) {
        // code here
        int low=0, high = arr.size()-1;
        int idx=INT_MAX;
        bool tick = false;
        while(low<=high){
            int mid =(low+high)/2;
            
            if(arr[mid]>=x){
                idx = min(idx,mid);
                high=mid-1;
                tick=true;
            }else{
                low=mid+1;
            }
        }
        if(tick){
            return idx;
        }else{
            return -1;
        } 
    }

    int main(){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int x;
        cin>>x;
        cout<<findCeil(arr,x)<<endl;
        return 0;
    }