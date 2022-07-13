#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool isValid(char* s);

int main()
{
    printf("is valid? %d\n", isValid("([][][](({{[]}})){}{}{})"));

    return EXIT_SUCCESS;
}
