#include <bits/stdc++.h>
using namespace std;

bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> freqA;
        for(int i=0;i<ransomNote.size();i++){
            freqA[ransomNote[i]]++;
        }
        unordered_map<char,int> freqB;
        for(int i=0;i<magazine.size();i++){
            freqB[magazine[i]]++;
        }
        bool tick = true;
        for(int i=0;i<ransomNote.size();i++){
            if(freqA[ransomNote[i]]>freqB[ransomNote[i]]){
                tick =false;
                break;
            }
        }
        if(tick)  return true;
        else
        return false;
    }

    int main(){
        string ransomNote;
        cin>>ransomNote;
        string magazine;
        cin>>magazine;

        cout<<canConstruct(ransomNote,magazine)<<endl;
        return 0;
    }