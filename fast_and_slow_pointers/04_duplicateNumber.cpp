#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

int findDuplicate(vector<int>& nums) {
        int slow=0,fast=0;
        while(true){
            slow=nums[slow];
            fast=nums[fast];
            fast=nums[fast];
            if(slow==fast){
                slow=0;
                while(slow!=fast){
                    slow=nums[slow];
                    fast=nums[fast];
                }
                return slow;
            }
        }
        return -1;
    }

    int main() {
    vector<int> nums = {1, 3, 4, 2, 2};

    cout << findDuplicate(nums) << endl;

    return 0;
}