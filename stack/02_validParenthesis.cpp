#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
        stack<char> st;

        for(int i=0;i<s.size();i++){
            if(!st.empty() && (s[i]==')' && st.top() == '(')){
                st.pop();
            }else if(!st.empty() &&  (s[i]=='}' && st.top() == '{')){
                st.pop();
            }else if(!st.empty() &&  (s[i]==']' && st.top() == '[')){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        if(st.empty()){
            return true;
        }else{
            return false;
        }
    }

    int main(){
        string s;
        cin>>s;

        cout<<isValid(s)<<endl;
        return 0;
    }