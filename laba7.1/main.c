#include<stdio.h>
#include"Header2.h"

int main() {
    int a;

    do {
        printf(" Choose the task 1 - 2 \nfor exit input 3\n");
        while (scanf("%d", &a) != 1 || getchar() != '\n' || a < 1 || a > 3) {
            printf("input error try again\n");
            rewind(stdin);
        }
        void (*p[2])() ={Task1, Task2};
        ((*p[a - 1])());

    }while(a!=3);

    return 0;
}

