class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& nums) {
        long long result=0;
        double ratio;
        unordered_map<double,double>mp;
        for(int i=nums.size()-1;i>=0;i--){
            ratio=(double)nums[i][0]/(double)nums[i][1];
            if(mp.find(ratio)!=end(mp))
                result+=mp[ratio];
                mp[ratio]++;
            
        }
        return result;
    }
};
