#include<stdio.h>
#include<stdbool.h>
#include"tools.h"
void level3(){
    printf("starting level 2\n");
    bool isruning = true;
    bool haskey = false;
    int playerX= 1,playerY=1;
    int keyX= -1,keyY=-1;
    int existX = -1,existY=-1;
    char map[MAX_ROWS][MAX_COLS + 1] = {
    "###############################",
    "#P      #       #       #     #",
    "####### # ##### # ##### # ### #",
    "#       # #   # # #     # #   #",
    "# ####### # # # # # ##### # # #",
    "#       #   # #   #     # # # #",
    "####### ##### ##### ### # # # #",
    "#       #       # K #   #   # #",
    "# ##### # ##### ### ##### ### #",
    "# #     #     #       #     # #",
    "# # ######### ####### ##### # #",
    "# #         #       #     # #",
    "# ######### ####### ##### # #",
    "#                     #   E #",
    "###############################"
};
for(int i = 0; i < 15;i++){
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
    for(int i = 0 ; i <15;i++){
        printf("%s\n",map[i]);
    }
    char input = '\0';
    printf("W A S D to move , q to quit: ");
    scanf(" %c",&input);
    playermoves(input,&playerX,&playerY,map,15,31);
    findkey(map,playerX,playerY,keyX,keyY,&haskey);
    wincheck(&haskey,&isruning,map,playerX,playerY,existX,existY);

}
}