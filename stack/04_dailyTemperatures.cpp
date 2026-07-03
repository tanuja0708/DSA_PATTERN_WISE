#include <bits/stdc++.h>
using namespace std;

vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n= temperatures.size();
        vector<int> ans(n);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && temperatures[st.top()]<=temperatures[i]){
                st.pop();
            }
            if(st.empty()) ans[i]=0;
            else{
                ans[i]=st.top()-i;
            }
            st.push(i);
        }
        return ans;
    }

int main(){
    int n;
    cin>>n;

    vector<int> temperatures(n);
    for(int i=0;i<n;i++){
        cin>>temperatures[i];
    }

    vector<int>ans=dailyTemperatures(temperatures);

    for(int x:ans) {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}