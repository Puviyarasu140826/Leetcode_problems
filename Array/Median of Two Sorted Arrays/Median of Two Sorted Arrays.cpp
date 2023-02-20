
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans;
        for(auto i : nums2)
        {
            nums1.push_back(i);
        }
        sort(nums1.begin(),nums1.end());
        if(nums1.size()==1)
        return nums1[0];
        if(nums1.size()==2)
        return (nums1[0]+nums1[1])/2.0;
        int n=nums1.size();
        if(n%2==1)
        {
            ans=nums1[n/2];
            return ans;
        }
    
            ans=(nums1[n/2]+nums1[n/2-1])/2.0;
            return ans;
    
    }
};
