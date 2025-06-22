/* 📌 Día 9: Plus One
🔗 Enunciado LeetCode: https://leetcode.com/problems/plus-one/description/
🎥 Explicación en YouTube: [Próximamente]
💻 Lenguaje: C++ */
#include <iostream>
#include <vector>

using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();
    
    for (int i = n - 1; i >= 0; i--) {
        if (digits[i] < 9) { 
            digits[i]++;
            return digits;
        }
        digits[i] = 0; //en el caso de que fuera 9, esa posición debería convertirse en un 0 
    }

    // Si llegamos aquí, todos los dígitos eran 9 (por ejemplo 999 -> 1000)
    digits.insert(digits.begin(), 1);
    return digits;
}


