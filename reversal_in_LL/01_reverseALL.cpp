#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

 ListNode* reverseList(ListNode* head) {
        ListNode* curr =head;
        ListNode* prev = NULL;
        ListNode* next = NULL;

        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }

    int main(){
        ListNode* head = new ListNode(5);
       head->next = new ListNode(2);
       head->next->next = new ListNode(13);
       head->next->next->next = new ListNode(3);
       head->next->next->next->next = new ListNode(8);


       ListNode* ans = reverseList(head);

       while (ans != NULL) {
            cout << ans->val << " ";
            ans = ans->next;
       }
    return 0;
    }