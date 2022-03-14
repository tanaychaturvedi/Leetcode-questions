class Solution {
    
    int checkBit(int x, int i){
        int mask = 1 << i;
        return (x & mask);
    }
    
public:
    int hammingDistance(int x, int y) {
        
        int count = 0;
        for(int i=0; i<32; i++){
            if(checkBit(x, i) != checkBit(y, i)) count++;
        }
        return count;
    }
};