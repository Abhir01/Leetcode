class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        // o(nlogn)
        // as no distinct e lements 
        sort(nums.begin(),nums.end());
        return nums[nums.size()-k];

        // maxheap  takes o(nlogn) o(n) space


        // 2-> minheap (klogk) o(k) space k is the only numbers (k)        
        // storing in the minheap (most optimised)

        // priority_queue <int, vector<int>, greater<int> > minq;
        priority_queue<int>minq;
        for(int i=0;i<nums.size();i++){

            if(minq.size()<k){
                minq.push(-nums[i]);
                // agar -ve elements nahi hai to
            }else{
                minq.pop();
            }
        }
        return minq.top();
        
    }
};
