#include <bits/stdc++.h>

using namespace std;

int findDuplicate(vector<int> &);

int main()
{
    vector<int> v{2, 2, 2, 2};
    int missing_number = findDuplicate(v);
    cout << missing_number;
    return 0;
}

int findDuplicate(vector<int> &nums)
{
    int size = nums.size();
    vector<int> count(size, 0);

    for (int i = 0; i < size; i++)
        count[nums.at(i)]++;

    for (int i = 0; i < size; i++)
        if (count[i] > 1)
            return i;
}
