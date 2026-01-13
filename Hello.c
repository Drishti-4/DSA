# include<stdio.h>
#include<math.h>

int main() {
 int n;
 printf("enter number :");
 scanf("%d", &n);
 
 for(int i=1; i<=10; i++){
    printf("product is %d\n",n * i );
 }
 
    return 0; 
}