#include <bits/stdc++.h>
using namespace std;

int minMeetingRooms(vector<int> &start, vector<int> &end) {
        // code here
        sort(start.begin(),start.end());
        sort(end.begin(),end.end());
        int room = 0;
        int res = 0;
        int i=0,j=0;
        while(i<start.size() && j<end.size()){
            if(start[i]<end[j] ){
                room++;
                res=max(res,room);
                i++;
            }else{
                room--;
                j++;
            }
        }
        return res;
    }

    int main() {
    int n;
    cin >> n;

    vector<int> start(n), end(n);

    for (int i = 0; i < n; i++) {
        cin >> start[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> end[i];
    }

    cout << minMeetingRooms(start, end);

    return 0;
}