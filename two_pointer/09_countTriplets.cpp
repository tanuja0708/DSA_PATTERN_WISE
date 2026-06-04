#include <bits/stdc++.h>
using namespace std;

int countTriplets(int sum, vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        int res=0;
        for(int i=0;i<arr.size()-2;i++){
            int left=i+1, right = arr.size()-1;
            while(left<right){
                int totalSum = arr[i]+arr[left]+arr[right];
                if(totalSum<sum){
                    res+=right-left;
                    left++;
                }else{
                    right--;
                }
            }
        }
        return res;
    }

    int main(){
        int n;
        cin>>n;

        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int sum;
        cin>>sum;

        cout<<countTriplets(sum,arr)<<endl;
        return 0;
        
    }