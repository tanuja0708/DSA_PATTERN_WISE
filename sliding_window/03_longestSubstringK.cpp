#include <bits/stdc++.h>
using namespace std;

int longestKSubstr(string &s, int k) {
        // code here
        int l=0,h=0;
        int maxlen=INT_MIN;
        unordered_map<char,int> mpp;
        while(h<s.size()){
            mpp[s[h]]++;
            
            while(mpp.size()>k){
                mpp[s[l]]--;
                l++;
                if(mpp[s[l-1]]==0){
                    mpp.erase(s[l-1]);
                }
            }
            if(mpp.size()==k){
                maxlen= max(maxlen,h-l+1);
            }
            h++;
        }
        return (maxlen==INT_MIN)?-1:maxlen;
    }

    int main(){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int k;
        cin>>k;

        cout<<longestKSubstr(s,k)<<endl;
        return 0;
    }