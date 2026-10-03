#ifndef TOOLS_H
#define TOOLS_H

#include <stdbool.h>

#define MAX_ROWS 20
#define MAX_COLS 40

void playermoves(
    char userinput,
    int *playerX,
    int *playerY,
    char map[MAX_ROWS][MAX_COLS + 1],
    int rows,
    int cols
);

void findkey(
    char map[MAX_ROWS][MAX_COLS + 1],
    int playerX,
    int playerY,
    int KeyX,
    int KeyY,
    bool *haskey
);

void wincheck(
    bool *haskey,
    bool *isrunning,
    char map[MAX_ROWS][MAX_COLS + 1],
    int playerX,
    int playerY,
    int existX,
    int existY
);

#endif