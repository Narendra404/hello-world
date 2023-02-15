#include <stdio.h> 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < (i + 1); j++) {
            
            printf("%d ", (n - j));
        }

        for (int k = 0, m = ((2 * n) - 1); k < (m - (2 * (i + 1))); k++) {
            
            printf("%d ", (n - i));
        }

        for (int l = (i + 1); (l > 0); l--) {
            
            if (l == n) {
                
                continue;
            }
            printf("%d ", (n - (l - 1)));
        }

        printf("\n");
    }
    
    for (int i = (n - 1); i > 0; i--) {
        
        for (int j = 0; j < i; j++) {
            
            printf("%d ", (n - j));
        }
        
        for (int k = 0, m = ((2 *n) - 1); k < (m - (2 * i)); k++) {
        
            printf("%d ", (n - (i - 1)));
        }

        for (int l = (n - i); l < n; l++) {
            
            printf("%d ", (l + 1));
        }

        printf("\n");
    }
    return 0;
}
