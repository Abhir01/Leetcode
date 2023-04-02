class Solution {
public:
    int hammingWeight(uint32_t n) {

        // 1_ convert to binary and count karlo

        // 2_ last bit dek lo aur right shift kardo

       int cnt=0;
       while(n!=0){
           if(n&1){
               cnt++;
           }
           n=n>>1;
       }
       return cnt;
        
    }
};
