#include <bits/stdc++.h>
using namespace std;

int find(vector<int> &a){
        int maxc = -1;
        for(int i=0;i<256;i++){
            maxc =max(maxc,a[i]);
        }
        return maxc;
    }

    int characterReplacement(string s, int k) {
        int l=0, h=0;
        vector<int> arr(256,0);
        int maxwindowlen=0;
        while(h<s.size()){
            arr[s[h]]++;
            int windowlength = h-l+1;
            int maxCount = find(arr);
            int diff = windowlength-maxCount;
            while(diff>k){
                arr[s[l]]--;
                l++;
                maxCount =find(arr);
                windowlength = h-l+1;
                diff = windowlength - maxCount;
            }
            windowlength= h-l+1;
            maxwindowlen = max(maxwindowlen,windowlength);
            h++;
        }
        return maxwindowlen;
    }

    int main(){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int k;
        cin>>k;

        cout<<characterReplacement(s,k)<<endl;
        return 0;
    }