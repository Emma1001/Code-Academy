#include <stdio.h>

int main(void){
    int c;
    int letters = 0, digits = 0;

    while ((c = getchar()) != EOF){
        if(c >= '0' && c <= '9'){
            digits++;
            continue;
        }

        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
            letters++;
        }
    }
    
    printf("Letters: %d\nDigits: %d\n", letters, digits);
    
    return 0;
}
