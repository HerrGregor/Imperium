#include <stdio.h>

#define LOWER 0 /* untere Grenze */
#define UPPER 300 /* obere Grenze */
#define STEP 20 /* Iterraionsschritt */

int main ()
{
    int fahr;
    for (fahr=LOWER; fahr<=UPPER; fahr=fahr+STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}