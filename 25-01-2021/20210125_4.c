#include <stdio.h>

int main(void){
    int c;
    int isSpace = 0;

    while ((c = getchar()) != EOF){
        if(c == ' '&&isSpace){
            continue;
        } else if (c == ' '){
            isSpace = 1;
        }else{
            isSpace = 0;
        }

        putchar(c);
    }
    
    return 0;
}
