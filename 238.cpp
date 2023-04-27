
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        // o(n2) -> for every element multiply all other by traversing each  element again and again .
        // o(n) -> with division but not allowed here also count 0s bcz of edge case in 1 and 2 zeros

        // using prefix and suffix array of multiplication as we know that the current element of the output is the product of all element on left as well all on right so we create p and s array and multipy them for each position

        // t.c -> o(n)
        // s.c -> o(2n)

       /* vector<int>prefix(nums.size());
        vector<int>suffix(nums.size());
        int p=1;
        for(int i=0;i<nums.size();i++){
            prefix[i] = p;
            p*=nums[i];
        }

        p=1;
        for(int i=nums.size()-1;i>=0;i--){
            suffix[i] = p;
            p*=nums[i];
        }

        for(int i=0;i<nums.size();i++){
            nums[i] = prefix[i] * suffix[i];
        }
        return nums;*/


        // t.c -> o(n)
        // s.c -> o(1) as returned in the last
        
        vector<int>ans(nums.size(),1);
        int p=1;
        for(int i=0;i<nums.size();i++){
            ans[i] = p;
            p*=nums[i];
        }
        p=1;
        for(int i=nums.size()-1;i>=0;i--){
            ans[i]*=p;
            p*=nums[i];
        }
        
        return ans;

    }
};
