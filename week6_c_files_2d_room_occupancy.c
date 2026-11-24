/*
  Week 6 Activity: Arrays - Task 
  2D Array - Room Occupancy 
  
  BCS-05-0551/2026
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occupancy[5][10];
    int occupied, vacant;
    int floor;
    int room;
    
    srand((unsigned int)time(NULL));

    printf("=== Branch Room Occupancy (5 Floors, 10 Rooms/Floor) ===\n\n");

    
    for (floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;

        printf("Floor %d: ", floor + 1);
        for (room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; // Generates 0 or 1
            printf("%d ", occupancy[floor][room]);

            if (occupancy[floor][room] == 1) {
                occupied++;
            } else {
                vacant++;
            }
        }
        printf(" | Occupied: %2d, Vacant: %2d\n", occupied, vacant);
    }

    return 0;
}
