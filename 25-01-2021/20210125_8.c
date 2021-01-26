#include <stdio.h>

int main(void){
    int c;

    while ((c = getchar()) != EOF){
        if(c == ' ' || c == '\t'){
            continue;
        }
        putchar(c);
    }

    return 0;
}
