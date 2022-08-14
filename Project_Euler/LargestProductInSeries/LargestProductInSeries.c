#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned long long int ulli;
ulli product_of_digits(char digits_string[13]);
char* max_product(char string1[13], char string2[13]);

// Main function starts here
int main(void)
{
    // Create a file pointer to the file containing 1000 digits no. 
    FILE *f = fopen("1000-digit-no.txt", "r");

    // Mandatory safety check
    if (f == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    // 14 character long buffer to store 13 digits long strings with the null character
    char buffer[14];
    // Variable to strong the string with largest digit product
    char largest_prod_string[14];
    // Counter variable for the number of times the file is read
    int count = 0;

    // Loop to loop over the file and extracting 13 digits at a time and storing in buffer
    while (fgets(buffer, sizeof(buffer), f)) {
        // Check if the string stored in buffer is 13 characters long, exit out of the loop otherwise
        // Done to prevent the loop to extract beyond the end of the file with few blank digits
        if (strlen(buffer)  != 13)
        {
            break;
        }
        
        // Determine the string with the maximum digit product among the current 
        // and the Largest known digit product. Store the result in a variable
        strcpy(largest_prod_string, max_product(largest_prod_string, buffer));
        // Update counter
        count++;
        // Move the file pointer count bytes ahead of the starting of the file
        // Done to get every consecutive 13-digit string in the file
        fseek(f, count, SEEK_SET);
    }

    // Print the result
    printf("\nThe 13 consecutive digits in the 1000 digit number with largest product of digits is as follows :\n");
    printf("\nThe 13 consecutive digits are : %s\n", largest_prod_string);

    ulli largest_product = product_of_digits(largest_prod_string);
    printf("The Largest product (product of the above 13 consecutive digits) is : %llu\n\n", largest_product);

    // Close the file
    fclose(f);
    return 0;
}

// Function to return the product of digits of a 13-digit string
ulli product_of_digits(char digits_string[13])
{
    char *ptr;
    // Converting digits string to a number using the function strtoull()
    ulli digits = strtoull(digits_string, &ptr, 10);
    // Variable to calculate product
    ulli prod = 1;

    // Calculating product of the digits of the number
    while (digits > 0) {
        prod *= (digits % 10);
        digits /= 10;
    }

    // Return the product
    return prod;
}

// Function to compare two 13-digit strings and return one with the maximum product of digits
char* max_product(char string1[13], char string2[13])
{
    // Determine the product of the digits for both the strings
    ulli prod1 = product_of_digits(string1);
    ulli prod2 = product_of_digits(string2);

    // Return the pointer to the string with the maximum product of digits
    if (prod1 > prod2) {
        return string1;
    }
    else {
        return string2;
    }
}
