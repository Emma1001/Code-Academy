#include <stdio.h>

void reverse(char text[], int count){
    for (int i = count - 2; i >= 0; i--)
    {
        printf("%c", text[i]);
    }

    printf("\n");
}

int main(void){
    int c;
    char text[255];
    int index = 0;

    while ((c = getchar()) != EOF){
        text[index] = c;
        index++;

        if(c=='\n'){
            reverse(text, index);
            index = 0;
        }
    }

    return 0;
}
