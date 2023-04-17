// o(logn)
        // if(n==0) return false;
        // while(n!=1){
        //     if(n%2 != 0){
        //         return false;
        //     }
        //     n=n/2;
        // }
        // return true;

        // o(1)
        // if(n<=0)return false;
        // int bits=__builtin_popcount(n);
        
        // if(bits==1)
        //     return true;
        // return false;

        if(n<=0) return false;
        return ((n&(n-1)) == 0);
