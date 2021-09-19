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

ListNode* mergeKLists(vector<ListNode*>& lists) {

    vector<int> val;

    for(auto l : lists) {
        ListNode *n = l;
        while(n) {
            val.push_back(n->val);
            n = n->next;
        }
    }

    sort(val.begin(), val.end());
    int i = 0;

    ListNode *head;
    ListNode *tail;
    head = tail = nullptr;

    while(i < val.size()) {
        ListNode *temp = new ListNode();
        temp->val = val[i];

        if(head){
            tail->next = temp;
        }
        else{
            head = temp;
        }
        tail = temp;
        i++;
    }

    return head;
}
