/* 📌 Día 10: Add Binary
🔗 Enunciado LeetCode: https://leetcode.com/problems/add-binary/description/
🎥 Explicación en YouTube: [Próximamente]
💻 Lenguaje: C++ */
#include <iostream>
#include <string>
#include <algorithm> //para utilizar la función reverse()
using namespace std;

string addBinary(string a, string b) {
        int tam_a=a.length()-1; //usaremos estos contadores para empezar desde el final de cada string
        int tam_b=b.length()-1;
        string result="";
        int aux=0; //esta variable la usaremos como "acarreo" ('1' + '1' = '0' y aux='1')

        while(tam_a>=0 || tam_b>=0 || aux){
            int sum = aux;
            if(tam_a>=0)sum+= a[tam_a--] - '0'; //al restarle el caracter '0' lo convertimos en un número entero
            if(tam_b>=0)sum+= b[tam_b--] - '0'; //de esta manera podemos trabajar con ellos
            
            result+= (sum%2)+'0';
            aux=sum/2; 
        }
        
        
        reverse(result.begin(), result.end()); //como hemos empezado desde el final (como si fuese una suma convencional) debemos darle la vuelta a nuestra string result (por eso usamos reverse)
        return result;


}