#include <stdio.h>
#include <math.h>

void Namaste ();
void Bonjour();
void Hello();

int main () {
    char ch;
    printf("enter i for indian & f for french & b for britain:");
    scanf("%c", &ch);
    if (ch == 'i') {
       Namaste();
    }
   

    if (ch == 'f'){
      Bonjour();
    }

    if(ch == 'b'){
        Hello();
    }
   
    return 0;
}

void Namaste() {
    printf("Namaste \n");
}
void Bonjour() {
    printf("Bonjour \n");
}
void Hello() {
    printf("Hello \n");
}
