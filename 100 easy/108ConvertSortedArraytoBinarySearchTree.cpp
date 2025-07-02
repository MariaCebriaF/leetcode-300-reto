/* 📌 Día 19: Convert Sorted Array to Binary Search Tree
🔗 Enunciado LeetCode: https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/description/
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
    // Una apreciación interesante en esta función, es que debemos devolver una variable del tipo TreeNode (importante fijarse)
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        return arbol(nums, 0, nums.size() - 1);
    }

private:
    TreeNode *arbol(vector<int> &nums, int left, int right)
    {
        if (left > right)
            return nullptr;

        // En el caso de que el tamaño del vector sea par, optamos por el "centro derecho"
        // ejemplo: (1,2,3,4,5,6)-> Hay seis elemento, por lo tanto usariamos el 4 como referencia del origen (root, raíz)
        int mid = left + (right - left + 1) / 2;

        TreeNode *root = new TreeNode(nums[mid]);  // Creamos el origen
        root->left = arbol(nums, left, mid - 1);   // Recursividad por el lado izquierdo del arbol que a su vez corresponde con la mitad izquierda del vector
        root->right = arbol(nums, mid + 1, right); // Lo mismo pero por la derecha con los elementos de la mitad derecha del vector

        return origen; // devolvemos el origen
    }
};