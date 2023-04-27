class Solution {
public:
    int pivotIndex(vector<int>& nums) {
      
        int ls = 0;
        int sum=0;
  
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int rs = sum;

        for(int i=0;i<nums.size();i++){
            ls+=nums[i];
            
            if(ls==rs){
                return i;
            }
            rs-=nums[i];
        }

return -1;
        
    }
};
