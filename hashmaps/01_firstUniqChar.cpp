#include <bits/stdc++.h>
using namespace std;


int firstUniqChar(string s) {
        unordered_map<char,int> freq;
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
        }
        
        for(int i=0;i<s.size();i++){
            if(freq[s[i]]==1){
                return i;
                break;
            }
        }
        return -1;
    }


int main(){
    string s;
    cin>>s;

    cout<<firstUniqChar(s)<<endl;

    return 0;
}