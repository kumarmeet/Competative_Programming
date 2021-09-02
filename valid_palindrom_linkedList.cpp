    bool isPalindrome(ListNode* head) {
        vector<int> v;
        ListNode *t = head;
        while(head)
        {
            v.push_back(head->val);
            head = head->next;
        }
        reverse(v.begin(), v.end());
        int i = 0;
        int flag;
        while(t)
        {
            if(v[i++] == t->val)
                flag = 1;
            else
            {
                flag = 0;
                break;
            }
            t = t->next;
        }
        if(flag)
            return true;
        return false;
    }
