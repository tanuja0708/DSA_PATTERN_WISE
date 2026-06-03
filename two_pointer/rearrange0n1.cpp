#include <bits/stdc++.h>
using namespace std;

void segregate0and1(vector<int> &arr) {
        // code here
        int left=0, right=arr.size()-1;
        while(left<right){
            if(arr[left]==1 && arr[right] == 0){
                swap(arr[left],arr[right]);
                left++;
                right--;
            }else if(arr[left] == 0){
                left++;
            }else if(arr[right] == 1){
                right--;
            }
        }
    }

    int main(){
        int n;
        cin >> n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        segregate0and1(arr);

        for(int x : arr) {
            cout << x << " ";
        }
    }