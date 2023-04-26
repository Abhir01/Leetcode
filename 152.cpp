class Solution {
public:
    int maxProduct(vector<int>& nums) {

        

    //    o(n) time and  o(1) space
        int maxp=INT_MIN;
        int p=1;
        for(int i=0;i<nums.size();i++){
             p *= nums[i];
             maxp=max(p,maxp);
             if(p == 0){
                 p=1;
             }
        }

        // this is to handle if any negative occurs
        p=1;
        for(int i=nums.size()-1;i>=0;i--){
            p*=nums[i];
            maxp=max(p,maxp);
             if(p == 0){
                 p=1;
             }
        }  
        return maxp;
    }
};
