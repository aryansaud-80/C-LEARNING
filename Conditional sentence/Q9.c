#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to get the user's choice
int getUserChoice()
{
    int choice;
    printf("Enter your choice:\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    scanf("%d", &choice);
    return choice;
}

// Function to get the computer's choice
int getComputerChoice()
{
    // Seed the random number generator
    srand(time(NULL));
    return rand() % 3 + 1; // Generates a random number between 1 and 3
}

// Function to determine the winner
void determineWinner(int userChoice, int computerChoice)
{
    printf("Computer chose: ");
    switch (computerChoice)
    {
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
    switch (userChoice)
    {
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
    if (userChoice == computerChoice)
    {
        printf("It's a tie!\n");
    }
    else if ((userChoice == 1 && computerChoice == 3) ||
             (userChoice == 2 && computerChoice == 1) ||
             (userChoice == 3 && computerChoice == 2))
    {
        printf("You win!\n");
    }
    else
    {
        printf("Computer wins!\n");
    }
}

int main()
{
    int userChoice, computerChoice;

    // Get user's choice
    userChoice = getUserChoice();

    // Get computer's choice
    computerChoice = getComputerChoice();

    // Determine the winner and display the choices
    determineWinner(userChoice, computerChoice);

    return 0;
}
