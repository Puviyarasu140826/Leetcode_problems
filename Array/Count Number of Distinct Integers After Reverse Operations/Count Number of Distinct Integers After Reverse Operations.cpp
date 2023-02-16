
class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int>numsset{begin(nums),end(nums)};
        for(auto i:nums){
            numsset.insert(reverse(i));
        }
        return numsset.size();
        }
        int reverse(int num){
            int ans=0;
            while(num>0){
                ans=ans*10+num%10;
                num=num/10;
            }
            return ans;
        }
};
