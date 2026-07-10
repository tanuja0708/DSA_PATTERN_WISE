#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL && head->next==NULL){
            return head;
        }
        ListNode* dummy= new ListNode(0);
        dummy->next=head;
        ListNode* prev= dummy;
        ListNode* curr= dummy->next;
        int count=0;
        ListNode* t= curr;
        while(t!=NULL){
            t=t->next;
            count++;
        }
        while(count>=k){
            int times=k-1;
            while(times!=0){
                ListNode* temp=prev->next;
                prev->next=curr->next;
                curr->next=curr->next->next;
                prev->next->next=temp;
                times--;
            }
            count-=k;
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
       int k;
       cin>>k;

       ListNode* ans = reverseKGroup(head,k);

       while (ans != NULL) {
            cout << ans->val << " ";
            ans = ans->next;
       }
    return 0;
    }