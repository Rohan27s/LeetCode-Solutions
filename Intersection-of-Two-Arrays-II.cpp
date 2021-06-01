//using hashing
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
vector<int>arr;
        unordered_map<int,int>um;
        for(auto num:nums1){
            um[num]++;
        }
        for(auto num:nums2){
            if(um[num]>0){
                arr.push_back(num);
                um[num]--;
            }
        }
        return arr;
    }
};
