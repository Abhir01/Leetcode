class Solution {
public:
    int subtractProductAndSum(int n) {
        int pro=1,sum=0;
	    int ld = 0;
	
	    while(n!=0){
		    ld = n % 10;
		    pro = pro * ld;
		    sum += ld;
		    n = n/10;
	    }
	    return pro-sum;
    }
};
