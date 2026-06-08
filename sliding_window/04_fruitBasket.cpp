#include <bits/stdc++.h>
using namespace std;

int totalFruit(vector<int>& fruits) {
        int l=0,h=0;
        int maxFruit=INT_MIN;
        unordered_map<int,int> freq;
        while(h<fruits.size()){
            freq[fruits[h]]++;
            while(freq.size()>2){
                freq[fruits[l]]--;
                l++;
                if(freq[fruits[l-1]]==0){
                    freq.erase(fruits[l-1]);
                }
            }
            if(freq.size()<=2){
                maxFruit = max(maxFruit,h-l+1);
            }
            h++;
        }
        return maxFruit;
    }

    int main(){
        int n;
        cin>>n;
        vector<int> fruits(n);
        for(int i=0;i<n;i++){
            cin>>fruits[i];
        }

        cout<<totalFruit(fruits)<<endl;
        return 0;
    }