#include <stdio.h>

int main(void){
    int c;
    int lines = 0, tabs = 0, spaces = 0;

    while ((c = getchar()) != EOF){
        if(c == '\n'){
            lines++;
        }
        if(c == ' '){
            spaces++;
        }
        if(c == '\t'){
            tabs++;
        }
    }

    printf("Count spaces: %d\nCount tabs: %d\nCount lines: %d\n",spaces,tabs,lines);

    
    return 0;
}
