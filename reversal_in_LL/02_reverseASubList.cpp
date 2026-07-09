#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* dummy= new ListNode(0);
        dummy->next=head;
        ListNode* prev = dummy;
        ListNode* t =head;
        int pos=1;
        while(pos<left){
            prev=t;
            t=t->next;
            pos++;
        }
        ListNode* curr =t;//prev->next;
        int times = right-left;
        while((times--)) {
            ListNode* temp =prev->next;
            prev->next=curr->next;
            curr->next=curr->next->next;
            prev->next->next=temp;
        }
        return dummy->next;;
    }

    int main(){
        ListNode* head = new ListNode(5);
       head->next = new ListNode(2);
       head->next->next = new ListNode(13);
       head->next->next->next = new ListNode(3);
       head->next->next->next->next = new ListNode(8);
       int left;
       cin>>left;
       int right;
       cin>>right;


       ListNode* ans = reverseBetween(head,left,right);

       while (ans != NULL) {
            cout << ans->val << " ";
            ans = ans->next;
       }
    return 0;
    }