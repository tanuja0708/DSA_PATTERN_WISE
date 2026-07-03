#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

 ListNode* removeNodes(ListNode* head) {
        stack<ListNode*> st;
        ListNode* curr=head;
        while(curr!=NULL ){
            st.push(curr);
            curr=curr->next;
        }
        curr=st.top();
        st.pop();
        int max = curr->val;
        ListNode* resultList =new ListNode(max);
        while(!st.empty()){
            curr=st.top();
            st.pop();
            if(curr->val < max){
                continue;
            }else{
                ListNode* newNode = new ListNode(curr->val);
                newNode->next = resultList;
                resultList = newNode;
                max = curr->val;
            }
        }
        return resultList;
    }

int main(){
        ListNode* head = new ListNode(5);
       head->next = new ListNode(2);
       head->next->next = new ListNode(13);
       head->next->next->next = new ListNode(3);
       head->next->next->next->next = new ListNode(8);


       ListNode* ans = removeNodes(head);

       while (ans != NULL) {
            cout << ans->val << " ";
            ans = ans->next;
       }
    return 0;
    }

    