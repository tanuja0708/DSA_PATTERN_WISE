#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mpp;
        int l=0,h=0;
        int maxlen=0;
        while(h<s.size()){
            mpp[s[h]]++;
            while(mpp[s[h]]>1){
                mpp[s[l]]--;
                l++;
                if(mpp[s[l-1]]==0){
                    mpp.erase(s[l-1]);
                }
            }
                maxlen= max(maxlen,h-l+1);
            h++;
        }
        return maxlen;
    }

    int main(){
        int n;
        cin>>n;
        string s;
        cin>>s;

        cout<<lengthOfLongestSubstring(s)<<endl;
        return 0;
    }