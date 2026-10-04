// #include <stdio.h>
// #include <windows.h>

// #define gridR 10
// #define gridC 10

// void printGrid(int *AX, int *AY, char grid[gridR][gridC])
// {
//     // Clear grid
//     for (int i = 0; i < gridR; i++)
//     {
//         for (int j = 0; j < gridC; j++)
//         {
//             grid[i][j] = '.';
//         }
//     }

//     // Put A at current position
//     grid[*AX][*AY] = 'A';

//     // Print grid
//     for (int i = 0; i < gridR; i++)
//     {
//         for (int j = 0; j < gridC; j++)
//         {
//             printf("%c ", grid[i][j]);
//         }

//         printf("\n");
//     }
// }

// int main(void)
// {
//     char grid[gridR][gridC];

//     int AX = 5;
//     int AY = 0;

//     while (AY < gridC)
//     {
        

//         printGrid(&AX, &AY, grid);

//         AX--;

//         Sleep(1000);
//     }

//     return 0;
// }
#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main() {
    int running = 1;

    while (running) {

        // Check if a key was pressed
        if (_kbhit()) {
            char input = _getch();

            if (input == 'w') {
                printf("UP\n");
            }
            else if (input == 's') {
                printf("DOWN\n");
            }
            else if (input == 'q') {
                running = 0;
            }
        }

        // This loop keeps running even when no key is pressed
        printf("Game is running...\n");

        Sleep(100);
    }

    return 0;
}