#include <stdio.h>

int main(){
    
    int x = 10, y = 10;
    int true = x && y & x << 1, false = x && y ^ x << 1;

    printf("%d\n", true);
    printf("%d\n", false);
    return 0;
}
