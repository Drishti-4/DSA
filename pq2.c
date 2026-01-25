#include <stdio.h>
#include <math.h>
int main () {
    int marks;
    printf("enter a number : ");
    scanf("%d" ,&marks);
    if(marks >= 90 && marks <= 100) {
        printf("A+ \n");
    }
    else if(marks < 90 && marks >= 90) {
        printf("A \n");
    }
    else if(marks < 70 && marks >= 30) {
        printf("B \n");
    }
    else if(marks < 30){
        printf("C \n");
    }
    else {
        printf("not valid \n");
    }
    return 0;
    }

