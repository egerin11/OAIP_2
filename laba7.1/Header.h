#include "Header.c"
#include "Header1.c"
#ifndef HEADER_H
#define HEADER_H
void getString(char **, int *);
void printArray(const char *arr);
void processWord(char **arr, int *size, const int k);
void enterSizeKWord(int *k);
void erase(char **arr, int *size, int pos, int length);
void preprocessString(char **arr, int *size);
void findSameString(char **arr,char* string,int *size);
int strLen(const char *arr);
#endif