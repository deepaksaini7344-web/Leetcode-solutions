class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(),prices.end());
        sort(discounts.begin(),discounts.end());
        int i,j;
        double discounted_price = 0;
        for( i = prices.size()-1,j = discounts.size()-1; i >= 0 && j >= 0 ; i--,j--){
                 discounted_price += (prices[i] * (100-discounts[j]))/double(100);
        }
          if(prices.size() > discounts.size()){
        for(int i = 0 ;i<prices.size()-discounts.size();i++){
                discounted_price  +=prices[i];
        }
        }
        return discounted_price;
    }
};