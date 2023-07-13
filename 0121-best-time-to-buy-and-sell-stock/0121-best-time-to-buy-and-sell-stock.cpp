class Solution {
public:
    int maxProfit(vector<int>& price) {
        int n = price.size();
        if (n < 2) {
            return 0; 
        }

        int maxProfit = 0;
        int minPrice = price[0];

        for (int i = 1; i < n; i++) {
            int currentProfit = price[i] - minPrice;
            if (currentProfit > maxProfit) {
                maxProfit = currentProfit;
            }
            if (price[i] < minPrice) {
                minPrice = price[i];
            }
        }

        return maxProfit;

    }
};