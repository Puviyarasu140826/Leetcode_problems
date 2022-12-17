class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto i:nums)
        m[i]=1;
        for(int i=0;i<=nums.size();i++)
        {
            {
                if(m[i]==0)
                return i;
            }
        }
        return 0;
    }
};
