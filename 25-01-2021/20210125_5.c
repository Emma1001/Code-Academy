#include <stdio.h>

int main(void){
    int c;
    int isSpace = 0;

    while ((c = getchar()) != EOF){
        if((c >= 'a' && c<='z') || (c>='A' && c<='Z')){
            putchar(c);
        }
    }
    
    return 0;
}
