bool hasCycle(struct ListNode *head) {

    while (head)
    {
        if(head -> val == 0)
        {
            return true;
        }
        head -> val = 0;
        head = head -> next;
    }
    return false;
}
