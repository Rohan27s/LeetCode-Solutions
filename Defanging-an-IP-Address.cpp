class Solution {
public:
    string defangIPaddr(string address) {
       string defangIP = "";
    
    for (char c : address)
        (c == '.') ? defangIP += "[.]" :
                     defangIP += c;
    return defangIP;
    }
    
};
