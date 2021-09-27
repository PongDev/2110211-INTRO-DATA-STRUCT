#include <bits/stdc++.h>

int main()
{
    int h, m, i, total;

    scanf("%d%d%d", &h, &m, &i);
    total = ((h * 60) + m + i) % 1440;
    printf("%02d %02d\n", total / 60, total % 60);
}