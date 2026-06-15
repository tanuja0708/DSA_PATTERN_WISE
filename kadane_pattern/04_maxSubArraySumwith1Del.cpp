#include <bits/stdc++.h>
using namespace std;

int maximumSum(vector<int>& arr) {
        int nodelete = arr[0];
        int onedelete = INT_MIN;
        int ans=arr[0];
        for(int i=1;i<arr.size();i++){
            int prevNoDelete = nodelete;
            int prevOneDelete = onedelete;
            nodelete = max(nodelete+arr[i],arr[i]);
            int v2;
            if(prevOneDelete==INT_MIN){
                v2 = arr[i];
            }
            else{
                v2 = prevOneDelete+arr[i];
            }
            onedelete = max(v2,prevNoDelete);
            ans = max(ans,max(nodelete,v2));
        }
        return ans;
    }

    int main(){
        int n;
        cin>>n;

        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<maximumSum(arr)<<endl;
        return 0;
    }