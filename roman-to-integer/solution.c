int romanValues['Z'] = {
    ['I'] = 1,
    ['V'] = 5,
    ['X'] = 10,
    ['L'] = 50,
    ['C'] = 100,
    ['D'] = 500,
    ['M'] = 1000,
};

int romanToInt(char* s)
{
    int total = 0;
    int current = 0;
    int next = 0;

    for (; *s; s++)
    {
        next = romanValues[(int)*(s+1)];
        current = romanValues[(int)*s];

        if (current >= next)
        {
            total += current;
        }
        else
        {
            total -= current;
        }
    }

    return total;
}
