class Solution {
public:
    int maxProfit(vector<int>& price) {
//         int min = price[0];
//         int n = price.size();
//         int index = 0;
        
//         if(n == 0) return 0;
//         for(int i=1; i<n; i++){
//             if(price[i] < min){
//                 min = price[i];
//                 index = i;
//             }
//         }
        
//         int max = price[index];
//         for(int i=index; i < n; i++){
//             if(price[i] > max){
//                 max = price[i];
//             }
//         }
        
//         if(max - min >= 0){
//             return max - min;
//         }
//         else return 0;
        int n = price.size();
        if (n < 2) {
            return 0; // If there are less than 2 prices, no profit can be made
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