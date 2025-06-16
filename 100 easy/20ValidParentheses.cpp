/* 📌 Día 2: Valid Parentheses
🔗 Enunciado LeetCode: https://leetcode.com/problems/valid-parentheses/description/
🎥 Explicación en YouTube: [Próximamente]
💻 Lenguaje: C++ */
#include <iostream>
#include <stack> //pilas, LIFO el primero que entra es el último que sale 
#include <string>
using namespace std;

bool isValid(string s) {
    stack<char> pila; 

    for (int i = 0; i < s.length(); ++i) {
        char c = s[i];

        // Si es un paréntesis de apertura, lo metemos en la pila
        if (c == '(' || c == '{' || c == '[') {
            pila.push(c); 
        } else {
            // Si la pila está vacía, no se puede emparejar nada 
            if (pila.empty()) return false; 

            char top = pila.top(); 

            // Vemos si el top coincide con el par que cierra
            if ((c == ')' && top != '(') ||
                (c == ']' && top != '[') ||  
                (c == '}' && top != '{')) {
                return false;
            }
        
            pila.pop(); // Coincide, así que lo quitamos
        }
    }

    // Si al final la pila está vacía, todo estaba correctamente abierto y cerrado
    return pila.empty();  //devuelve 1==true si esta vacia o devuelve 0==false sino lo está  
}