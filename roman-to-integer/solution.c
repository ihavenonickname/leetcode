int romanToInt(char* s)
{
    int total = 0;
    int current = 0;
    int previous = 0;

    for (; *s; s++)
    {
        previous = current;

        switch (*s)
        {
            case 'I':
            current = 1;
            break;

            case 'V':
            current = 5;
            break;

            case 'X':
            current = 10;
            break;

            case 'L':
            current = 50;
            break;

            case 'C':
            current = 100;
            break;

            case 'D':
            current = 500;
            break;

            case 'M':
            current = 1000;
            break;
        }

        total += current;

        if (previous != 0 && previous < current)
        {
            total -= previous * 2;
        }
    }

    return total;
}
