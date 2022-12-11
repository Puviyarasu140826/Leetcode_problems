class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int m=nums.size();
        int i=0;
        for(i=0;i<m-1;i=i+2)
        {
            if(nums[i]==nums[i+1])
                continue;
            else
                return nums[i];
        } 
        return nums[i];
    }
};
