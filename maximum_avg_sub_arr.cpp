#include<bits/stdc++.h>

using namespace std;

double findMaxAverage(vector<int>& nums, int k) 
{
  int i = 0,j = 0;
  double sum = 0;
  double ans = INT_MIN;
  int n = nums.size();
  
  while(j < n)
  {
      sum += nums[j];

      if(j - i + 1 == k)
      {  
        ans = max(sum,ans);
        sum -= nums[i];
        i++; 
      } 

      j++;
  }
    return (ans / k);
}

// double findMaxAverage(vector<int>& nums, int k) 
// {
//   double sum = 0;
//   for(int i = 0; i < k; i++)
//         sum += nums[i];

//   double res = sum;

//   for(int i = k; i  <nums.size(); i++){
//       sum += nums[i] - nums[i - k];
//         res = max(res,sum);
//   }
//     return res / k;
// }

int main()
{
  vector<int> v{1,12,-5,-6,50,3};
  double avg = findMaxAverage(v, 4);
  cout << avg;
  return 0;
}

