int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) 
{
  int flag;
  int cnt{0};

  if(ruleKey == "type")
    flag = 0;
  else if(ruleKey == "color")
    flag = 1;
  else
    flag = 2;

  for (int i = 0; i < items.size(); i++)
  {
    if(items[i][flag] == ruleValue)
      cnt++;
  }

  return cnt;
}
