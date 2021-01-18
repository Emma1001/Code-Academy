#include <stdio.h>

int main(){
    int x = 10, y = 10, z = 30;
    int true = x == y + (z < y) != 20;
    printf("%d\n", true); //1

    return 0;
}
