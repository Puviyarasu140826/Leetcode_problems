
class Solution {
public:
    int search(vector<int>& nums, int k) {
        int l=0,h=nums.size()-1;
        while(l<h){
        int mid=(l+h)/2;
        if(nums[mid]==k) return mid;
        if(nums[l]<=nums[mid]){
            if(k>=nums[l]&&k<nums[mid]) h=mid-1;
            else l=mid+1;
        }
        else {
            if(k<=nums[h]&&k>nums[mid]) l=mid+1;
            else h=mid-1;
        }
        
        }
        if(nums[l]==k) return l;
        else return -1;
        
    }
};
