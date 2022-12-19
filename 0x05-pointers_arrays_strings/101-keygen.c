#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(int argc, char **argv) {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random password
    char password[PASSWORD_LENGTH + 1];
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        // Generate a random integer between 0 and 25
        int r = rand() % 26;
        // Map the integer to a lowercase letter
        password[i] = 'a' + r;
    }
    password[PASSWORD_LENGTH] = '\0';

    // Print the generated password
    printf("Generated password: %s\n", password);

    return 0;
}

