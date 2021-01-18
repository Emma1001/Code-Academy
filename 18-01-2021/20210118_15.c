#include <stdio.h>

int main(){
    
    int nA;
    scanf("%d", &nA);
    int nB = ( nA == 1 ? 2 : 0 );
    printf("A value is %d\n", nA); 
    printf("B value is %d\n", nB);

    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    int result = a > b ? a : b;
    printf("The bigger digit is: %d", result);
    return 0;
}
