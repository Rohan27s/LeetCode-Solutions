class Solution {
public:
    int xorOperation(int n, int start) {
        int first = start & 1;
        start = start >> 1;
        if(start % 2 == 0){
            switch(n % 4){
                case 0: return 0;
                case 1: return ((start + n - 1) << 1) + first;
                case 2: return 2;
                case 3: return ((1 ^ (start + n - 1)) << 1) + first;
            } 
        } else {
            switch(n % 4){
                case 0: return (start ^ 1 ^ (start + n - 1)) << 1;
                case 1: return (start << 1) + first;
                case 2: return (start ^ (start + n - 1)) << 1;
                case 3: return ((start ^ 1) << 1) + first;
            } 
        }
        return 0; 
    }
};
