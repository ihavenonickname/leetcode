#include <stdlib.h>
#include <stdio.h>

int romanToInt(char* s);

int main()
{
    printf("%d\n", romanToInt("III"));
    printf("%d\n", romanToInt("LVIII"));
    printf("%d\n", romanToInt("MCMXCIV"));

    return EXIT_SUCCESS;
}
