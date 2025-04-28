#include "game.h"
#include "location.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void handle_user_input(char* input);

void start_game() {
    init_locations();
    current_location_index = 0;
    printf("Welcome to the adventure game!\n");
    display_current_location();
    while (1) {
        char input[256];
        printf("> ");
        fgets(input, sizeof(input), stdin);
        handle_user_input(input);
        display_current_location();
    }
}

void handle_user_input(char* input) {
    if (strcmp(input, "go north\n") == 0 && locations[current_location_index].north != -1) {
        move_to_location(locations[current_location_index].north);
    } else if (strcmp(input, "go south\n") == 0 && locations[current_location_index].south != -1) {
        move_to_location(locations[current_location_index].south);
    } else if (strcmp(input, "go east\n") == 0 && locations[current_location_index].east != -1) {
        move_to_location(locations[current_location_index].east);
    } else if (strcmp(input, "go west\n") == 0 && locations[current_location_index].west != -1) {
        move_to_location(locations[current_location_index].west);
    } else if (strcmp(input, "quit\n") == 0) {
        printf("Goodbye!\n");
        exit(0);
    } else {
        printf("Invalid command. Try 'go north', 'go south', 'go east', 'go west', or 'quit'.\n");
    }
}
