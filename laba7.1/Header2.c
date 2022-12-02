#include"Header.h"
#include<stdio.h>
void Task1()
{
    int k=0,size;
    char *arr;
    printf("fill array\n");
    getString(&arr, &size);
    printArray(arr);
    enterSizeKWord(&k);
    processWord(&arr, &size, k);
    printArray(arr);

}
 void Task2()
 {
     int size, size1;
     char *arr,*string;
     printf("fill array\n");
     getString(&arr, &size);
     getString(&string, &size1);
     findSameString(&arr,string,&size);
     printArray(arr);
 }
