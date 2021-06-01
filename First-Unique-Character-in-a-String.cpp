//using hashing

class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.length();
        vector<int>ans(26,0);
        for(int i=0;s[i]!='\0';++i){
            ans[s[i]-'a']+=1;
        }
        for(int i=0;s[i]!='\0';++i){
            if(ans[s[i]-'a']==1){
                return i;
            }
        }
        return -1;
    }
};
