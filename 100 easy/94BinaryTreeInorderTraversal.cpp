
/* 📌 Día 15: Binary Tree Inorder Traversal
🔗 Enunciado LeetCode: https://leetcode.com/problems/binary-tree-inorder-traversal/description/
🎥 Explicación en YouTube: [Próximamente]
💻 Lenguaje: C++ */
#include <iostream>
#include <vector>
#include <stack>  // Para utilizar los stacks

using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;  // hijo izquierdo
 *     TreeNode *right; // hijo derecho
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;                 // Vector para guardar los valores del recorrido inorden
        stack<TreeNode*> st;                // Utilizaremos una pila para "imitar" la recursión
        TreeNode* actual = root;            // Comenzamos desde la raíz

        // Mientras haya nodos por visitar
        while (actual != nullptr || !st.empty()) {
            // 1. Ir lo más a la izquierda posible
            while (actual != nullptr) {
                st.push(actual);            // Guardamos el nodo actual en la pila
                actual = actual->left;      // Bajamos por la izquierda
            }

            // 2. Al llegar al final de la izquierda, procesamos el nodo más reciente
            actual = st.top();              // Obtenemos el nodo más arriba de la pila
            st.pop();                       // Lo sacamos de la pila

            result.push_back(actual->val);  // Guardamos el valor del nodo visitado

            // 3. Ahora vamos a su subárbol derecho
            actual = actual->right;
        }

        return result;
    }
};
