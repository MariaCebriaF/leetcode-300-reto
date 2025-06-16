/* 📌 Día 3: Merge Two Sorted Lists
🔗 Enunciado LeetCode: https://leetcode.com/problems/merge-two-sorted-lists/
🎥 Explicación en YouTube: [Próximamente]
💻 Lenguaje: C++ */

#include <iostream>
using namespace std;

/** Clase ListNode que necesitamos para crear un auxliar en la función y que no da LeetCode
 * 
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {  
    public:
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            // Creamos un nodo auxiliar 
            ListNode aux; // por defecto se crea aux(val=0)->nullptr 
            ListNode* tail = &aux;
    
            while (list1 && list2) {
                if (list1->val < list2->val) { //vamos comparando valores y según sea mayor o menor, los vamos metiendo en orden
                    tail->next = list1; 
                    list1 = list1->next; //importante actualizar el valor de list1 para que vaya avanzando
                } else {
                    tail->next = list2;
                    list2 = list2->next; //lo mismo con list2
                }
                tail = tail->next; //y por supuesto tail ta,bién
            }
    
            // Añadimos el resto de la lista que no está vacía
            if (list1) {
                tail->next = list1;
            } else {
                tail->next = list2;
            }
    
            return aux.next;  //recordemos que el primer elemento de aux por defecto tiene valor 0, por eso apuntamos al siguiente  que si que tiene valor
        }
    };