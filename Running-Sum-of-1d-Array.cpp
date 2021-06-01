class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>temp={nums[0]};
        for(long int i=1;i<nums.size();i++){
           temp.push_back(temp.back()+nums[i]);            
        }        
         return temp;        
    }
};
