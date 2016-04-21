#include <stdio.h>
#include <words.h>

int main()
{
    int _count,i;
    int words[9] = {0};
    int freqs[9] = {0};

    _count = wrnls(words, sizeof words / sizeof words[0]);
    wcfqs(words, freqs, _count);

    for (i = 0; i < _count; i++)
        printf("%d %d\n", i + 1, freqs[i]);
    
    return 0;
}
