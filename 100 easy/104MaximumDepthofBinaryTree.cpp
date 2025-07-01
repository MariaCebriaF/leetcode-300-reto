/* 📌 Día 18: Maximum Depth of Binary Tree
🔗 Enunciado LeetCode: https://leetcode.com/problems/maximum-depth-of-binary-tree/description/
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
    int maxDepth(TreeNode *root)
    {
        return profundidad(root);
    }

private:
    int profundidad(TreeNode *root)
    { // No es necesario crear una función a parte, pero he preferido hacerlo así
        if (root == nullptr)
            return 0; // Si root es 0, directamente se devuelve 0 (tendrá sentido cuando en vez de root sea el hijo izqdo o dcho segun vaya avanzando)

        int izq = profundidad(root->left);   // Recursión por el lado izquierdo
        int dcha = profundidad(root->right); // Recursión por el lado derecho
        return 1 + max(izq, der);            // Devolvemos el máximo + 1 (contamos el origen);
    }
};