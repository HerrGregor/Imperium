#include <stdio.h>

/* копирование ввода на вывод; V.1.0 */

int main ()
{
    int c;
    c=getchar();
    while (c!=EOF) { /*EOF end of file*/
        putchar (c);
        c=getchar();
    }
}
