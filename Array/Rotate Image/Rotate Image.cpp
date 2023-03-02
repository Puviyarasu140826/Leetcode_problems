class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        reverse(m.begin(),m.end());
        for(int i=0;i<m.size();i++){
            for(int j=i+1;j<m[0].size();j++){
                swap(m[i][j],m[j][i]);
            }
        }
        
    }
};
