string restoreString(string s, vector<int>& indices) 
{
  int len = s.length();
  string newStr(len,' ');
  int i{0};

  while(i < len)
    {
      newStr[indices[i]] = s[i];
      i++;
    }

  return newStr;
}
