#include <stdio.h>

int main()
{
    int number = 0;
    while (number != 4)
    {
        printf("Press 1 to see message Hello\n");
        printf("Press 2 to see Poem\n");
        printf("Press 3 to see hidden message\n");
        printf("Press 4 to exit\n");

        scanf("%d", &number);

        switch (number)
        {
        case 1:
            printf("Hello!\n");
            break;
        case 2:
            printf("Poem!\n");
            break;
        case 3:
            printf("Hidden message!\n");
            break;
        case 4:
            printf("Bye!\n");
            break;
        default:
            printf("Incorrect number!\n");
            break;
        }
    }

    return 0;
}
