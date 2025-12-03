#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "../include/functions.h"

#define MAXWORDLEN 100

void displayHangman(int wrongAttempts) {
    printf("\n");
    switch (wrongAttempts) {
        case 0: printf("  +---+\n      |\n      |\n      |\n     ===\n"); break;
        case 1: printf("  +---+\n  O   |\n      |\n      |\n     ===\n"); break;
        case 2: printf("  +---+\n  O   |\n  |   |\n      |\n     ===\n"); break;
        case 3: printf("  +---+\n  O   |\n /|   |\n      |\n     ===\n"); break;
        case 4: printf("  +---+\n  O   |\n /|\\  |\n      |\n     ===\n"); break;
        case 5: printf("  +---+\n  O   |\n /|\\  |\n /    |\n     ===\n"); break;
        case 6: printf("  +---+\n  O   |\n /|\\  |\n / \\  |\n     ===\n"); break;
    }
}

void displayWord(char word[], int guessed[]) {
    for (int i = 0; i < strlen(word); i++) {
        if (guessed[i])
            printf("%c ", word[i]);
        else
            printf("_ ");
    }
    printf("\n");
}

int isWordGuessed(int guessed[], int length) {
    for (int i = 0; i < length; i++) {
        if (!guessed[i]) return 0;
    }
    return 1;
}

int main() {
    char word[MAXWORDLEN], fileWord[50];
    FILE *file = fopen("../assets/words.txt", "r");

    if (!file) {
        printf("Error: Could not open words file.\n");
        return 1;
    }

    srand(time(NULL));
    int random = rand() % 50;
    for (int i = 0; i <= random; i++)
        fscanf(file, "%s", fileWord);

    strcpy(word, fileWord);
    fclose(file);

    int length = strlen(word);
    int guessed[length];
    memset(guessed, 0, sizeof(guessed));

    int wrongAttempts = 0;
    char guess;
    printf("\n===== HANGMAN GAME =====\n");

    while (wrongAttempts < 6) {
        displayHangman(wrongAttempts);
        displayWord(word, guessed);

        printf("\nEnter your guess: ");
        scanf(" %c", &guess);

        int correct = 0;
        for (int i = 0; i < length; i++) {
            if (word[i] == guess) {
                guessed[i] = 1;
                correct = 1;
            }
        }

        if (!correct) wrongAttempts++;

        if (isWordGuessed(guessed, length)) {
            printf("\nCorrect! You guessed the word: %s\n", word);
            return 0;
        }
    }

    displayHangman(wrongAttempts);
    printf("\nYou lost! The word was: %s\n", word);

    return 0;
}
