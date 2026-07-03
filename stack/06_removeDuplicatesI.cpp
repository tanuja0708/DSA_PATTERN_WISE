#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s, int k) {
        stack<pair<char,int>> st;
        string t="";
        for(int i=0;i<s.size();i++){
            if(st.empty() || st.top().first!=s[i]){
                st.push({s[i],1});
            }else{
                st.top().second++;
                if(st.top().second==k){
                    st.pop();
                }
            }
        }
        while(!st.empty()){
            while(st.top().second!=0){
                t+=st.top().first;
                st.top().second--;
            }
            st.pop();
        }
        reverse(t.begin(),t.end());
        return t;
    }

    int main(){
        string s;
        cin>>s;

        int k;
        cin>>k;

        cout<<removeDuplicates(s,k)<<endl;
        return 0;
    }