#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    int *temp = (int*)malloc(num * sizeof(int));

    for (i = 0; i < num; ++i) {
        temp[(num - 1) - i] = arr[i];
    }

    for (i = 0; i < num; ++i) {
        arr[i] = temp[i];
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));

    free(temp);
    free(arr);
    return 0;
}
