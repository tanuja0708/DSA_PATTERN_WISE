#include <bits/stdc++.h>
using namespace std;

int findKRotation(vector<int> &arr) {
        // Code Here
        int low=0, high = arr.size()-1;
        while(low<high){
            int mid= low + (high-low)/2;
            if(arr[mid]<arr[high]){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }

    int main(){
        int n;
        cin>>n;

        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        cout<<findKRotation(arr)<<endl;
        return 0;
    }