#include <stdio.h>

int main(void){
    int c, count = 0;

    while ((c = getchar()) != EOF){
        count++;
    }

    printf("Count: %d",count);
    
    return 0;
}
