class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int d = INT_MAX;
        int max = 0;
        int pist = 0;
        
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < d){
                d = prices[i];
            }
            pist = prices[i] - d;
            if(max < pist){
                max = pist;
            }
        }
        return max;
    }
};