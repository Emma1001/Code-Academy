#include <stdio.h>

int main(){
    
    printf("Press 1 to see message Hello\n");
    printf("Press 2 to see Poem\n");
    printf("Press 3 to see hidden message\n");

    int number;
    scanf("%d", &number);

    if(number==1){
        printf("Hello!\n");
    }else if(number==2){
        printf("Poem\n");
    }else if(number==3){
        printf("Hidden message\n");
    }else{
        printf("Incorrect number!\n");
    }

    return 0;
}
