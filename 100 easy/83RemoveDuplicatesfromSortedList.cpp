/* 📌 Día 13: Remove Duplicates from Sorted List
🔗 Enunciado LeetCode: https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/
🎥 Explicación en YouTube: [Próximamente]
💻 Lenguaje: C++ */
#include <iostream>
using namespace std;

/** 
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val; Valor del nodo
 *     ListNode *next; Puntero al siguiente nodo
 *     ListNode() : val(0), next(nullptr) {} //Constructor por defecto
 *     ListNode(int x) : val(x), next(nullptr) {} //Constructor con valor
 *     ListNode(int x, ListNode *next) : val(x), next(next) {} //Constructor con  valor y el siguiente
 * }; 
 */
class Solution {
    public:
        ListNode* deleteDuplicates(ListNode* head) {
            // Caso base: No hay nodos (o sea, head==nullptr) o solo hay uno (head apunta a nullptr)
        if (head == nullptr || head->next == nullptr) {
            return head; 
        }

        // Puntero auxiliar que recorre la lista desde el principio
        ListNode* aux = head;

        // Mientras no lleguemos al final de la lista
        while (aux != nullptr && aux->next != nullptr) {
            // Si el valor del nodo actual es igual al del siguiente, hay un duplicado
            if (aux->val == aux->next->val) {
                // Guardamos el nodo duplicado para poder liberarlo de la memoria (opcional)
                ListNode* duplicado = aux->next;

                // Saltamos el nodo duplicado y apuntamos al siguiente del siguiente
                aux->next = duplicado->next;

                // Podríamos liberar la memoria del nodo duplicado, aunque es opcional, pero lo veo un buen hábito 
                delete duplicado;
            } else {
                // Si no hay duplicado, simplemente avanzamos al siguiente nodo
                aux = aux->next;
            }
        }

        // Devolvemos el puntero al inicio de la lista ya sin copias
        return head;
        }
    };