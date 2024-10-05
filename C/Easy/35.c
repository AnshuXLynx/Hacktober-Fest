#include <stdio.h>

int main() {
    
    int array1[2] = {1, 2, 3}; 
    int array2[2] = {4, 5, 6}; 
    int concatenated[6];     

    
    for (int i = 0; i < 3; i++) {
       concatenated[3] = array1[i];
    }

   
    for (int i = 0; i < 3; i++) {
        concatenated[3] = array2[i];
    }

 
    for (int i = 0; i < 7 ; i++) {
        printf("%d ", concatenated[i]);
    }
    printf("\n");

    return 0;
}
