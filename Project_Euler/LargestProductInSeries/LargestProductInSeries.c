#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef unsigned long long int ulli;
ulli product_of_digits(char digits_string[13]);
char* max_product(char string1[13], char string2[13]);

int main(void)
{
    FILE *f = fopen("1000-digit-no.txt", "r");

    if (f == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    char buffer[14];
    char largest_prod_string[14];
    int count = 0;

    while (fgets(buffer, sizeof(buffer), f)) {
        if (strlen(buffer)  != 13)
        {
            break;
        }
        strcpy(largest_prod_string, max_product(largest_prod_string, buffer));
        if (product_of_digits(buffer) != 0) {
        }
        count++;
        fseek(f, count, SEEK_SET);
    }

    printf("The 13 consecutive digits in the 1000 digit number with largest product of digits is as follows :\n");
    printf("The 13 consecutive digits are : %s\n", largest_prod_string);
    printf("The Largest product (product of the above 13 consecutive digits) is : %llu\n", product_of_digits(largest_prod_string));

    fclose(f);
    return 0;
}

ulli product_of_digits(char digits_string[13])
{
    char *ptr;
    ulli digits = strtoull(digits_string, &ptr, 10);
    ulli prod = 1;

    while (digits > 0) {
        prod *= (digits % 10);
        digits /= 10;
    }

    return prod;
}

char* max_product(char string1[13], char string2[13])
{
    ulli prod1 = product_of_digits(string1);
    ulli prod2 = product_of_digits(string2);

    if (prod1 > prod2) {
        return string1;
    }
    else {
        return string2;
    }
}
