class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int ans=0,count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                ans=abs(nums[i]-nums[j]);
                if(ans==k) count++;
            }
        }
       return count; 
    }
};
