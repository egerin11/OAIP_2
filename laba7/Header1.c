#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void getString1(char **string, int *size) {
    *size = 0;
    int realSize = 16;
    *string = (char *) malloc(realSize * sizeof(char));
    rewind(stdin);
    char check;
    while (true) {
        check = getchar();
        if (check == '\n') {
            (*string)[*size] = '\0';
            return;
        }
        (*string)[*size] = check;
        (*size)++;
        if (*size + 1 == realSize) {
            realSize *= 2;
            *string = (char *) realloc(*string, realSize * sizeof(char));
        }
    }

}
void printArray1(const char *arr) {
    printf("array:\n");
    printf("%s", arr);
    printf("\n");
}
void erase1(char **arr, int *size, int pos, int length) {
    for (int i = pos; i < *size - length; i++) {
        (*arr)[i] = (*arr)[i + length];
    }
    (*size) -= length;
    *arr = (char *) realloc(*arr, *size * sizeof(char));
    (*arr)[*size] = '\0';
}
int strLen(const char *arr)
{
    int i=0;
    while (arr[i]!='\0')
        i++;
    return i;
}
void findSameString(char **arr,char* string,int *size)
{
for(int i=0;i<*size;i++) {

    if ((*arr)[i] == string[0]) {
        int j = 0, f = 0;
        while (j < strLen(string)) {
                if ((*arr)[i + j] != string[j])
                    f = 1;
                j++;
        }
        if (!f) {
            erase(arr, size, i, strLen(string));
            printf("hui1");
            break;
        }

    }
}
}




