
#include <iostream>
using namespace std;
void deleteFirst(int ar[], int& size);
void deletePosition(int ar[], int& size, int a);
void deleteCount(int ar[], int& size);
void deleteEl(int ar[], int& size, int a);
void addEl(int ar[], int& size, int a, int position);
void deleteAr(int*& ar, int& size);


//void dleteFirst(int ar[], int &size ) {
   // for (int i = 0; i < size - 1; i++) {
     //   ar[i] = ar[i + 1];
   // }
   // size--;
//}


//int main()
//{
  //  int ar[5] = { 1, 3, 5, 7, 9};
  //  int size = 5;

 //   dleteFirst(ar, size);
 //   for (int i = 0; i < size; i++) {
  //     cout << ar[i] << " ";
  //  }
//}



//void  deletePosition(int ar[], int& size, int a) {
   // for (int i = a; i < size-1; i++) {
     //   ar[i] = ar[i + 1];
   // }
   // size--;
//}
//int main()
//{
  //  int ar[5] = { 1, 3, 5, 7, 9 };
  //  int size = 5;

  //  deletePosition(ar, size, 2);
   // for (int i = 0; i < size; i++) {
  //      cout << ar[i] << "";
   // }
    
//}

//void deleteAr(int ar[], int& size) {
  //  delete ar;
  //  ar = nullptr;
  //  
//}

//int main()
//{
  //  int size = 5;
  //  int* ar = new int[size] {1, 3, 5, 7, 9};
  //  deleteAr(ar, size);

//}
//void deleteCount(int ar[], int& size) {
  //  int newIn = 0;
   // for (int i = 0; i < size - 1; i++) {
     //   if (ar[i] % 2 != 0) {
      //      ar[newIn] = ar[i];
      //  }
   // }
     //   size = newIn;
       
//}
//int main() {
  //  int ar[5] = { 1, 3, 5, 7, 9 };
  //  int size = 5;

   //  deleteCount(ar, size);
   //  for (int i = 0; i < size; i++) {
  //       cout << ar[i] << " ";
   //  }
//}
//void deleteEl(int ar[], int& size, int a) {
 //   int neweIn = 0;
  //  for (int i = 0; i < size; i++) {
   //     if (ar[i] <= a) {
    //        ar[neweIn++] = ar[i];
    //    }
    //}
   // size = neweIn;
//}
//int main() {
  //  int ar[5] = { 1, 3, 5, 7, 9 };
   // int size = 5;
  //  deleteEl(ar, size);
   // for (int i = 0; i < size; i++) {
   //    cout << ar[i] << " ";
   // }
//}


//void  addEl(int ar[], int& size, int a, int position) {
    //if (position < 0 || position > size) {
      //  cout << "error\n";
      //  return;
   // }
   // for (int i = size; i > position; i--) {
   //     ar[i] = ar[i - 1];
   // }
   // ar[position] = a;
   // size++;

    
//}

//int main() {
  //  int ar[5] = { 1, 3, 5, 7, 9 };
  //  int size = 5;
 //   int a = 4;
  //  int position = 2;
  //  addEl(ar, size, a, position);
  //  for (int i = 0; i < size; i++) {
    //     cout << ar[i] << " ";
    //    }

//}



 


