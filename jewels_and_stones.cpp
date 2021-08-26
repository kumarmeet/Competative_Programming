#include <bits/stdc++.h>

using namespace std;

int numJewelsInStones(string jewels, string stones)
{
  int hash[256] = {0};
  for (int k = 0; stones[k]; k++)
    hash[stones[k]]++;

  int count{0};

  for (int i = 0; jewels[i]; i++)
    count += hash[jewels[i]];

  return count;
}

int main()
{
  string jewels = "ebd";
  string stones = "bbb";
  int num = numJewelsInStones(jewels, stones);
  cout << num;
  return 0;
}
