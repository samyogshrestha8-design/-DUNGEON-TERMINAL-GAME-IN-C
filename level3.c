#include<stdio.h>
#include<stdbool.h>
#include<windows.h>
#include<conio.h>
#include"tools.h"
void level3(){
    printf("starting level 2\n");
    bool isruning = true;
    bool haskey = false;
    int playerX= 1,playerY=1;
    int keyX= -1,keyY=-1;
    int existX = -1,existY=-1;
    int enemyX = -1,enemyY= -1;
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
    "#                 X    #   E #",
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
        if(map[i][j]=='X'){
            enemyX = i;
            enemyY = j;
        }


        
    }
}
while (isruning){
  
    if(_kbhit()){
        char input =_getch();
        playermoves(input,&playerX,&playerY,map,15,31,&isruning);
        
    }

     
    static int count = 0;
    count ++;
    if(count>5){
        count = 0;
        enemymove(&enemyX,&enemyY,map);


    }
    
    findkey(map,playerX,playerY,keyX,keyY,&haskey);
    wincheck(&haskey,&isruning,map,playerX,playerY,existX,existY);
  
    system("cls");
     for(int i = 0 ; i <15;i++){
        printf("%s\n",map[i]);
    }
    loss(playerX,playerY,enemyX,enemyY,&isruning);
    Sleep(30);
    
    

}
}