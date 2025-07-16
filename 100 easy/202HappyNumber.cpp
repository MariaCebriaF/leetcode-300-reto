/* 📌 Día 31: Happy Number
🔗 Enunciado LeetCode: https://leetcode.com/problems/happy-number/description/
💻 Lenguaje: C++ */

#include <iostream>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    bool isHappy(int n)
    {
        unordered_set<int> vistos; // Usamos un set para que no entremos en un bucle infinito (aquí guardamos los números únicos)

        while (n != 1 && !vistos.count(n))
        {                         // Mientras no lleguemos a 1 y no hayamos repetido ningún número
            vistos.insert(n);     // Guardamos el número actual
            n = sumaCuadrados(n); // Calculamos el siguiente número
        }

        if (n == 1)
            return true;
        else
            return false;
    }

private:
    int sumaCuadrados(int n)
    {
        int suma = 0;
        while (n > 0)
        {
            int digito = n % 10;     // "Sacamos el último dígito"
            suma += digito * digito; // Elevamos al cuadrado y vamos sumando
            n /= 10;                 // Quita el último dígito y continúamos
        }
        return suma;
    }
};
