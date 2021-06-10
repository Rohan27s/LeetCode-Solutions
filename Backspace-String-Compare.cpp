class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> st1,st2;
        if(S.size()==1 and T.size()==1){
            return (S[0]==T[0])?true:false;
        }
        if(S[0]!='#')st1.push(S[0]);
        if(T[0]!='#')st2.push(T[0]);
        int i=1,j=1;
        while(i<S.size()||j<T.size()){
            if(i<S.size()){
                if(S[i]=='#' && !st1.empty()){
                    st1.pop();
                }else{
                    if(S[i]!='#')st1.push(S[i]);
                }
                i++;
            }

            if(j<T.size()){
                if(T[j]=='#' && !st2.empty()){
                    st2.pop();
                }else{
                    if(T[j]!='#')st2.push(T[j]);
                }
                j++;
            }
        }

        while(!st1.empty() and !st2.empty()){
            if(st1.top()!=st2.top())return false;
            else{
                st1.pop();
                st2.pop();                
            }
        }
        if(st1.empty() and st2.empty())return true;
        return false;
    }
};
