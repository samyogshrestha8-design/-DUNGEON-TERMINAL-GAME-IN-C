#include<stdio.h>
#include<stdbool.h>
#include"tools.h"


  void Key_Escape (){
    printf("starting level 1 \n");
    bool isrunning = true, haskey = false;
    int KeyX =-1 , KeyY=-1;
    int playerX=1 , playerY=1;
    int existX=-1,existY=-1;
    char map [MAX_ROWS][MAX_COLS +1] = {
        "#########",
        "#P      #",
        "#   k## #",
        "#    e  #",
        "#########"
    };
    for(int i = 0; i < MAX_ROWS;i++){
        for(int j = 0; j<MAX_COLS;j++){
            if(map[i][j]=='k'){KeyX= i; KeyY = j; }
            if(map[i][j]=='e'){existX=i;existY=j;}
        }
    }
   while (isrunning){
    for(int i = 0 ; i <5;i++){
        printf("%s \n",map[i]);
        
    }
    char userinput = '\0';
    printf("W A S D to move , q to quit: ");
    scanf(" %c",&userinput);
    if(userinput == 'q'){
        isrunning = false;

    }
    playermoves(userinput, &playerX ,&playerY,map,5,9,&isrunning);
    findkey(map,playerX,playerY,KeyX,KeyY,&haskey);
    wincheck(&haskey,&isrunning, map,playerX, playerY,existX,existY);
    
  
   }





   }

