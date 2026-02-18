#include <stdio.h>
#include <math.h>

int sum(int a,int b);
void printTable(int n);

int main () {
    int n;
    printf("enter a number :");
    scanf("%d ", &n);


    int a, b;
    printf("enter a number :");
    scanf("%d ", &a);
    printf("enter a number :");
    scanf("%d ", &b);

    int s = sum(a , b);
    printf("sum is : %d \n", &sum);

    return 0;

}

    int sum(int x,int y) {
        return x + y;
    }

    void printTable(int n) {
        for(int i = 1; i <= 10; i++){
            printf("n * i");
        }

    }




