#include<bits/stdc++.h>

using namespace std;

int countGoodSubstrings(string s) 
{
  size_t size = s.length();
  int cnt = 0;
  for(int i = 0; i < (size - 2); i++)
    if( (s[i] != s[i+1]) && (s[i+1] != s[i+2]) && (s[i] != s[i+2]))
            cnt++;
  return cnt;  
}

int main()
{
  string s = "xyzzaz";
  int cnt = countGoodSubstrings(s);
  return 0;
}
