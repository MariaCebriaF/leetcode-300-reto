/* 📌 Día 21: Minimum Depth of Binary Tree
🔗 Enunciado LeetCode: https://leetcode.com/problems/minimum-depth-of-binary-tree/description/
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
    int minDepth(TreeNode *root)
    {
        if (root == nullptr)
            return 0;

        // En cuanto nos encontremos con un callejón sin salida ya no paramos de contar por ese lado (o sea si es nullptr)
        if (!root->left)
            return 1 + minDepth(root->right);
        if (!root->right)
            return 1 + minDepth(root->left);

        // Si tiene ambos hijos (izquierda y derecha), devolveremos el más pequeño
        return 1 + min(minDepth(root->left), minDepth(root->right));
    }
};
