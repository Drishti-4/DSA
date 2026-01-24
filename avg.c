#include <stdio.h>
#include <math.h>
int main () {
    int a;
    printf("enter a number: ");
    scanf("%d",&a);

    int b;
    printf("enter a number : ");
    scanf("%d",&b);

    int c;
    printf("enter a number : ");
    scanf("%d", &c);

    int d;
    d = (a + b + c) / 3;
    printf("%d \n", d);

    return 0;

}