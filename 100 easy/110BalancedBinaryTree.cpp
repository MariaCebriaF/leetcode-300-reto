/* 📌 Día 20: Balanced Binary Tree
🔗 Enunciado LeetCode: https://leetcode.com/problems/balanced-binary-tree/description/
🎥 Explicación en YouTube: [Próximamente]
💻 Lenguaje: C++ */

#include <iostream>

using namespace std;
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
    bool isBalanced(TreeNode *root)
    {
        return altura(root) != -1; // devolverá true en el caso de que sea distinto a menos uno, y false si lo es

        // podríamos ponerlo así también
        /* if(altura(root)==-1) return false;
         else return true;*/
    }

private:
    // Para saber si la altura está desequilibrada simplemente tenemos que comprobar si la diferencia entre un lado y otro es mayor a 1
    int altura(TreeNode *nodo)
    {
        if (!nodo)
            return 0;

        int izq = altura(nodo->left);
        if (izq == -1)
            return -1; // subárbol izquierdo no balanceado

        int der = altura(nodo->right);
        if (der == -1)
            return -1; // subárbol derecho no balanceado

        if (abs(izq - der) > 1)
            return -1; // si la diferencia de alturas es mayor a 1 (usamos valor absoluto por si nos sale negativa la resta)

        return 1 + max(izq, der); // devolver la altura si está balanceado
    }
};