#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to display the dice face
void display_dice(int face) {
    printf("+-----+\n");
    switch(face) {
        case 1:
            printf("|     |\n");
            printf("|  o  |\n");
            printf("|     |\n");
            break;
        case 2:
            printf("|o    |\n");
            printf("|     |\n");
            printf("|    o|\n");
            break;
        case 3:
            printf("|o    |\n");
            printf("|  o  |\n");
            printf("|    o|\n");
            break;
        case 4:
            printf("|o   o|\n");
            printf("|     |\n");
            printf("|o   o|\n");
            break;
        case 5:
            printf("|o   o|\n");
            printf("|  o  |\n");
            printf("|o   o|\n");
            break;
        case 6:
            printf("|o   o|\n");
            printf("|o   o|\n");
            printf("|o   o|\n");
            break;
    }
    printf("+-----+\n");
}

int main() {
    int dice_face = 1;
    char input;

    // Initialize the random number generator
    srand(time(0));

    // Display the initial dice face
    display_dice(dice_face);

    // Loop until the user decides to quit
    do {
        printf("Press 'r' to respin or 'q' to quit: ");
        scanf(" %c", &input);

        if (input == 'r') {
            // Generate a random number between 1 and 6
            dice_face = rand() % 6 + 1;
            // Display the new dice face
            display_dice(dice_face);
        }
    } while (input != 'q');

    return 0;
}
