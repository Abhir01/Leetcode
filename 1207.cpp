class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        // brute force 
        // given arr se cnt store karke dusre array me dalo then usko simply traverse karke dek lo
    //     vector<int>a;
    //     int cnt=0;
    //     sort(arr.begin(),arr.end());
    //     int i=0;
        
    //     while(i<arr.size()){
    //     for(int j=i+1;j<arr.size();j++){
    //         if(arr[i] == arr[j]){
    //             cnt++;
    //         }
    //         else {
    //             break;
    //         }
    //     }
    //     a.push_back(cnt);
    //     i=i+cnt;
    // }
    //     sort(a.begin(),a.end());
    //     for(int i=0;i<a.size()-1;i++){
    //         if(a[i]==a[i+1]){
    //             return false;
    //         }
    //     }
    //     return true;

    // sc-> o(n) + o(s.size)
    // tc-> o(n) + o(n) + o(nlogn)(map traverse)
    
    unordered_map<int,int>mpp;
    for(int i: arr){
        mpp[i]++;
    }
    set<int>s;
    for(auto it:mpp){
        if(s.count(it.second)){
            return false;
        }else{
            s.insert(it.second);
        }
    }
    return true;
    

    }
};
