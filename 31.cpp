class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        // pre defined function
        // next_permutation(begin(nums), end(nums));

        // 41532 and 4321 me sab mil jaega
        /*simple-> first search for a element that is like 
        (nums[i]<nums[i+1]) store that in x and search for a element
        just greater then that and mark it as y ,
        swap  x and y,
        now we will see that we just need to reverse elements after 
        x till end*/

        if(nums.size()==1){
            return ;
        }
        int idx1=-1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx1=i;
                break;
            }
        }
        if(idx1<0){
            reverse(nums.begin(),nums.end());
        }else{
            int idx2=0;
            for(int i=nums.size()-1;i>=0;i--){
                if(nums[i]>nums[idx1]){
                    idx2=i;
                    break;
                }
            }
            swap(nums[idx1],nums[idx2]);
            reverse(nums.begin()+idx1+1,nums.end());
        }
     
        
        
    }
};
