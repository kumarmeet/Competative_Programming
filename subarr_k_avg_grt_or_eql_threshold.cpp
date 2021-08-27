#include<bits/stdc++.h>

using namespace std;

int numOfSubarrays(vector<int>& arr, int k, int threshold)
{
  int i = 0,j = 0;
  double sum = 0;
  int n = arr.size();
  vector<double> total;

  while(j < n)
  {
      sum += arr[j];

      if(j - i + 1 == k)
      {
        total.push_back(sum / k);
        sum -= arr[i];
        i++; 
      } 
      j++;
  }
  sort(total.begin(), total.end(), greater<double>());
  int count = 0;
  for (int i = 0; i < total.size(); i++)
  {
    if(total[i] >= threshold)
      count++;
    else
      break;
  }
  return count;
}

int main()
{
  vector<int> v{11,13,17,23,29,31,7,5,2,3};
  double num = numOfSubarrays(v, 3, 5);
  cout << num;
  return 0;
}
