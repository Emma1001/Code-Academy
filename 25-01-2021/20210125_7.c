#include <stdio.h>

int main(void){
    int c;
    int count = 0;
    char text[255];

    while ((c = getchar()) != EOF){
        text[count] = c;
        count++;
        if(c == '\n'){
            if(count>80){
                for (int i = 0; i < count; i++)
                {
                    printf("%c", text[i]);
                }
            }
            count=0;
        }
    }
    
    
    return 0;
}
