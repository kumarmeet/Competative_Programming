int balancedStringSplit(string s) {
        int r{0}, l{0}, cnt{0};
        
        for(auto &str: s){

            if(str == 'R')
                r++;
            
            if(str == 'L')
                l++;
            
            if(r == l)
                cnt++;
        }
        return cnt;
    }
