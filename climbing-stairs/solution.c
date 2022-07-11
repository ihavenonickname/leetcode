int memo[46] = {1, 1};

int climbStairs(int n)
{
    if (memo[n] == 0)
    {
        memo[n] = climbStairs(n - 2) + climbStairs(n - 1);
    }

    return memo[n];
}
