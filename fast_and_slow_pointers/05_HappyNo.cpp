#include <bits/stdc++.h>
using namespace std;

int digiSum(int n){
        int sum=0;
        while(n>0){
            int d=n%10;
            sum+=d*d;
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n){
        int slow=n,fast=n;
        while(fast!=1){
            slow=digiSum(slow);
            fast=digiSum(fast);
            fast=digiSum(fast);
            if(slow==fast && slow!=1){
                return false;
            }
        }
        return true;
    }

    int main(){
        int n;
        cin>>n;

        cout<<isHappy(n)<<endl;
        return 0;
    }