#include <stdio.h>

int main(void)
{
    int x = 0;
    fprintf(stderr, "\"And that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
    x += 1;  // Warning: Unused variable 'x'
    return 1;
}
