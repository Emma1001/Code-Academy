#include <stdio.h>

int main()
{
    int number = 1;
    for (;;)
    {
        printf("%d\n", number);
        if(number == 48)
            break;
        number++;
    }
    return 0;
}
