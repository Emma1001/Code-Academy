#include <stdio.h>

int main(){
    
    printf("Press 1 to see message Hello\n");
    printf("Press 2 to see Poem\n");
    printf("Press 3 to see hidden message\n");

    int number;
    scanf("%d", &number);

    switch (number){
    case 1:
        printf("Hello!\n");
        break;
    case 2:
        printf("Poem!\n");
        break;
    case 3:
        printf("Hidden message!\n");
        break;
    default:
        printf("Incorrect number!\n");
        break;
    }

    return 0;
}
