#include <bits/stdc++.h>

using namespace std;

bool checkIfPangram(string sentence)
{
  int hash[123] = {0};
  for (int i = 0; sentence[i]; i++)
    hash[sentence[i]]++;

  for (int i = 97; i <= 122; i++)
    if (hash[i] == 0)
      return false;
  return true;
}

int main()
{
  string s = "leetcode";
  if (checkIfPangram(s))
    cout << "true";
  else
    cout << "false";
  return 0;
}
