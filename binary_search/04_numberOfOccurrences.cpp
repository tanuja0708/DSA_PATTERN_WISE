#include <bits/stdc++.h>
using namespace std;

int countFreq(vector<int>& arr, int target) {
        // code here
        int low = 0, high = arr.size()-1;
        int count=0;
        while(low<=high){
            int mid = low +(high-low)/2;
            
            if(arr[mid]==target){
                int l1 = low, r1=mid;
                int minI=mid ,maxI=mid;
                while(l1<=r1){
                    int mid1 = l1 + (r1-l1)/2;
                    if(arr[mid1]==target){
                        minI = mid1;
                        r1 = mid1-1;
                    }else{
                        l1=mid1+1;
                    }
                }
                int l2=mid, r2=high;
                while(l2<=r2){
                    int mid2 = l2 +(r2-l2)/2;
                    if(arr[mid2]==target){
                        maxI = mid2;
                        l2 = mid2+1;
                    }else{
                        r2 = mid2-1;
                    }
                }
                count= maxI - minI +1;
                return count;
            }
            else if(arr[mid]>target){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return count;
    }

    int main(){
        int n;
        cin>>n;

        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int target;
        cin>>target;

        cout<<countFreq(arr,target)<<endl;
        return 0;
    }