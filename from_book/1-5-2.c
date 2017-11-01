#include <stdio.h>

/*V1.0*/

int main ()
{
    long nc;
    nc=0;
    while (getchar() !=EOF)
        ++nc;
    printf ("%ld\n",nc); /*ld - long*/
}