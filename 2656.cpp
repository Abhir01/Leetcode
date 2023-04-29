// 2656. Maximum Sum With Exactly K Elements 
class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        
//         o(nlogn) + o(k)
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int sum=0;
        int j=1;
        while(j<=k){
            sum+=nums[n-1];
            nums[n-1]++;
            j++;
        }
        return sum;
        
        
        
        
        
    }
};
