class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& item1, vector<vector<int>>& item2) {
        map<int,int>mp;
        for(auto x:item1) mp[x[0]]+=x[1];
        for(auto x:item2) mp[x[0]]+=x[1];
        vector<vector<int>>ans;
        for(auto i:mp){
            ans.push_back({i.first,i.second});
        }
        return ans;
    }
};
