#include <stdio.h>

int main() {
    int num = 1, i, j, count = 1;

    
    for (i = 1; i <= 5; i++) {
       
        for (j = 1; j <= 5 - i; j++) {
            printf("     ");
        }

       
        for (j = 1; j <= count; j++) {
            printf("%5d", num); 
            num += 2;
        }

        printf("\n");
        count++;
    }

    return 0;
}