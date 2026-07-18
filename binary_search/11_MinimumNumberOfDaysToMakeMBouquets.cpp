#include <bits/stdc++.h>
using namespace std;

int noOfBouquets(vector<int>& bloomDay,int mid, int k){
        int count=0;
        int bouq=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid && count!=k){
                count++;
            }else{
                count=0;
            }

            if(count==k){
                bouq++;
                count=0;
            }
        }
        return bouq;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n= bloomDay.size();
        int maxN=0;
        int res=-1;
        int minN=INT_MAX;
        for(int i=0;i<n;i++){
            maxN = max(maxN , bloomDay[i]);
            minN = min(minN , bloomDay[i]);
        }
        int low = minN, high = maxN;

        while(low<=high){
            int mid = low + (high-low)/2;
            int bouquet = noOfBouquets(bloomDay,mid,k);

            if(bouquet>=m){
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
        vector<int> bloomDay(n);
        for(int i=0;i<n;i++){
            cin>>bloomDay[i];
        }
        int m,k;
        cin>>m>>k;

        cout<<minDays(bloomDay,m,k)<<endl;
        return 0;
    }
