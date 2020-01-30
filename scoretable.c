#include "player.h"
#include "scoretable.h"

void read_players(Player Players[5])
{
    for (int i=0;i<5;i++)
    {
        printf("Player's name: ");
        scanf("%s",&Players[i].Name);
        printf("Player's Score: ");
        scanf("%i",&Players[i].Score);
    }
}
void sort_players(Player Players[5])
{
     for(int j=0;j<5;j++)
        for (int i=0;i<(5-j);i++)
        {
            if(Players[i].Score>Players[i+1].Score)
            {
            //score swap
                int Temp= Players[i].Score;
                Players[i].Score=Players[i+1].Score;
                Players[i+1].Score=Temp;
            //player swap
                char Tempp[50];
                strcpy(Tempp,Players[i].Name);
                strcpy(Players[i].Name,Players[i+1].Name);
                strcpy(Players[i+1].Name,Tempp);
            }

        }
    }
void display_players(Player Players[5])
{
    for (int i=0;i<5;i++)
    {
        printf("Player's name is %s : ",Players[i].Name);
        printf("Player's Score %i \n",Players[i].Score);

    }
}

void save_score(Player Players[5])

{
    FILE* f=fopen("D:\\9raya and stuff\\MedTech\\Sem 2\\ISS Project\\Game\\score.txt","a");
     if (f==NULL){
        printf("error");
        exit(0);
    }
    for (int i=0;i<5;i++)
    {
        fprintf(score,"Player's name is %s : ",Players[i].Name);
        fprintf(score,"Player's Score %i \n",Players[i].Score);

    }
}
