
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int N=0;
        ListNode* tmp=head;
        while(tmp!=nullptr){
            N++;
            tmp=tmp->next;
        }
        if(N-n==0)return head->next;
        tmp=head;
        int i=1;
        while(tmp!=nullptr){
            if(i==N-n){
                tmp->next=tmp->next->next;
            }
            i++;
            tmp=tmp->next;
        }
        return head;
    }
};