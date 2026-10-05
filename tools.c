#include<stdio.h>
#include<stdbool.h>
#include <conio.h>
#include <windows.h>
#include"tools.h"

   
  void playermoves(
    char userinput,
    int *playerX,
    int *playerY,
    char map[MAX_ROWS][MAX_COLS + 1],
    int rows,
    int cols,
    bool *isruning
) {
    int newX = *playerX;
    int newY = *playerY;

    if (userinput == 'w' || userinput == 'W')
        newX--;
    else if (userinput == 's' || userinput == 'S')
        newX++;
    else if (userinput == 'd' || userinput == 'D')
        newY++;
    else if (userinput == 'a' || userinput == 'A')
        newY--;

 
    if (newX < 0 || newX >= rows ||
        newY < 0 || newY >= cols) {
        return;
    }

 


    if (map[newX][newY] == '#') {
        return;
    }

    
    map[*playerX][*playerY] = ' ';

    *playerX = newX;
    *playerY = newY;

    map[*playerX][*playerY] = 'P';
}
    void findkey(char map[MAX_ROWS][MAX_COLS +1],int playerX ,int playerY,int KeyX,int KeyY,bool *haskey){
    if (map[playerX][playerY]==map[KeyX][KeyY]){
        *haskey = true;
    }}
    void wincheck(bool *haskey,bool *isrunning, char map[MAX_ROWS][MAX_COLS +1],int playerX ,int playerY,int existX,int existY){

    if (map[playerX][playerY] == map[existX][existY]){
        if(*haskey == true){
            printf("========================\n");
            printf("      YOY HAVE WON \n");
            printf("========================\n");
            printf("wait 2 secs to play again\n");
        
        *isrunning = false;
        Sleep(2000);
        return;
        }
        else if (*haskey == false){printf("FIND THE KEY");}

        
        
    }
    

}
void enemymove(int *enemyX,
               int *enemyY,
               char map[MAX_ROWS][MAX_COLS + 1])
{
    static int direction = 1;

    int newX = *enemyX;
    int newY = *enemyY + direction;

    if(map[newX][newY] == '#')
    {
        direction *= -1;
        return;
    }

    map[*enemyX][*enemyY] = ' ';

    *enemyY = newY;

    map[*enemyX][*enemyY] = 'X';
    
}
void loss(int playerX,int playerY,int enimeX,int enimeY,bool *isrunning){
if (playerX == enimeX && playerY == enimeY){
    *isrunning = false;
        if(*isrunning == false){
         printf("========================\n");
        printf("      YOY HAVE LOST \n");
        printf("========================\n");
        printf("wait 2 secs to play again\n");
            Sleep(2000);
        }

}
}