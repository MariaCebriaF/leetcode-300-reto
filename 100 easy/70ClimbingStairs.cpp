/* 📌 Día 12: Climbing Stairs
🔗 Enunciado LeetCode: https://leetcode.com/problems/climbing-stairs/description/
🎥 Explicación en YouTube: [Próximamente]
💻 Lenguaje: C++ */
#include <iostream>

int climbStairs(int n) {
    if(n==1 || n==2 || n==3){ //Estos serán nuestros casos base
        return n; 
    }
    //Al tratarse de una sucesión fibonacci podríamos utilizar un array o vector, pero es mucho más optimo
    //utilizar un enfoque dinámico y utilizar variables que se vayan modificando
    int prev_1=2;
    int prev_2=3;
    int aux=0;

    for(int i=4; i<=n;i++){ //Empezamos desde el 4 (que sabemos que es 2+3). Al final la sucesión fibonacci funciona de esta manera array[i]=array[i-2]+array[i-1]. 
            aux=prev_1+prev_2;
            prev_1=prev_2;
            prev_2=aux;
            
    }

    return aux;


        
}