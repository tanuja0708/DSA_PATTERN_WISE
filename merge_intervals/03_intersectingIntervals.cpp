#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> ans;
        int i=0,j=0;

        while(i<firstList.size() && j<secondList.size()){
            int start1 = firstList[i][0];
            int end1 = firstList[i][1];
            int start2 = secondList[j][0];
            int end2 = secondList[j][1];
            if(start1<=start2){
                if(end1>=start2){
                    int s=max(start1,start2);
                    int e=min(end1,end2); 
                    ans.push_back({s,e});
                }
            }else{
                if(end2>=start1){
                    int s=max(start1,start2);
                    int e=min(end1,end2); 
                    ans.push_back({s,e});
                }
            }
            if(end1<=end2){
                i++;
            }else{
                j++;
            }  
        }
        return ans;
    }
    
    int main() {
    int n,m;
    cin >> n>>m;

    vector<vector<int>> firstList(n, vector<int>(2));

    for (int i = 0; i < n; i++) {
        cin >> firstList[i][0] >> firstList[i][1];
    }

     vector<vector<int>> secondList(m, vector<int>(2));

    for (int i = 0; i < m; i++) {
        cin >> secondList[i][0] >> secondList[i][1];
    }


    vector<vector<int>> ans = intervalIntersection(firstList, secondList);

    for (auto &interval : ans) {
        cout << interval[0] << " " << interval[1] << endl;
    }

    return 0;
}