#include <stdio.h>

int main() {
char ch;
printf("enter character: ");
scanf("%c", &ch);

if(ch >= 'a' && ch < 'z'){
    printf("lower case \n");
}
else if(ch >= 'A' && ch < 'Z'){
    printf("UPPER CASE \n");
}
else {
    printf("not an english letter \n");
}
return 0;
}

