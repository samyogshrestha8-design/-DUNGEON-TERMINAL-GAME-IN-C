#include<stdio.h>
#include"tools.h"
   void playermoves(char userinput,int *playerX ,int *playerY,char map [MAX_ROWS][MAX_COLS +1],int rows , int cols){
    int newX = *playerX;
    int newY = *playerY;
    if(userinput == 'w' || userinput == 'W')newX--;
    else if(userinput == 's' || userinput == 'S')newX++;
    else if(userinput=='d'||userinput=='D')newY ++;
    else if(userinput=='a'||userinput=='A')newY --;
        if(newX < 0 || newX >= rows ||
       newY < 0 || newY >= cols)
    {
        return;
    }
    if (map[newX][newY] !='#'){
        map[*playerX][*playerY]=' ';
        *playerX= newX;
        *playerY=newY;
        map[*playerX][*playerY]='P';

    }}
    void findkey(char map[MAX_ROWS][MAX_COLS +1],int playerX ,int playerY,int KeyX,int KeyY,bool *haskey){
    if (map[playerX][playerY]==map[KeyX][KeyY]){
        *haskey = true;
    }}
    void wincheck(bool *haskey,bool *isrunning, char map[MAX_ROWS][MAX_COLS +1],int playerX ,int playerY,int existX,int existY){

    if (map[playerX][playerY] == map[existX][existY]){
        if(*haskey == true){
        printf("YOU HAVE WON");
        
        *isrunning = false;
        return;
        }
        else if (*haskey == false){printf("FIND THE KEY");}
        
        
    }
    

}