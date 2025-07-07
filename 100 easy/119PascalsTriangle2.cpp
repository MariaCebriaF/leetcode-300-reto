/* 📌 Día 24: Pascal's Triangle II
🔗 Enunciado LeetCode: https://leetcode.com/problems/pascals-triangle-ii/
🎥 Explicación en YouTube: [Próximamente]
💻 Lenguaje: C++ */

class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> sol; // aquí guardaremos la solución
        vector<vector<int>> pasc = TrianguloPascal(rowIndex);
        sol = pasc[rowIndex];
        return sol;
    }

private:
    // Vamos a crear una función que devuelva el triangulo de Pascal, de esta manera solo tendremos que llamarla en el programa principal y crear un vector auxiliar para guardar el triangulo
    vector<vector<int>> TrianguloPascal(int numRows)
    {
        vector<vector<int>> pascal;
        for (int i = 0; i <= numRows; i++)
        {
            vector<int> row(i + 1, 1);
            /*Creamos un vector<int> que llamaremos row de tamaño i + 1 (porque la fila i tiene i+1 elementos)
            y lo inicializaremos a 1 (porque en las esquinas siempre hay 1s).*/

            // A continuación modificaremos las posiciones intermedias
            for (int j = 1; j < i; j++)
            {
                row[j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
            }

            pascal.push_back(row);
        }

        return pascal;
    }
};