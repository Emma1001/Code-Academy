#include <stdio.h>

int main(){
    
    int iX = 13;
    int iY = 44;
    int iResult = 0;

    iResult = iX - iY;
    printf("%d - %d = %d \n", iX, iY, iResult);

    iResult = iX / iY;
    printf("%d / %d = %d \n", iX, iY, iResult);

    iResult = iX % iY;
    printf("%d / %d Remainder: %d \n", iX, iY, iResult);

    iResult = iX * iY;
    printf("%d * %d = %d \n", iX, iY, iResult);

    iResult = iX + iY;
    printf("%d + %d = %d \n", iX, iY, iResult);
    return 0;
}
