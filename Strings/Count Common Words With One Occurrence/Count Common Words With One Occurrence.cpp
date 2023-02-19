class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int>mp;
        for(auto x:words1){
            if(mp[x]==0) mp[x]=1;
            else if(mp[x]==1) mp[x]=-1;
        }
        for(auto x:words2){
            if(mp[x]==1) mp[x]=2;
            else if(mp[x]==2) mp[x]=-1;
        }
        int count=0;
        for(auto i:mp){
            if(i.second==2)
            count++;
        }
        return count;
        
    }
};
