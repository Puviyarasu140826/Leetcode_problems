class Solution {
public:
    double average(vector<int>& v) {
        int n=v.size();
        double sum,min,max,avg=0.0;
        for(int i=0;i<n;i++)
        {
            sum+=v[i];
        }
        min=*min_element(v.begin(),v.end());
        max=*max_element(v.begin(),v.end());
        avg=(sum-(min+max))/(n-2);
        return avg;
    }
};
