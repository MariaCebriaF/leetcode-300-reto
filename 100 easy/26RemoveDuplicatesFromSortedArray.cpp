/* 📌 Día 4: Remove Duplicates from Sorted Array
🔗 Enunciado LeetCode: https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
🎥 Explicación en YouTube: [Próximamente]
💻 Lenguaje: C++ */
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

//La función que debemos completar
/*Es muy importante comprender que nos pide el programa y son dos puntos muy importantes:
1. Hay que modificar el vector para que las primeras k posiciones sean números únicos 
2. Hay que averiguar cuantos elementos hay
Por otro lado recomiendo imaginar que hace el vector, porque en el enunciado no se entiende claramente (o al menos a mí me ha costado)
Si nos dan [1,1,2]
k=2, solo hay dos elementos únicos
Primero debemos "mover" los elementos repetidos al final [1,2,1]
Segundo imprimimos solo hasta k=2 (pero recordemos que en los arrays y vectores la posición 2, es 2-1, la posición i será i-1)
 */
int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;

    int k = 0;                              //k=0
    for (int j = 1; j < nums.size(); ++j) {  //j=1
        if (nums[j] != nums[k]) {  //comparamos nums[0] y nums[1] si fueran el mismo numero, directamente j va avanzando y k sigue igual hasta que cumpla la condición
            ++k; //Si son distintos avanzamos k=k+1 nums[1]
            nums[k] = nums[j]; // nums[1]=nums[1]
        }
    }
    return k + 1; // cantidad de números únicos
        
}

int main(){ 
    //Esto nos lo da el enunciado para que sepamos cuál será el
    // programa principal que usen para "mostrar" nuestro resultado
    int[] nums = [...]; // Input array
    int[] expectedNums = [...]; // The expected answer with correct length

int k = removeDuplicates(nums); // Calls your implementation

assert k == expectedNums.length;
for (int i = 0; i < k; i++) {
    assert nums[i] == expectedNums[i];
}
}