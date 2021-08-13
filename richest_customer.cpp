class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int size = accounts.size();
      vector<int> sum_arr;
      int sum{0};

      for (int i = 0; i < size; i++){
        for (int j = 0; j < accounts.at(0).size(); j++){
              sum += accounts.at(i).at(j);
          }
          sum_arr.push_back(sum);
          sum = 0;
      }
      int max = *max_element(sum_arr.begin(), sum_arr.end());

      return max;
    }
};
