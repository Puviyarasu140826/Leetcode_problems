class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==i||nums[i]==i+1||nums[i]==i-1)
            count++;
        }
        if(count==n) return true;
        else 
        return false;
        
    }
};
