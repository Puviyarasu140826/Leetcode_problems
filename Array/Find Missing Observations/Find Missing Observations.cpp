class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
    int total =0,m=rolls.size();
    for(auto i: rolls)
    total+=i;
    int missing_sum=mean*(n+m)-total;
    if(missing_sum<n || missing_sum>6*n)
    return{};
    int quo=missing_sum/n,rem=missing_sum%n;
    vector<int>ans(n,quo);
    for(int i=0;i<rem;i++){
        ++ans[i];
    }
      return ans;  
    }
};
