class Solution {
public:

    // first find pivot
    // then check where does the target belong first line or second line
    // if in first apply bs on I else bs on II
    int pivot(vector<int>& nums,int n){
        int s=0;
        int e=n-1;
        while(s<e){
            int m = s+(e-s)/2;
            if(nums[m] >= nums[0]){
                s=m+1;
            }else{
                e=m;
            }
        }
        return s;
    }

    int bs(vector<int>& nums,int start,int end,int target){
        int s=start;
        int e=end;
        while(s<=e){
            int m=s+(e-s)/2;
            if(nums[m]==target){
                return m;
            }else if(target > nums[m]){
                s=m+1;
            }else{
                e=m-1;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {   
        int n=nums.size();
        int p = pivot(nums,n);
        if(target>=nums[p] && target<=nums[n-1]){
            return bs(nums,p,n-1,target);
        }else{
            return bs(nums,0,p-1,target);
        }
    }
    
};
