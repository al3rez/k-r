#include <stdio.h>
 
/* copy input to output and replace each one or
 * more blanks by a single blank */
 
main()
{
    int c;
    int acc;
 
    while ((c = getchar()) != EOF)
    {
        if (c != ' ' || acc != ' ')
            putchar(c);
 
        acc = c;
    }
 
}
