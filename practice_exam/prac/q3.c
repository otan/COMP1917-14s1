/**
 * Complete the function lolscammed
 * which gets rid of all letters a-f in the string
 *
 * run ./mark q3 to mark
 * (5 marks)
 */

#include <stdio.h>
#include <stdlib.h>
    #include <string.h>

#define MAX_SIZE 128

void lolscammed(char *string);

/* do not edit this function */
int main(void) {
    char string[MAX_SIZE] = { 0 };
    fgets(string, MAX_SIZE - 1, stdin);
    // kill new line - don't worry too much about this
    string[strlen(string) - 1] = 0;
    lolscammed(string);
    printf("%s\n", string);
    return EXIT_SUCCESS;
}

/* lolscammed string */
void lolscammed(char *string) {


