/* 📌 Día 26: Valid Palindrome
🔗 Enunciado LeetCode: https://leetcode.com/problems/valid-palindrome/description/
💻 Lenguaje: C++ */

#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        string res;
        for (int i = 0; i < s.size(); i++)
        {
            if (isalpha(s[i]) || isdigit(s[i]))
            {
                if (isalpha(s[i]))
                {
                    char c = tolower(s[i]);
                    res += c;
                }
                else
                    res += s[i];
            }
        }
        string revers = res;
        reverse(revers.begin(), revers.end());
        if (revers == res)
            return true;
        else
            return false;
    }
};