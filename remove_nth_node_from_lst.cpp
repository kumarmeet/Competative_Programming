ListNode* removeNthFromEnd(ListNode* head, int n)
{
    ListNode *t{head}, *r{head};
    for(int i = 0; i < n; ++i)
      t = t->next;
    if(t == nullptr)
        return head->next;
    while(t->next)
    {
        r = r->next;
        t = t->next;
    }
    r->next = r->next->next;
    return head;
}
