/**
 * Definition for singly-linked list.*/
struct ListNode {
    int val;
   struct ListNode *next;
};
struct ListNode* create_node(int);

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *n = NULL;
    int sum = 0;

    while(l1 || l2 || sum > 0)
    {
      if(l1)
      {
        sum += l1->val;
        l1 = l1->next;
      }
      if(l2)
      {
        sum += l2->val;
        l2 = l2->next;
      }
      insert_node(&n, sum % 10);
      sum = sum / 10;
    }

    return n;
}

void insert_node(struct ListNode **s, int item)
{
    struct ListNode *t;
    if(!(*s))
        (*s) = create_node(item);
    else
    {
        t = *s;
        while(t->next != NULL)
            t = t->next;
        t->next = create_node(item);
    }
}

struct ListNode* create_node(int item)
{
    struct ListNode *n;
    n = (struct ListNode*)malloc(sizeof(struct ListNode));
    n->val = item;
    n->next = NULL;
    return n;
}
