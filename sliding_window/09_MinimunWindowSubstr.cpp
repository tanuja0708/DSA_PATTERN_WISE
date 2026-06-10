#include <bits/stdc++.h>
using namespace std;

bool present(vector<int>&have ,  vector<int> &need){
        for(int i=0;i<256;i++){
            if(have[i]<need[i]){
                return false;
            }
        }
        return true;
    }
    string minWindow(string s, string t) {
        int l=0, h=0;
        int start=-1;
        int res = INT_MAX;
        vector<int> have(256,0);
        vector<int> need(256,0);
        for(int i=0;i<t.size();i++){
            need[t[i]]++;
        }
        while(h<s.size()){
            have[s[h]]++;
            while(present(have,need)){
                int len = h-l+1;
                if(res>len){
                    res=len;
                    start=l;
                }
                have[s[l]]--;
                l++;
            }
            h++; 
        }
        return (res==INT_MAX)?"":s.substr(start,res);
    }

    int main(){
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        string t;
        cin>>t;

        cout<<minWindow(s,t)<<endl;
        return 0;
    }