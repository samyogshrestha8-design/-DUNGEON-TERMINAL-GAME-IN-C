#include <stdio.h>
#include <stdbool.h>
#include"level.h"


int main()
{
    bool running = true;
    char input;

    while (running)
    {
        printf("========================\n");
        printf("      DUNGEON GAME\n");
        printf("========================\n");
        printf("1) Start\n");
        printf("2) Quit\n");

        printf("Enter choice: ");
        scanf(" %c", &input);

        if (input == '1')
        {
            printf("\n1. Level 1\n");
            printf("2. Level 2\n");
            printf("3. level 3 \n");
            printf("4. Back\n");
            printf("5. Quit\n");

            printf("Enter level: ");
            scanf(" %c", &input);

            if (input == '1')
            {
                printf("ABOUT TO LOAD LEVEL 1\n");
                Key_Escape();
                printf("LEVEL 1 ENDED\n");
            }
            else if (input == '2')
            {
                printf("ABOUT TO LOAD LEVEL 2\n");
                level2();
                printf("LEVEL 2 ENDED\n");
            }
            else if(input == '3'){
                printf("ABOUT TO LOAD LEVEL 2\n");
                level3();
                printf("LEVEL 3 ENDED\n");

            }
            else if (input == '4')
            {
                continue;
            }
            else if (input == '5')
            {
                running = false;
            }
        }
        else if (input == '2')
        {
            running = false;
        }
        else
        {
            printf("Invalid choice!\n");
        }
    }

    printf("Goodbye!\n");

    return 0;
}