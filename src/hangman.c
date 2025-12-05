#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char words[][20] = {"computer", "hangman", "college", "science", "program", 
                        "keyboard", "network", "project", "student", "language"};

    srand(time(0));
    int randomIndex = rand() % 10;

    char word[20];
    strcpy(word, words[randomIndex]);

    int length = strlen(word);
    char display[20];
    char guessed[30];
    int attempts = 6;
    char guess;
    int correct, i, guessCount = 0;

    for(i = 0; i < length; i++)
        display[i] = '_';
    display[length] = '\0';

    printf("Word Guessing Game\n");
    printf("-------------------\n");

    while(attempts > 0) {
        correct = 0;

        printf("\nWord: ");
        for(i = 0; i < length; i++)
            printf("%c ", display[i]);

        printf("\nAttempts left: %d", attempts);

        printf("\nGuessed Letters: ");
        for(i = 0; i < guessCount; i++)
            printf("%c ", guessed[i]);

        printf("\nEnter a letter: ");
        scanf(" %c", &guess);

        guessed[guessCount++] = guess;

        for(i = 0; i < length; i++) {
            if(word[i] == guess && display[i] == '_') {
                display[i] = guess;
                correct = 1;
            }
        }

        if(!correct) {
            attempts--;
            printf("Incorrect Guess\n");
        } else {
            printf("Correct Guess\n");
        }

        if(strcmp(display, word) == 0) {
            printf("\nCompleted word: %s\n", word);
            printf("You Won!\n");
            return 0;
        }
    }

    printf("\nNo attempts left\n");
    printf("Correct word was: %s\n", word);

    return 0;
}
