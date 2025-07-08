/* 📌 Día 25: Best Time to Buy and Sell Stock
🔗 Enunciado LeetCode: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
🎥 Explicación en YouTube: [Próximamente]
💻 Lenguaje: C++ */
4 class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int mini = prices[0]; // el precio más bajo
        int maxi = 0;         // el precio más bajo
        // ambas variables las iremos modificando a los largo del bucle
        for (int i = 1; i < prices.size(); ++i)
        {
            if (prices[i] < mini)
            {
                mini = prices[i];
            }
            else
            {
                maxi = max(maxi, prices[i] - mini);
            }
        }

        return maxi;
    }
};