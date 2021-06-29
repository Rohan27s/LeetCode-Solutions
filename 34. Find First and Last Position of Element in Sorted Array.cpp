class Solution {
public:
 vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int l=0,r=nums.size()-1,result=INT_MAX;
        while(l<=r)
        {
            int m=l+(r-l)/2;
            if(nums[m]==target)
            {
                result=m;
                r=m-1;
            }
            else if(nums[m]<target) l=m+1;
            else r=m-1;
        }
        ans.push_back(result!=INT_MAX?result:-1);
        l=0,r=nums.size()-1;
        result=INT_MAX;
        while(l<=r)
        {
            int m=l+(r-l)/2;
            if(nums[m]==target)
            {
                result=m;
                l=m+1;
            }
            else if(nums[m]<target) l=m+1;
            else r=m-1;
        }
        ans.push_back(result!=INT_MAX?result:-1);
        return ans;
    }
};
