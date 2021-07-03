class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_map<char, vector<string>> dict;
        for(auto element : wordDict){
            dict[element[0]].push_back(element); 
        }
        
        int dp[s.size()+1];       
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;
        
        for(int i=0; i<s.size(); i++){
            for(auto element : dict[s[i]]){     
                if(i+element.size() <= s.size() && dp[i] != 0 && element == s.substr(i, element.size()))
                    dp[i+element.size()] = 1;
            }
        }
        
        return dp[s.size()];
    }
};
