#include <stdio.h>

/* reads the next lengths of the words from stream and
 * stores them into the buffer pointed to by s.
 */

int w_rnls(int *s, int size);

/* counts the frequencies of the lengths of the words and
 * stores them into the buffer pointed to by fqs.
 */

void w_cfls(int *s, int *fqs, int size);
