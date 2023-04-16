class Solution {
public:
    int bitwiseComplement(int n) {
        
        int m = n;
        int mask=0;

        if(n==0) return 1;
        // edge case
        
        while(m!=0){
            mask=(mask<<1) | 1;
            m= m >>1;
            // to make it 0
        }
        int ans = (~n) & mask;
        return ans;
    }
};
