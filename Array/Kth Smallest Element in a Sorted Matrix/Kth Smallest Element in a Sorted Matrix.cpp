class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        priority_queue<int,vector<int>>p,q;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                p.push(matrix[i][j]);
                if(p.size()>k)
                p.pop();
            }
        }
        return p.top();
            }
};
