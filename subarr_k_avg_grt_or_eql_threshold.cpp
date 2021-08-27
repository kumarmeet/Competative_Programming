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
        if((sum / k) >= threshold)
          total.push_back(sum / k);
        sum -= arr[i];
        i++; 
      } 
      j++;
  }
  return total.size();
}

int main()
{
  vector<int> v{11,13,17,23,29,31,7,5,2,3};
  double num = numOfSubarrays(v, 3, 5);
  cout << num;
  return 0;
}
