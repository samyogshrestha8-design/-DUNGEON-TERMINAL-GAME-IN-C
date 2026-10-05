#include<stdio.h>
#include<stdbool.h>
#include<conio.h>
#include"tools.h"
#include<windows.h>


void level2(){
    printf("starting level 2\n");
    bool isruning = true;
    bool haskey = false;
    int playerX= 1,playerY=1;
    int keyX= -1,keyY=-1;
    int existX = -1,existY=-1;
    char map[MAX_ROWS][MAX_COLS+1] = {
    "###############",
    "#P      #     #",
    "# ##### # ### #",
    "#     # #   # #",
    "##### # ### # #",
    "#       K     #",
    "# ###########E#",
    "###############"
};
for(int i = 0; i < 8;i++){
    for(int j =0; j<MAX_COLS ;j++){
        if(map[i][j]=='K'){
            keyX = i ; 
            keyY = j;

        }
        if (map[i][j]=='E')
        {
            existX= i ;
            existY = j;

        }
        
    }
}
while (isruning){
    if(_kbhit()){
        char input = _getch();
         playermoves(input,&playerX,&playerY,map,8,15,&isruning);
    }
    findkey(map,playerX,playerY,keyX,keyY,&haskey);
    wincheck(&haskey,&isruning,map,playerX,playerY,existX,existY);
    system("cls");
 for(int i = 0 ; i <8;i++){
        printf("%s\n",map[i]);
    }
    Sleep(30);
}

}