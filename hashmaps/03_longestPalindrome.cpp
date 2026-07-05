#include <bits/stdc++.h>
using namespace std;

int longestPalindrome(string s) {
        unordered_map<char,int> freq;
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
        }
        int count=0;
        int maxM=0;
        for(auto it: freq){
            if(it.second%2==0){
                count+=it.second;
            }else{
                maxM+= (it.second-1);
            }
        }
        int sum = count+maxM;
        return sum+1;
    }

    int main(){
        string s;
        cin>>s;

        cout<<longestPalindrome(s)<<endl;
        return 0;
    }