class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestbuy=prices[0];
        int maxi=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>bestbuy){
                maxi=max(maxi,prices[i]-bestbuy);
            }
            bestbuy=min(bestbuy,prices[i]);

        }
        return maxi;
    }
};