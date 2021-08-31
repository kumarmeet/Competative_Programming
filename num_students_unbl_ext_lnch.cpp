int countStudents(vector<int> students, vector<int> sandwiches) 
{
  queue<int> q;

  for(auto &s : students)
    q.push(s);

  int i{0}, cnt{0};
  int temp;
  while(q.size() && cnt < q.size())
  {
    if(sandwiches[i] == q.front())
    {
      q.pop();
      cnt = 0;
      i++;
    }
    else
    {
      temp = q.front();
      q.pop();
      q.push(temp);
      cnt++;
    }
  }
  return q.size();
}
