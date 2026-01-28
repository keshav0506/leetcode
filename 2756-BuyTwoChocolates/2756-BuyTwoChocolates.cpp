// Last updated: 28/01/2026, 16:18:45
class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int ans = money;
        int cost = prices[0]+prices[1];
        if(cost <= money){
            ans = min(money-cost,ans);
            return ans;
        }
        else{
            return money;
        }
    }
};