#ifndef SCORETABLE_H_INCLUDED
#define SCORETABLE_H_INCLUDED

struct Characters{
    char name[50];
    pos position;
    ssize csize;
};typedef struct Characters Characters;

void read_players(Player Players[5]);
void sort_players(Player Players[5]);
void display_players(Player Players[5]);
void save_score(Player Players[5]);

#endif // SCORETABLE_H_INCLUDED
