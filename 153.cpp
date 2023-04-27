class Solution {
public:
    int findMin(vector<int>& nums) {
        // pivot
        int s=0;int e=nums.size()-1;
        while(s<e){
            // edge case for increasing elements
            if (nums[s] < nums[e]){
                return nums[s];
            }

            int m = s+(e-s)/2;
            if(nums[m] >= nums[0]){
                s=m+1;
            }else{
                e=m;
            }
        }
        return nums[s];
    }
};
