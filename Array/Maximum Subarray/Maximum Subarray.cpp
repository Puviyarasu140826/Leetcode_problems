class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curs=0,max_sum=INT_MIN;
        for(auto x:nums){
            if(curs<0) curs=0;
            curs+=x;
            max_sum=max(max_sum,curs);
        }
        return max_sum;
        
    }
};

