class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
       
        
    //     int maxpp=0;
    //     for(int i=0;i<prices.size()-1;i++){
    //         for(int j=i+1;j<prices.size();j++){
    //             if(prices[j]>prices[i]){
    //             maxpp=max(maxpp,prices[j]-prices[i]);
    //         }
    //     }
    // }
        
        //minsofar store karaunga then, har din bechne ka try karunga

        int mins = INT_MAX;
        int p=0;
        for(int i=0;i<prices.size();i++){
            mins=min(mins,prices[i]);
            p=max(p,prices[i] - mins);
        }
        return p;
    }
};
