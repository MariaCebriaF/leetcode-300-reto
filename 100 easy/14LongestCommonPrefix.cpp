#include <iostream>
#include <string>
#include <vector>
// #include <bits/stdc++.h> libreria super potente con muchísimas funciones, muy usada en la programación competitiva
using namespace std; 

string longestCommonPrefix(vector<string>& strs) {
    // Caso base: comprobamos si el vector que nos dan está vacío
    if (strs.empty()) return "";

    // Inicializamos el resultado asumiendo que todo el primer string es el prefijo común
    string result = strs[0]; //flower 

    // Recorremos los strings a partir del segundo elemento del vector 
    for (int i = 1; i < strs.size(); ++i) {

        //fly==flow 
        // Mientras el string actual NO empiece por el prefijo actual (result),
        // lo recortamos por el final hasta que coincida o se quede vacío
        //flow==flower 
        while (strs[i].find(result) != 0) { //si devuelve cero es porque encuentra la substring al principio 
            // Eliminamos el último carácter del resultado (result)
            result.pop_back(); 

            // Si se ha vaciado completamente, significa que no hay prefijo común
            if (result.empty()) return "";
        }
    }

    // Cuando terminamos el bucle, 'result' contiene el prefijo común más largo o se queda vacío 
    return result;
}
int main() {
    vector<string> ejemplo1 = {"flower", "flow", "flight"};
    vector<string> ejemplo2 = {"dog", "racecar", "car"};

    cout << "Ejemplo 1: " << longestCommonPrefix(ejemplo1) << endl; 
    cout << "Ejemplo 2: " << longestCommonPrefix(ejemplo2) << endl; 
    return 0;
}
