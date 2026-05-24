#include "dnd_character.h"

int ability(void) {
    
    static int initialized = 0;

    if (!initialized) {
        srand(time(NULL));
        initialized = 1;
    }

    int smallest = 6;
    int sum = 0;
    
    for (int j = 0; j < 4; j++) {
        int dice = (rand() % 6) + 1;
        if (dice < smallest) {
              smallest = dice;
        }
        sum += dice;
    }
    sum = sum - smallest;
    return sum;
}

int modifier(int score) {
    int modifier = floor(((float)score - 10.0) / 2.0);
    return modifier;
}

dnd_character_t make_dnd_character(void) {
    dnd_character_t player;
    player.strength = ability();
    player.dexterity = ability();
    player.constitution = ability();
    player.intelligence = ability();
    player.wisdom = ability();
    player.charisma = ability();
    player.hitpoints = 10 + modifier(player.constitution);

    return player;
}



