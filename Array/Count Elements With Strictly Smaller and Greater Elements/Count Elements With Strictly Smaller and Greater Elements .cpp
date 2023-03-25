class Solution {
public:
    int countElements(vector<int>& nums) {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
            maxi=max(maxi,i);
            mini=min(mini,i);
        }
        if(maxi==mini)return 0;
        return nums.size()-(mp[maxi]+mp[mini]);
        
    }
};
