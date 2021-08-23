ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
{
  ListNode *temp = new ListNode();
  ListNode *t = temp;

  while(l1 && l2)
  {
    if(l1->val < l2->val)
    {
      t->next = l1;
      l1 = l1->next;
    }
    else
    {
      t->next = l2;
      l2 = l2->next;
    }
    t = t->next;
  }
  while(l1)
  {
    t->next = l1;
    l1 = l1->next;
    t = t->next;
  }
  while(l2)
  {
    t->next = l2;
    l2 = l2->next;
    t = t->next;
  }
  return temp->next;
}

ListNode* recursiveMergeTwoLists(ListNode* l1, ListNode* l2) 
{
  if(!l1) return l2;
  if(!l2) return l1;

  if(l1->val < l2->val)
    {
      l1->next = mergeTwoLists(l1->next, l2);
      return l1;
    }
  else
    {
      l2->next = mergeTwoLists(l1, l2->next);
      return l2;
    }
}
