/* 📌 Día 7: Search Insert Position
🔗 Enunciado LeetCode: https://leetcode.com/problems/search-insert-position/description/
🎥 Explicación en YouTube: [Próximamente]
💻 Lenguaje: C++ */

#include <iostream>
#include <vector>
using namespace std;
/*Este es un ejercicio típico de búsqueda binaria. ¿Por qué? 
1- Debemos buscar un elemento con un valor en concreto sabiendo que el array/vector está ordenado, en orden ascendente
2- Nos exigen un algoritmo optimo (O(log n)), por tanto es nuestra mejor opcion*/

int searchInsert(vector<int>& nums, int target) {
    int menor = 0; 
    int mayor = nums.size() - 1; 

    while (menor <= mayor) { 
        int medio = menor + (mayor - menor) / 2;

        if (nums[medio] == target) {
            return medio;
        } else if (nums[medio] < target) {
            menor = medio + 1;
        } else {
            mayor = medio - 1;
        }
    }

    // Si no se encuentra, menor es la posición donde se insertaría
    return menor;
}

int main() {
    vector<int> nums = {1, 3, 5, 6};
    int target = 2;

    int resultado = searchInsert(nums, target);
    cout << "Índice: " << resultado << endl;

    return 0;
}
