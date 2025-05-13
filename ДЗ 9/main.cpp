#include <iostream>
#include "ÄÇ 9.h"
using namespace std;

int main() {
    int ar[10] = { 1, 3, 5, 7, 9 };
    int size = 5;

    deleteFirst(ar, size);
    deletePosition(ar, size, 2);
    deleteCount(ar, size);
    deleteEl(ar, size, 5);
    addEl(ar, size, 4, 1);

    for (int i = 0; i < size; i++) {
        cout << ar[i] << " ";
    }

   
    int* dynAr = new int[5] {1, 3, 5, 7, 9};
    int dynSize = 5;
    deleteAr(dynAr, dynSize); 

    return 0;
}
