/* 📌 Día 29: Mayority Element
🔗 Enunciado LeetCode: https://leetcode.com/problems/majority-element/description/
💻 Lenguaje: C++ */

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int candidato = 0; // Este será nuestro candidato como elemento más repetido
        int cont = 0;      // Contador que indica cuantas veces el candidato actual ha aparecido

        for (int num : nums)
        {
            // Si el contador está a cero, elegimos un nuevo candidato
            if (cont == 0)
            {
                candidato = num;
            }

            // Si el número actual es igual al candidato, sumamos uno
            // Si no, restamos uno (como si "anuláramos" un voto)
            cont += (num == candidato) ? 1 : -1;
        }

        // Al finalizar el bucle, el candidato será el elemento mayoritario
        return candidato;
    }
};
