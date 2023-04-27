class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        // o(n) simply means to return the max element index
        /*int maxi = INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i] > maxi){
                maxi = max(maxi,arr[i]);
            }
        }
        int ans=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i] == maxi){
                ans = i;
            }
        }
        return ans;*/

        //  o(logn)
        // s<e dry for 3,4,5,1 and in last 5,1 will be left no need to further find mid 

        // 2 lines hai -> 1st me a[i]<a[i+1]
                      /* -> 2nd me a[i]>a[+1]
                       and 3rd thing that peak element is
                       a[i-1]<a[p]>a[i+1]

                       1st case me means in first line so we do s=m+1
                       otherwise we just do e=m bcz suppose m is in peak and
                       we do e=m-1 we cant get the peak

                       */


        int s=0;
        int e=arr.size()-1;
        while(s<e){
            int mid=s+(e-s)/2;
            if(arr[mid]<arr[mid+1]){
                s=mid+1;
            }else{
                e=mid;
            }
        }
        return s;
    }
};
