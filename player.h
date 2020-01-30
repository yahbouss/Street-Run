#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

struct PlayerScore{
    char Name[50];
    int Score;
};typedef struct PlayerScore Player;

struct Position {
    int x;
    int y;
};typedef struct Position pos;

struct ssize{
    int height;
    int width;
};typedef struct ssize ssize;



#endif // PLAYER_H_INCLUDED
