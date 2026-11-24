/*
  Week 6 Activity: Arrays - Task 3
  3D Array 
  BCS-05-0551/2026
  Cyrus kiiru
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];
    int total_occupied = 0;
    int floor,room,branch;
    
    srand((unsigned int)time(NULL));

    printf("=== Hotel Chain Occupancy (3 Branches, 5 Floors, 10 Rooms) ===\n\n");

    for (branch = 0; branch < 3; branch++) {
        int branch_occupied = 0;
        for ( floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2; // 1 = occupied, 0 = vacant
                if (chain[branch][floor][room] == 1) {
                    branch_occupied++;
                    total_occupied++;
                }
            }
        }
        printf("Branch %d Occupied Rooms: %d / 50\n", branch + 1, branch_occupied);
    }

    printf("\nTotal Occupied Rooms Across All Branches: %d / 150\n", total_occupied);

    return 0;
}
