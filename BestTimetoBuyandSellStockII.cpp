class Solution {
    const int INF = 1e9+5;
public:
    int maxProfit(vector<int>& prices) {
        
        int with_stock = -INF, with_out_stock = 0;
        
        for (int x: prices) {
            with_stock = max(with_out_stock-x, with_stock);
            with_out_stock = max(with_stock+x, with_out_stock);
        }
        return with_out_stock;
    }
};