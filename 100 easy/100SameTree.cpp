/* 📌 Día 16: Same Tree
🔗 Enunciado LeetCode: https://leetcode.com/problems/same-tree/description/
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
class Solution {
    public:
    class Solution {
        public:
            bool isSameTree(TreeNode* p, TreeNode* q) {
                stack<TreeNode*> st_p;
                stack<TreeNode*> st_q;
        
                st_p.push(p);
                st_q.push(q);
        
                while (!st_p.empty() && !st_q.empty()) {
                    TreeNode* node_p = st_p.top(); st_p.pop();
                    TreeNode* node_q = st_q.top(); st_q.pop();
        
                    // Si ambos son null, seguimos con el siguiente
                    if (!node_p && !node_q) continue;
        
                    // Si solo uno es null o sus valores no coinciden
                    if (!node_p || !node_q || node_p->val != node_q->val) return false;
        
                    // Añadir primero los "hijos derechos"
                    st_p.push(node_p->right);
                    st_q.push(node_q->right);
        
                    // Añadir  después los "hijos izquierdos"
                    st_p.push(node_p->left);
                    st_q.push(node_q->left);
                }
        
                // Si los dos acaban vacios, entonces es que son iguales
                return st_p.empty() && st_q.empty();
            }
        };
        
    };