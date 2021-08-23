string truncateSentence(string s, int k) 
{
    int l = s.length();
    string ans = "";
    int i = 0, count = 0;

    while(count < k && i < l)
    {
      ans += s[i];
      i++;
      if(s[i] == ' ')
      {
        count++;
      }
    }
    
    return ans;
}
