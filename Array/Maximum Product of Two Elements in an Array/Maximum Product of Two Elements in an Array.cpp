class Solution {
public:
    int maxProduct(vector<int>& v) {
        sort(v.begin(),v.end());
        int i=v.size()-1;
        int j=v.size()-2;
        return (v[i]-1)*(v[j]-1);
    }
};
