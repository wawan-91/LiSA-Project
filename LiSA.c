#include <stdio.h>
#include <string.h>

void inputKalimat(char kata[50], char kalimat[200])
{
    kalimat[0] = '\0';
    char *pointerKata = strtok(kata, " ");
    while (pointerKata != NULL)
    {
        strcat(kalimat, pointerKata);
        strcat(kalimat, " ");
        pointerKata = strtok(NULL, " ");
    }
}
