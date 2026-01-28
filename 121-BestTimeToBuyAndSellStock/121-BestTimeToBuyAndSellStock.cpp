// Last updated: 28/01/2026, 16:19:53
class Solution {
public:
int profit(vector<int>& prices,int i,int &miniprice,int &maxprofit){
    if(i == prices.size() ){
        return maxprofit ;
    }
    if(prices[i] < miniprice){
        miniprice = prices[i];
    } 
    if(prices[i]-miniprice > maxprofit){
        maxprofit =prices[i]-miniprice;
    }
    return profit(prices,i+1,miniprice,maxprofit);
}
int maxProfit(vector<int>& prices) {
    int i = 0;
    int miniprice = INT_MAX;
    int maxprofit = 0;
    int ans = profit(prices,i,miniprice,maxprofit);
    return ans;
}
    
};