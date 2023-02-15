#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *num = (char*)malloc(1024 * sizeof(char));
    int count[10] = {0};

    scanf("%s", num);

    for (int i = 0, l = strlen(num); i < l; i++) {
        if ((num[i] >= '0') && (num[i] <= '9')) {
            count[num[i] - '0']++;
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", count[i]);
    }
    printf("\n");

    free(num);
    return 0;
}
