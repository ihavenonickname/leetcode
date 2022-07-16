#include <string.h>

int strStr(char* haystack, char* needle)
{
    size_t needle_len = strlen(needle);
    size_t haystack_len = strlen(haystack);

    if (needle_len > haystack_len)
    {
        return -1;
    }

    size_t diff = haystack_len - needle_len;

    for (size_t i = 0; i <= diff; i += 1)
    {
        if (memcmp(haystack+i, needle, needle_len) == 0)
        {
            return (int)i;
        }
    }

    return -1;
}
