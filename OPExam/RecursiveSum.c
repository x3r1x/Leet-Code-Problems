//
// Created by x3r1x on 14.05.2026.
//

#include <stdio.h>

int sum(const int N)
{
    if (N < 1)
    {
        return 0;
    }

    return N + sum(N - 1);
}

int main()
{
    int N = 6;

    printf("%d", sum(N));
}