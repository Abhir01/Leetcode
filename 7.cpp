class Solution {
public:
    int reverse(int x) {
        int n=x;
        int digit=0;
        int ans=0;
        while(n!=0){
            digit=n%10;

            if(ans>INT_MAX/10 || ans<INT_MIN/10){
                return 0;
            }
            ans=(ans*10)+digit;
            n=n/10;
        }
        return ans;
    }
};
