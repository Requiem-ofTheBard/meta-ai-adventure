#include "location.h"
#include <stdio.h>

Location locations[5];
int current_location_index;

void init_locations() {
    locations[0].name = "Room 1";
    locations[0].description = "You are in room 1.";
    locations[0].north = 1;
    locations[0].south = -1;
    locations[0].east = -1;
    locations[0].west = -1;

    locations[1].name = "Room 2";
    locations[1].description = "You are in room 2.";
    locations[1].north = -1;
    locations[1].south = 0;
    locations[1].east = 2;
    locations[1].west = -1;

    locations[2].name = "Room 3";
    locations[2].description = "You are in room 3.";
    locations[2].north = -1;
    locations[2].south = -1;
    locations[2].east = -1;
    locations[2].west = 1;

    locations[3].name = "Room 4";
    locations[3].description = "You are in room 4.";
    locations[3].north = 4;
    locations[3].south = -1;
    locations[3].east = -1;
    locations[3].west = -1;

    locations[4].name = "Room 5";
    locations[4].description = "You are in room 5.";
    locations[4].north = -1;
    locations[4].south = 3;
    locations[4].east = -1;
    locations[4].west = -1;
}

void display_current_location() {
    printf("%s\n", locations[current_location_index].description);
}

void move_to_location(int index) {
    if (index >= 0 && index < 5) {
        current_location_index = index;
    } else {
        printf("You can't go that way.\n");
    }
}
