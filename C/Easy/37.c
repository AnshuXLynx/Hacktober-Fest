#include <stdio.h>

int main() {
    
    for (int i = 0; i < 6; i++) {
         printf("%d\n", i);  
         if (i == 5) {
            printf("Reached 5!\n");
            break;
        }   
    }
    return 0;
}