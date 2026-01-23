#include <stdio.h>
#include<math.h>
int main () {
    int x;
    printf("enter a number");
    scanf("%d", &x);

    int y;
    printf("enter a number");
    scanf("%d", &y);

    int rem = x % y ;
    printf("%d \n", rem);

    return 0;

        
}
