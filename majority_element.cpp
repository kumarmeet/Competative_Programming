 int majorityElement(vector<int>& nums) {
       int majority = 0;
       int cnt = 1;
    
    //2 2 1 1 1 2 2
    
    for(int i = 1; i < nums.size(); i++) {
        if(nums[i] == nums[majority]) {
            cnt++;
        } else {
            cnt--;
        }

        if(cnt == 0) {
            majority = i;
            cnt = 1;
        }

    }

    return nums[majority];
    }
