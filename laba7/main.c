#include<stdio.h>
#include"Header2.h"

int main() {
    int a;

    void (*p[2])() ={Task1, Task2};
  do
  {
      printf(" Choose the task 1 or 2 \nfor exit input 3\n");
      scanf("%d", &a);
   switch (a) {
       case 1:
           p[0]();
           break;
       case 2:
           p[1]();
           break;
   }
    }while(a!=3);
    return 0;
}

