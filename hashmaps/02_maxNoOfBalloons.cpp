#include <bits/stdc++.h>
using namespace std;

int maxNumberOfBalloons(string text) {
        unordered_map<char,int> have;
        for(int i=0;i<text.size();i++){
            have[text[i]]++;
        }
        string s ="balloon";
        unordered_map<char,int> need;
        for(int i=0;i<s.size();i++){
            need[s[i]]++;
        }
        int minN=INT_MAX;
        for(int i=0;i<s.size();i++){
            int req = have[s[i]]/need[s[i]];
            minN = min(minN,req);
        }
        
        return minN;
    }

    int main(){
        string text;
        cin>>text;

        cout<<maxNumberOfBalloons(text)<<endl;
        return 0;
        
    }