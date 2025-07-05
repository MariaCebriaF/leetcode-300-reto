/* 📌 Día 22: Path Sum
🔗 Enunciado LeetCode: https://leetcode.com/problems/path-sum/description/
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
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        if (!root)
            return false; // árbol vacío

        // Este sería nuestro caso base, aquí terminaría el "ciclo" puesto que ya habremos llegado al final del recorrido (no tiene hijos ni aun lado ni al otro)
        if (!root->left && !root->right)
        {
            return targetSum == root->val; // Aquí devolveriamos si el objetivo (que hemos ido restando con anterioridad)coincide con el último valor
        }

        // Restamos el valor actual del nodo al target (el objetivo) y llamamos recursivamente a la función de nuevo
        return hasPathSum(root->left, targetSum - root->val) || // por un lado la izquierda
               hasPathSum(root->right, targetSum - root->val);  // y otro por la derecha
    }
};