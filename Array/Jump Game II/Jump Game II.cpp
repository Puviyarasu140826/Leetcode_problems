class Solution {
public:
    int jump(vector<int>& nums) {
        int fast=0,jump=0,cur=0;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            fast=max(fast,nums[i]+i);
            if(i==cur){
                jump++;
                cur=fast;
            }
        }
       // if(cur>=nums.size()-1)
        return jump;
        //else return -1;
    }
};
