//  https://leetcode.com/problems/reorder-list/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head) return;
        ListNode* cur = head,*last,*temp;
        temp = head;
        while(temp->next){
            temp = temp->next;
        }
        last = temp;
        while(cur->next && cur->next!=last){
            ListNode* nex = cur->next;
            cur->next = last;
            last->next = nex;
            cur = nex;
            temp = nex;
            while(temp->next!=last){
                temp = temp->next;
                if(!temp || !temp->next) break;
            }
            last = temp;
            last->next = nullptr;
        }
    }
};
