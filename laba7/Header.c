#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
void getString(char **string, int *size) {
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
void printArray(const char *arr) {
    printf("array:\n");
    printf("%s", arr);
    printf("\n");
}

void enterSizeKWord(int *k) {
    printf("enter minimum size of word:\n");

    while (scanf_s("%d", k) != 1 || getchar() != '\n' || *k < 0) {
        printf("input error try again\n");
        rewind(stdin);
    }
}

void erase(char **arr, int *size, int pos, int length) {
    for (int i = pos; i < *size - length; i++) {
        (*arr)[i] = (*arr)[i + length];
    }
    (*size) -= length;
    *arr = (char *) realloc(*arr, *size * sizeof(char));
    (*arr)[*size] = '\0';
}
void preprocessString(char **arr, int *size) {
    int i = 0;
    while ((*arr)[i] == ' ') {
        erase(arr, size, i, 1);
    }

    i = *size - 1;
    while ((*arr)[i] == ' ') {
        erase(arr, size, i, 1);
        i--;
    }

    i = 1;
    while (i < *size) {
        i++;

        if ((*arr)[i] == ' ') {
            i++;
            while ((*arr)[i] == ' ') {
                erase(arr, size, i, 1);
            }
        }
    }
}
void processWord(char **arr, int *size, const int k) {
    preprocessString(arr, size);

    int i = 0, wordSize = 0;
    while (i < *size) {
        if ((*arr)[i] == ' ') {
            if (wordSize < k) {
                i -= wordSize;
                erase(arr, size, i, wordSize);
            }
            wordSize = 0;
        } else {
            wordSize++;
        }
        i++;
    }

    if (wordSize < k) {
        i -= wordSize;
        erase(arr, size, i, wordSize);
    }

    preprocessString(arr, size);
}


