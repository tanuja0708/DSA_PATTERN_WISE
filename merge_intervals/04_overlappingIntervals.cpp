#include <bits/stdc++.h>
using namespace std;

bool isIntersect(vector<vector<int>> intervals) {
        // Code Here
        sort(intervals.begin(),intervals.end());
        int start1=intervals[0][0];
        int end1=intervals[0][1];
        bool tick =false;
        for(int i=1;i<intervals.size();i++){
            int start2=intervals[i][0];
            int end2=intervals[i][1];
            if(end1>=start2){
                tick =true;
                break;
            }else{
                start1=start2;
                end1=end2;
            }
        }
        if(tick){
            return true;
        }else{
            return false;
        }
    }

     int main(){
        int n;
        cin>>n;

        vector<vector<int>> intervals(n);
        for(int i=0;i<n;i++) {
             cin>>intervals[i][0]>>intervals[i][1];
        }

        cout<<isIntersect(intervals);
        

        return 0;

    }