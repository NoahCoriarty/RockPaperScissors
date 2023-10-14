Noah Coriarty

//RPS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int playerChoice, computerChoice;

    // Seed the random number generator with the current time
    srand(time(NULL));

    printf("Rock, Paper, Scissors - Enter your choice:\n");
    printf("1. Rock\n2. Paper\n3. Scissors\n");

    // Get the player's choice
    scanf("%d", &playerChoice);

    if (playerChoice < 1 || playerChoice > 3) {
        printf("Invalid choice. Please choose a number between 1 and 3.\n");
        return 1;
    }

    // Generate a random choice for the computer (1 for Rock, 2 for Paper, 3 for Scissors)
    computerChoice = rand() % 3 + 1;

    printf("Computer chose: ");
    switch (computerChoice) {
        case 1:
            printf("Rock\n");
            break;
        case 2:
            printf("Paper\n");
            break;
        case 3:
            printf("Scissors\n");
            break;
    }

    printf("You chose: ");
    switch (playerChoice) {
        case 1:
            printf("Rock\n");
            break;
        case 2:
            printf("Paper\n");
            break;
        case 3:
            printf("Scissors\n");
            break;
    }

    // Determine the winner
    if (playerChoice == computerChoice) {
        printf("It's a tie!\n");
        
    } else if ((playerChoice == 1 && computerChoice == 3) ||
               (playerChoice == 2 && computerChoice == 1) ||
               (playerChoice == 3 && computerChoice == 2)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}
