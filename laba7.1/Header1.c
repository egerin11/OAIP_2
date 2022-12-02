
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

            break;
        }

    }
}
}




