#include <bits/stdc++.h>
using namespace std;

 int smallestSumSubarray(vector<int>& a) {
        // Code here
        int ans=a[0];
        int bestEnd = a[0];
        for(int i=1;i<a.size();i++){
            int v1 = bestEnd + a[i];
            int v2 = a[i];
            bestEnd = min(v1,v2);
            ans = min(ans,bestEnd);
        }
        return ans;
    }

    int main(){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        cout<<smallestSumSubarray(a)<<endl;
        return 0;
    }