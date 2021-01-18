#include <stdio.h>

int main(){
    
    int nA, nB, nX, nY;
    scanf("%d", &nA);
    scanf("%d", &nB);
    scanf("%d", &nX);
    scanf("%d", &nY);

    if (nA > nB && nA !=0) {
        printf("&& Operator : Both conditions are true\n");
    }

    if (nX > nY || nY != 20) {
        printf("|| Operator : Only one condition is true\n");
    }

    if (!(nA > nB && nB !=0)) {
        printf(" ! Operator : Both conditions are true\n");
    } else {
        printf("Both conditions are true.\n");
    }
    
    return 0;
}
