/* 📌 Día 27: Single Number
🔗 Enunciado LeetCode: https://leetcode.com/problems/single-number/description/
💻 Lenguaje: C++ */

using namespace std;
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {

        int result = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int num = nums[i];
            result ^= num;
            // XOR (si aparecen dos numeros iguales, entonces el valor de la "xor"
            // sería 0, por tanto al final solo quedará el valor del unico elemento que no se repite)
        }

        return result;
    }
};