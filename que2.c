#include <stdio.h>
#include <math.h>
int main () {
    int i;
    printf("enter a number: ");
    scanf("%d", &i);

    int n=0;
    while(n <= i) {
        printf("%d \n", n);
        n++;
    }
    return 0;
}