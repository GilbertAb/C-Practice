// The Tortoise and the Hare
#include <iostream>
#include <array>
#include <stdlib.h>
#include <time.h>

enum TORTOISE_MOVES {FAST_PLOD, SLIP, SLOW_PLOD, T_NUM_MOVES};
const std::array<int, TORTOISE_MOVES::T_NUM_MOVES> tortoise_actual_moves = {3, -6, 1};
enum HARE_MOVES {SLEEP, BIG_HOP, BIG_SLIP, SMALL_HOP, SMALL_SLIP, H_NUM_MOVES};
const std::array<int, HARE_MOVES::H_NUM_MOVES> hare_actual_moves = {0, 9, -12, 1, -2};

const unsigned int STARTING_GATE = 1;
const unsigned int FINISH_LINE = 70;

void displayTrack(std::array<char, FINISH_LINE>& track);

void moveTortoise(std::array<char, FINISH_LINE>& track, int& tortoisePosition);
void moveHare(std::array<char, FINISH_LINE>& track, int& harePosition);

int main () {
    int tortoisePosition = STARTING_GATE;
    int harePosition = STARTING_GATE;
    std::array<char,FINISH_LINE> track = {};
    
    srand(time(NULL));
    // Start the race
    std::cout << "BANG !!!!!\nAND THEY'RE OFF !!!!!" << std::endl;

    // Clock
    while (tortoisePosition < FINISH_LINE && harePosition < FINISH_LINE) {
        moveTortoise(track, tortoisePosition);
        moveHare(track, harePosition);
        std::cout << tortoisePosition << std::endl;
        std::cout << harePosition << std::endl;

        if (tortoisePosition == harePosition) {
            std::cout << "OUCH!!!" << std::endl;
        }

        displayTrack(track);
    }
    // Declare winner
    if (tortoisePosition >= FINISH_LINE) {
        std::cout << "TORTOISE WINS!!!" << std::endl;
    } else {
        std::cout << "HARE WINS!!!" << std::endl;
    }

    return 0;
}

void moveTortoise(std::array<char, FINISH_LINE>& track, int& tortoisePosition) {
    unsigned int movement = 1 + rand() % 10;
    if (movement >= 1 && movement <= 5) {
        tortoisePosition += tortoise_actual_moves[FAST_PLOD];
    } else {
        if (movement >= 6 && movement <= 7) {
            tortoisePosition += tortoise_actual_moves[SLIP];
        } else {
            tortoisePosition += tortoise_actual_moves[SLOW_PLOD];
        }
    }
    if (tortoisePosition < 1) {
        tortoisePosition = 1;
    }
    track[tortoisePosition] = 'T';
}

void moveHare(std::array<char, FINISH_LINE>& track, int& harePosition) {
    unsigned int movement = 1 + rand() % 10;
    
    if (movement >= 1 && movement <= 2) {
        harePosition += hare_actual_moves[SLEEP];
    } else if (movement >= 3 && movement <= 4){
            harePosition += hare_actual_moves[BIG_HOP];
        } else if (movement == 5){
                harePosition += hare_actual_moves[BIG_SLIP];
            } else if (movement >= 6 && movement <= 8) {
                harePosition += hare_actual_moves[SMALL_HOP];
            } else{
                harePosition += hare_actual_moves[SMALL_SLIP];
            }
    if (harePosition < 1) {
        harePosition = 1;
    }
    track[harePosition] = 'H';
}
    


void displayTrack(std::array<char, FINISH_LINE>& track) {
    for (char tile : track) {
        std::cout<< "|" << tile << "|";
    }
    std::cout << std::endl;
}
