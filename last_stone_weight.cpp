#include <bits/stdc++.h>
using namespace std;

int lastStoneWeight(vector<int>& stones) 
{
    priority_queue<int> pq;
    
    for(int i=0; i<stones.size(); i++)
        pq.push(stones[i]);

    while(pq.size()>1)
    {
        int n1 = pq.top();
        pq.pop();

        int n2 = pq.top();
        pq.pop();

        int res = n1 - n2;

        if(res!=0)
            pq.push(res);
    }

    if(pq.empty())
        return 0;

    return pq.top();
}

int main(){
    vector<int> v{7,6,7,6,9};
    int find = lastStoneWeight(v);

    cout << find;
    return 0;
}
