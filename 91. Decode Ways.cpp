class Solution {
public:
    int fib(int n) {
        double num = (sqrt(5) + 1) / 2;
        return round(pow(num, n) / sqrt(5));
    }
    
    int numDecodings(string s) {
        int n = s.size(), prev = 0, res = 1;

        for(int i = 0; i < n; i++) {
            if(s[i] == '0') {
                if(i == 0 || (s[i-1] == '0' || s[i-1] >= '3'))		
                    return 0;
                else							                   
                    res = res * fib(((i+1)-2) - prev + 1);		    
            }

            else if(i == n-1)						               
                res = res * fib(i+1 - prev + 1);

            else if((s[i] == '2') && (i+1 < n) && (s[i+1] > '6'))	
                res = res * fib(i+1 - prev + 1);			      

            else if(s[i] >= '3')					               
                res = res * fib(i+1 - prev + 1);

            else
                continue;
            
            prev = i+1;       
        }                     
        
        return res;
    }
};
