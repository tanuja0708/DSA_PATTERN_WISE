#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* prev = dummy;
        ListNode* curr=dummy->next;
        while(curr!=NULL && curr->next!=NULL){
            ListNode* t=curr->next;
            curr->next=curr->next->next;
            t->next=curr;
            prev->next=t;
            prev=curr;
            curr=curr->next;
        }
        return dummy->next;
    }

    int main(){
        ListNode* head = new ListNode(5);
       head->next = new ListNode(2);
       head->next->next = new ListNode(13);
       head->next->next->next = new ListNode(3);
       head->next->next->next->next = new ListNode(8);


       ListNode* ans = swapPairs(head);

       while (ans != NULL) {
            cout << ans->val << " ";
            ans = ans->next;
       }
    return 0;
    }