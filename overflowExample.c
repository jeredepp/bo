#include <stdio.h>
#include <string.h>
#define MAX_INPUT_BUFFER 256

/*
* input lesen und in s kopieren
*
*/
void getlines(char *s) {
        int c;
        while ((c=getchar()) != EOF){
                *s++ = c;
        }
        *s = '\0';
}

/*
* Newlines entfernen
*/
void removeNewlines(char *s) {
        int l;
        l = strlen(s);
        while (l--){
                if (s[l] == '\n'){
                        s[l] = '\0';
                }
        }
}

int main() {
        char input[MAX_INPUT_BUFFER];
        getlines(input);
        /* this check ensures there's no buffer overflow */
        if (strlen(input) < MAX_INPUT_BUFFER) {
                removeNewlines(input);
                printf("Du hast '%s' eingegeben.\n", input);
        }
        return 0;
}
