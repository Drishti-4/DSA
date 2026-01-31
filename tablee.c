#include <stdio.h>
#include <math.h>
int main () {
    int i;
    printf("enter a number : ");
    scanf("%d", &i);
    

    for(int j = 1; j<= 10; j++) {
    
       printf(" %d \n" , j * i);  
    }
    
    return 0;

}