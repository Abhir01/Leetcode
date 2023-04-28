class Solution {
public:
    int mySqrt(int x) {

        // linear root(x)
        // bcz x bar compare karne ki jaroorat nahi hai root times
        // pe hi mil jaega 

        // o(logx) x is the number

        int s=0;
        int e=x;
        long long int ans = 0;
        while(s<=e){
            long long int m = s+(e-s)/2;
            long long int square = m*m;
            if(square == x){
                return m;
                
            }else if(square < x){
                ans = m;
                // this case for non squareable numbers to get close 
                // square to them eg, x=35
                s = m+1;
            }else{
                e=m-1;
            }
        }
        return ans;
             
    }
};
