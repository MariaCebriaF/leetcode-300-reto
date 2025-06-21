/* 📌 Día 8: Length of Last Word
🔗 Enunciado LeetCode: https://leetcode.com/problems/length-of-last-word/
🎥 Explicación en YouTube: [Próximamente]
💻 Lenguaje: C++ */

/*Quería aclarar una cuestión sobre mis comentarios. Muchos vereis que uso comillas.
Éstas las uso, porque para mí es mucho más fácil imaginarme lo que sucede aunque no sea
la explicación técnica o "profesional". Al final los comentarios sirven para hacer el código legible
y sobre todo entendible. Soy una persona muy visual y por eso uso esos terminos "poco profesionales"*/

#include <iostream>
#include <string>
#include <cctype> //libreria con la función isspace(s[i]) en vez de poner s[i]=' ' podemos usar esta función
using namespace std;

int lengthOfLastWord(string s) {
    int tam = s.size() - 1; //tamaño de la string
    
    // Saltamos los espacios del final (si hay)
    while (tam >= 0 && s[tam] == ' ') {
        tam--; //vamos "avanzando" de forma inversa y "nos quitamos los espacios"
    }

    int result = 0;
    while (tam >= 0 && s[tam] != ' ') { //salimos del bucle cuando s[i] es un espacio (termina la palabra)
        result++;
        tam--; 
    }

    return result;
        
}