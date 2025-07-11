/* 📌 Día 28: Linked Listh Cycle
🔗 Enunciado LeetCode: https://leetcode.com/problems/linked-list-cycle/description/
💻 Lenguaje: C++ */

class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        if (!head || !head->next)
            return false;
        // Si head no existe, ni apunta a otro nodo de la lista, entonces es imposible que sea circular

        ListNode *tortuga = head;
        ListNode *liebre = head;
        // Como la carrera de la tortuga y la liebre, pero esta vez la libre no va a perder
        // Este es el algoritmo de Floyd y se basa en la siguiente premisa
        // El bulcle solo terminará si la tortuga y la liebre son iguales
        // O por el contrario salir cuando la liebre sea nulo y el siguiente a la liebre también,
        // porque sino entraríamos en un bucle infinito

        while (liebre && liebre->next)
        {
            tortuga = tortuga->next;
            liebre = liebtre->next->next;

            if (tortuga == liebre)
                return true;
        }

        return false;
    }
};