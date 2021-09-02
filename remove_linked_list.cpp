 ListNode* removeElements(ListNode* head, int val)
{
   ListNode* temp = head;

    while(temp && temp->val == val)
    {
        head = head->next;
        temp = temp->next;
    }

    while(temp && temp->next)
    {
        if(temp->next->val == val)
        {
            temp->next = temp->next->next;
        }
        else temp = temp->next;
    }
    return head;
}
