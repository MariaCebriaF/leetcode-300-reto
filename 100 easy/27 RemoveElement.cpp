/* 📌 Día 5: Remove Element
🔗 Enunciado LeetCode: https://leetcode.com/problems/remove-element/description/
🎥 Explicación en YouTube: [Próximamente]
💻 Lenguaje: C++ */
#include <iostream>
#include <vector>
#include <algorithm> //esta librería la pongo porque sería importante para el programa principal (aunque en nuestra función no es necesaria)

/*Ojo, tenemos que mantener el vector "in place", no podemos eliminar como tal. 
la estrategia será modificar el vector e ir desplazando los elementos que sean igual 
que val al final, para posteriormente imprimir hasta la cantidad de numeros que sean distintos a val*/

int removeElement(vector<int>& nums, int val) {
    int k=0; //usaremos esta variable para ir calculando el tamaño final del vector
    for(int i=0; i<nums.size();i++){
        if(nums[i]!=val){  //si en la posición i el valor es distinto al valor, sobreescrimimos en el vector esa posición teniendo en cuenta a k 
           nums[k]=nums[i]; 
           k++; //importante ir aumentando k 
        }
        

    }
        return k; //devolvemos el tamaño del vector 
}

//Función que usará leetcode para comprobar nuestra función 
int main(){
    int[] nums = [...]; // Input array
    int val = ...; // Value to remove
    int[] expectedNums = [...]; // The expected answer with correct length.
                            // It is sorted with no values equaling val.

    int k = removeElement(nums, val); // Calls your implementation

    assert k == expectedNums.length;
    sort(nums, 0, k); // Sort the first k elements of nums
    for (int i = 0; i < actualLength; i++) {
        assert nums[i] == expectedNums[i];
    }
}