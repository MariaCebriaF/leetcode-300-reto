/* 📌 Día 11: Sqrt(x)
🔗 Enunciado LeetCode: https://leetcode.com/problems/sqrtx/description/
🎥 Explicación en YouTube: [Próximamente]
💻 Lenguaje: C++ */

#include <iostream>
using namespace std;

//no podemos usar la funcion pow (x, 0.5). Debemos buscar otro enfoque distinto.
int mySqrt(int x) {
    if(x==0 || x==1) return x; //directamente devolvemos 0 o 1

    int result=1; 
    while(result<= x/result){  
        result++;
    }
    return result-1; 

}

//EXPLICACIÓN 
//imaginemos que x=8 
//entramos en el while (1<= 8/1) sí, entonces result++ 
//volvemos a entrar en el while (2 <=8/2) sí, pues result++
// y volvemos a entrar while( 3 <=8/3) no, pues salimos del bucle
//entonces qué devolvemos? 3-1= 2