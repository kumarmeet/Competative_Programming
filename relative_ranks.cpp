#include <bits/stdc++.h>

using namespace std;

vector<string> findRelativeRanks(vector<int> &score)
{
    vector<string> str{"Gold Medal", "Silver Medal", "Bronze Medal"};
    vector<string> v(score.size());
    priority_queue<int> pq;

    for (int i = 0; i < score.size(); i++)
        pq.push(score[i]);

    int j{0}, position{0};

    while (pq.size() > 0)
    {
        for (int k = 0; k < score.size(); k++)
        {
            if (pq.top() == score[k] && position >= 1 && position <= 3)
            {
                v[k] = str[j++];
                pq.pop();
                break;
            }
            else if (pq.top() == score[k] && position >= 3)
            {
                string s = to_string(position);
                v[k] = s;
                pq.pop();
                break;
            }
        }
        position++;
    }
    return v;
}

int main()
{
    vector<int> score{1, 2, 9};
    vector<string> place = findRelativeRanks(score);

    for (int i = 0; i < place.size(); i++)
        cout << place[i] << " ";
    return 0;
}
