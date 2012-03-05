
#ifndef _TYPES_H
#define _TYPES_H

// represents a direction on a 2d map
typedef enum {
  DIR_UP = 0,
  DIR_RIGHT = 1,
  DIR_DOWN = 2,
  DIR_LEFT = 3
} direction;

// represents a collection of fruit, which can be eaten by the snake
typedef struct fruits {
  WINDOW** fruits;
  int length;
} FRUITS;

// the snake
typedef struct snake {
  WINDOW** parts;
  int length;
  direction dir;
  int grow;
} SNAKE;

// a struct containing all the data needed for a game
typedef struct game {
  FRUITS fruits;
  SNAKE snake;
  time_t started;
  time_t ended;
  int highscore;
} GAME;

#endif /* _TYPES_H */