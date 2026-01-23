#include <stdio.h>
#include <math.h>
int main () {
    printf("%d \n", 3 >= 4);
    printf("%d \n", 3 <=4);
    printf("%d \n", 5!=4);
    printf("%d \n", 2==2);
    printf("%d \n", 2==3);
    printf("%d \n", 4<3);
    printf("%d \n", (4>3) && (5>6));
    printf("%d \n", (4>3)&&(6>5));
    printf("%d \n", (4>5) || (4>3));
    printf("%d \n", !(3>4));
    printf("%d \n", !((4>3)&&(5>4)));
    printf("%d \n", !((4>3) || (5>6)));
    return 0;
}