#include <bits/stdc++.h>
using namespace std;

 vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> res;
        int start1=intervals[0][0];
        int end1 = intervals[0][1];
        for(int i=0;i<intervals.size();i++){
            int start2=intervals[i][0];
            int end2 = intervals[i][1];
            if(end1>=start2){
                start1=start1;
                end1=max(end1,end2);
            }else{
                res.push_back({start1,end1});
                start1=start2;
                end1=end2;
            }
            
        }
        res.push_back({start1,end1});
        return res;
    }

    int main(){
        int n;
        cin>>n;

        vector<vector<int>> intervals(n);
        for(int i=0;i<n;i++) {
             cin>>intervals[i][0]>>intervals[i][1];
        }

        vector<vector<int>> ans = merge(intervals);
        for (auto &interval : ans) {
             cout<<interval[0]<<" "<<interval[1]<<endl;
        }

        return 0;

    }