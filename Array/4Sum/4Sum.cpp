
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        long long target1=target;
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        vector<vector<int>>output;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
            int c=j+1;
            int k=nums.size()-1;
            while(c<k){
                long long int sum=nums[i];
                sum+=nums[j];
                sum+=nums[c];
                sum+=nums[k];
                if(sum==target1){
                    s.insert({nums[i],nums[j],nums[c],nums[k]});
                    c++;
                    k--;
                }
                    else if(sum<target1){
                        c++;
                    }
                    else k--;
            }
            }
        }
        for(auto i:s)
        output.push_back(i);
        return output;
    }
};
