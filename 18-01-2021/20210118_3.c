#include <stdio.h>

int main(){
    
    int x = 10, y = 10, z = 30;
    int true = ++x + (x || y), false;

    printf("%d\n", true);

    return 0;
}
