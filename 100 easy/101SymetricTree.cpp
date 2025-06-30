/* 📌 Día 17: Symmetric Tree
🔗 Enunciado LeetCode: https://leetcode.com/problems/symmetric-tree/description/
🎥 Explicación en YouTube: [Próximamente]
💻 Lenguaje: C++ */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    bool isSymmetric(TreeNode *root)
    {
        if (root == nullptr)
            return true;

        return Simetria(root->left, root->right);
    }

private: // Creamos una función recursiva que vaya comparando todos cada lado y se vaya "extendiendo" por todo el arbol
    bool Simetria(TreeNode *izq, TreeNode *dcha)
    {
        if (!izq && !dcha)
            return true; // ninguno existe, por lo que es simetrico, o ya acabado el recorrido y ha es simétrico por lo tanto ture
        if (!izq || !dcha)
            return false; // en la anterior las dos no existen, pero en la segunda si una existe y la otra no, ya no es simétrico
        if (izq->val != dcha->val)
            return false;                                                            // Si el valor no coincide, no es simetrico
        return Simetria(izq->left, dcha->right) && Simetria(izq->right, dcha->left); // Volvemos a llamar a la función (Recursión)
        // Avanzamos recursivamente comparando los lados opuestos del árbol,
        // para comprobar si se mantienen simétricos a cada nivel.
        // Pensemos en un espejo o las mánchas de tinta simétrica. La parte "más izquierda de la izquierda" se compara con la "más derecha de la derecha" del dibujo
        // Y la parte de dentro de compara desde la parte "más derecha del lado izquierda" y la parte "más izquierda del lado derecho"
        // - izq->left se compara con dcha->right → lados "exteriores" del dibujo
        // - izq->right se compara con dcha->left → lados "interiores" del dibujo
        // Si ambas comparaciones devuelven true, seguimos considerando que el árbol es simétrico. Porque en cuanto devuelve false "se acaba todo".
    }
};
