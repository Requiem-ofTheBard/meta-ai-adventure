#ifndef LOCATION_H
#define LOCATION_H

typedef struct {
    char* name;
    char* description;
    int north;
    int south;
    int east;
    int west;
} Location;

extern Location locations[];
extern int current_location_index;

void init_locations();
void display_current_location();
void move_to_location(int index);

#endif  // LOCATION_H
