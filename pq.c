#include <stdio.h>
#include <math.h>
int main () {
    int marks;
    printf("enter a number : ");
    scanf("%d" , &marks);

    if(marks > 30 && marks < 100) {
        printf("pass \n");
    }
    else if(marks <= 30) {
        printf("fail \n");
    }
    else {
        printf("not valid \n");
    }
    return 0;
}