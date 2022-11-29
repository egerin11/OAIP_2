#include"Header1.c"
#ifndef HEADER1_H
#define HEADER1_H
void getString1(char **string, int *size);
void printArray1(const char *arr);
void findSameString(char **arr,char* string,int *size);
void erase(char **arr, int *size, int pos, int length);
int strLen(const char *arr);
#endif
