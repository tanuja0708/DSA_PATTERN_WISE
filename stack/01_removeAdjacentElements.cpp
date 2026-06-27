#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s) {
        stack<char> st;
        string a;

        for(int i=0;i<s.size();i++){
            if(!st.empty() && s[i]==st.top()){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            char c=st.top();
            st.pop();
            a.push_back(c);
        }
        reverse(a.begin(),a.end());
        return a;
    }

    int main(){
        string s;
        cin>>s;

        cout<<removeDuplicates(s)<<endl;
        return 0;
        
    }