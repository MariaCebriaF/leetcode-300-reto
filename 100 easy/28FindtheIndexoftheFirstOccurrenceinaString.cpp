/* 📌 Día 6: Find the Index of the First Occurrence in a String
🔗 Enunciado LeetCode: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/
🎥 Explicación en YouTube: [Próximamente]
💻 Lenguaje: C++ */

#include <iostream>
#include <string>
using namespace std;
/*Este ejercicio me gusta porque es fácil si conocemos la función find() incluida en la libreria string. 
Esta función la usamos en el ejercicio 14. Longest Common Prefix. Y aunque no es igual porque en ese caso
debíamos ver si era prefijo y en éste la posición es variable.
Vamos a explicar como funciona la función find() y como la podemos usar en este caso. 

La función "string.find(substring)" busca una substring (o subcadena) dentro de un string y devuelve la posición de su primera aparición.
Si la subcadena no se encuentra, devuelve string::npos.
Por eso usamos pos != string::npos para saber si la ha encontrado o no.*/

int strStr(string haystack, string needle) {
    int index=-1; //Aquí inicializo una variable a -1 por si no la encontramos
    int pos= haystack.find(needle);
    if (pos != string::npos) { //esto quiere decir que ha encontrado la palabra substring en la palabra
        return pos; //En el caso de encontrar la substring, devolvemos el valor del indice en el que se encuentra
    }
    else{
        return index; //Como no la hemos encontrado directamente devolvemos el -1
    }
          
}