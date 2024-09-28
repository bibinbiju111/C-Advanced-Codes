/*#include <stdio.h>

void main()

{

    char *ap[10] = {"hi", "hello", "bye"};

    int i = 0;

    for (i = 0; i < 10; i++)

        printf("%s", (ap[i]));
} */

#include <stdio.h>

void main()

{

    char *ap[10] = {"hi", "hello", "bye"};

    int i = 0, j = 0;

    ap[0] = "hey";

    for (i = 0; i < 10; i++)

        printf("%s\n", ap[i]);
}