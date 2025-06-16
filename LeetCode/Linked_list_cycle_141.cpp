#include <bits/stdc++.h>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(nullptr) {}
  };

// time complexity O(n) & space complexity O(n)
class Solution {
public:
    bool hasCycle(ListNode* head) {
        unordered_set<ListNode*> seen;
        ListNode* cur = head;
        while (cur) {
            if (seen.find(cur) != seen.end()) {
                return true;
            }
            seen.insert(cur);
            cur = cur->next;
        }
        return false;
    }
};
// time complexity O(n) & space complexity O(1)
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *fast=head;
        ListNode *slow=head;
        while(fast!=nullptr && fast->next!=nullptr){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow) return true;
        }
        return false;
    }
};