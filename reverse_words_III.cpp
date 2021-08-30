string reverseWords(string s) {
  vector<string> v;

  string t;
  int i = 0;

  while(i < s.length())
  {
    while(s[i] != ' ' && s[i] != '\0')
      t += s[i++];
    v.push_back(t);
    t.clear();
    i++;
  }

  for (int i = 0; i < v.size(); i++)
    reverse(v[i].begin(), v[i].end());

  for (int i = 0; i < v.size(); i++)
    {
      t += v[i] + " ";
    }
    t.pop_back();
    return t;
}
