/* 📌 Día 30: Constains Duplicate
🔗 Enunciado LeetCode: https://leetcode.com/problems/contains-duplicate/description/
💻 Lenguaje: C++ */
using namespace std;
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        // ordenamos primero el vector
        sort(nums.begin(), nums.end());
        for (int i = 1; i <= n; i++)
        { // con que dos coincidan ya acaba el bucle
            if (nums[i - 1] == nums[i])
                return true;
        }

        return false; // sino encuentra coincidencias devolvemos que es falso
    }
};