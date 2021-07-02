class Solution {
public:
    int longestSubstring(string s, int k) {
        int n = s.size();
        if ((n == 0) && (k > n))
            return 0;
        
        unordered_map<char, int> counter;
        for (auto letter : s)
            counter[letter]++;
        
        int sub1, sub2;
        
        for (int i=0; i<n; i++) {
            if (counter[s[i]] < k) {
                sub1 = longestSubstring(s.substr(0, i), k);
                sub2 = longestSubstring(s.substr(i+1), k);
                break;
            }
            if (i == n-1)
                return n;
        }
        
        return max(sub1, sub2);
    }
};
