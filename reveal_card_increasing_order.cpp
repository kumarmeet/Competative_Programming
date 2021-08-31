vector<int> deckRevealedIncreasing(vector<int> a)
{
    sort(a.begin(),a.end());
    deque<int> Q;
    for(int i = 0; i < a.size(); i++)
        Q.push_back(i);

    vector<int> pos;

    while(!Q.empty())
    {
        pos.push_back(Q.front());
        Q.pop_front();
        if(Q.empty())
            break;
        int now = Q.front();
        Q.pop_front();
        Q.push_back(now);
    }

    vector<int> ans(a.size());

    for(int i = 0; i < a.size(); i++)
        ans[pos[i]] = a[i];

    return ans;
}
