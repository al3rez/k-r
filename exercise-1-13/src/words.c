#include <stdio.h>

int wrnls(int *s, int size)
{
    int c,i;
    int len;

    len = i = 0;
    while ((c = getchar()) != EOF && i < size)
    {
        if (c != ' ' && c != '\n')
            len++;
        else
        {
            s[i++] = len;
            len = 0;
        }
    }

    return i;
}

void wcfqs(int *s, int *fqs, int size)
{
    int i;

    for (i = 0; i < size; i++)
        fqs[s[i] - 1]++;
}
