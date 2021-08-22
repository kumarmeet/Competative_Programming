ListNode *reverseList(ListNode *head)
{
  if (head)
  {
    //sliding pointers concept
    ListNode *r, *q, *p = head;
    r = q = nullptr;
    while (p)
    {
      r = q;
      q = p;
      p = p->next;
      q->next = r;
    }
    head = q;
  }
  return head;
}
