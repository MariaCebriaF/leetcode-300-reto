/* 📌 Día 14: Merge Sorted Array
🔗 Enunciado LeetCode: https://leetcode.com/problems/merge-sorted-array/description/
🎥 Explicación en YouTube: [Próximamente]
💻 Lenguaje: C++ */


#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1;           
    int j = n - 1;           
    int k = m + n - 1;       


    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }

    // por si queda algo sin copiar del segundo vector 
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }
}