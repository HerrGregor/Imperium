#include <stdio.h>

/* печать таблицы температур по фаренгейте */

int main ()
{
        float fahr, celsius;
        int lower, upper, step;
        
        lower=0; /* untere Grenze */
        upper=300; /* obere Grenze */
        step=20; /* Iterrationsschritt */
        
        fahr=lower;
        while (fahr<=upper) {
            celsius=5.0*(fahr-32.0)/9.0;
            printf ("%3.0f %6.1f\n", fahr, celsius);
            fahr=fahr+step;
        }
}
            