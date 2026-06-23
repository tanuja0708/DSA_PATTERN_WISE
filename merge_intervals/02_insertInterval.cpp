#include <bits/stdc++.h>
using namespace std;

 vector<vector<int>> merge(vector<vector<int>>& nums){
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        int start1=nums[0][0];
        int end1=nums[0][1];
        for(int i=0;i<nums.size();i++){
            int start2=nums[i][0];
            int end2=nums[i][1];
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
    };

    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        for(auto &row : intervals){
            ans.push_back(row);
        }
        ans.push_back(newInterval);
        return merge(ans);
    }

     int main() {
    int n;
    cin >> n;

    vector<vector<int>> intervals(n, vector<int>(2));

    for (int i = 0; i < n; i++) {
        cin >> intervals[i][0] >> intervals[i][1];
    }

    vector<int> newInterval(2);
    cin >> newInterval[0] >> newInterval[1];

    vector<vector<int>> ans = insert(intervals, newInterval);

    for (auto &interval : ans) {
        cout << interval[0] << " " << interval[1] << endl;
    }

    return 0;
}