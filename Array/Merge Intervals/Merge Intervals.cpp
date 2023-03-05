class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& num) {
        sort(num.begin(),num.end());
        vector<vector<int>>res;
        int first=num[0][0];
        int second=num[0][num[0].size()-1];
        for(int i=0;i<num.size();i++){
            if(second>=num[i][0] || first>=num[i][0]){
                second=max(second,num[i][num[i].size()-1]);
                first=min(first,num[i][0]);
                continue;
            }
            res.push_back({first,second});
            second=num[i][num[i].size()-1];
            first=num[i][0];
        }
        res.push_back({first,second});
        return res;
        
    }
};
