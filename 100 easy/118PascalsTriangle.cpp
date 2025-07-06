

// Triangulo de pascal

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> pascal.for (int i = 0; i < numRows; i++)
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
    }
};