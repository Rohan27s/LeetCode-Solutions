class Solution {
public:    
        string removeDuplicates(string S) {
        list<char>stackk;
        for(int i=0;i<S.size();i++){
            if(stackk.empty()||stackk.back()!=S[i]){
                stackk.push_back(S[i]);
            }
            else{
                stackk.pop_back();
            }
        }
        return string(stackk.begin(),stackk.end());
    }
    
};
