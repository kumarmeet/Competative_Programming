class MyHashSet
{
public:
    /** Initialize your data structure here. */
    int val{0};
    MyHashSet *next;
    MyHashSet *head;

    MyHashSet()
    {
        head = nullptr;
        next = nullptr;
    }

    void add(int key)
    {
        if(contains(key))
            return;
        else
        {
            MyHashSet *n = new MyHashSet();
            n->val = key;
            if(!head)
                head = n;
            else
            {
                n->next = head;
                head = n;
            }
        }
    }

    void remove(int key)
    {
        MyHashSet *temp = head;
        if(!temp)
            return;
        else if(temp->val == key)
            head = head->next;
        else
        {
            while(temp->next)
            {
                if(temp->next->val==key)
                {
                    temp->next = temp->next->next;
                    return;
                }
                temp = temp->next;
            }
        }
    }

    /** Returns true if this set contains the specified element */
    bool contains(int key)
    {
        MyHashSet *temp = head;
        while(temp)
        {
            if(temp->val == key)
                return true;
            temp = temp->next;
        }
        return false;
    }
};
