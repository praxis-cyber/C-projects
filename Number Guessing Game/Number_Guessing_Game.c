#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
int random, guess, number_of_guiess = 0;

srand(time(NULL));

    printf("Welcome to the world of Guessing Game\n");
    random = rand() % 100 +1;

    do{
        printf("\nPlease enter your guess between(1 to 100): ");
        scanf("%d", &guess);
        number_of_guiess++;

        if (guess < random)
        {
            printf("Guess larger number. \n");
        }
        else if (guess > random)
        {
            printf("Guess smaller number. \n");
        }
        else
        {
            printf("Congratulations you have successfully guessed the number in %d attempts.", number_of_guiess);
        }

    }while (guess != random);

    printf("\nBye Bye, Thanks for playing");
     printf("\nDeveloped by Sayan Dutta");

     return 0;
}