#include <stdio.h>
#include <math.h>
int main () {
    int n;
    printf("enter a number :");
    scanf("%d", &n);

    for(int i=20; i<= n ;i++){
        if(i % 2 != 0) {
            break;
        }
        printf("%d \n",i);
    }
    
}