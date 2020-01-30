#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "player.h"

int main(){
    Player Players[5];
    read_players(Players);
    sort_players(Players);
    display_players(Players);


    FILE* score=fopen("D:\\9raya and stuff\\MedTech\\Sem 2\\ISS Project\\Game\\score.txt","a");
     if (score==NULL){
        printf("error");
        exit(0);
    }
    for (int i=0;i<5;i++)
    {
        fprintf(score,"Player's name is %s : ",Players[i].Name);
        fprintf(score,"Player's Score %i \n",Players[i].Score);

    }
fclose(score);
    return 0;
}
