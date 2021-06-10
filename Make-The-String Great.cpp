class Solution {
public:
    string makeGood(string s) {
        string ans;
        if(s.length()<2)
            return s;
        stack<char> st;
        for(int i=0;i<s.length();i++) {
            if(!st.empty() && abs(st.top()-s[i])== ('a'-'A')) 
            {
                st.pop();                
            }
            else 
            st.push(s[i]);
        }
        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
