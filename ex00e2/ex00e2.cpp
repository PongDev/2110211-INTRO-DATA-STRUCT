#include <bits/stdc++.h>

using namespace std;

int input[105][105];
int n, m, q;

bool isPointInRange(int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < m);
}

int findMax(int x1, int y1, int x2, int y2)
{
    int mx = INT_MIN;
    x1 = max(0, min(x1, n - 1));
    y1 = max(0, min(y1, m - 1));
    x2 = max(0, min(x2, n - 1));
    y2 = max(0, min(y2, m - 1));

    for (int c = x1; c <= x2; c++)
    {
        for (int c2 = y1; c2 <= y2; c2++)
        {
            mx = max(mx, input[c][c2]);
        }
    }
    return mx;
}

int main()
{
    int x1, y1, x2, y2;

    scanf("%d%d%d", &n, &m, &q);
    for (int c = 0; c < n; c++)
        for (int c2 = 0; c2 < m; c2++)
            scanf("%d", &input[c][c2]);
    while (q--)
    {
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        x1--;
        y1--;
        x2--;
        y2--;
        if (x1 > x2 || y1 > y2)
        {
            printf("INVALID\n");
        }
        else if (isPointInRange(x1, y1) || isPointInRange(x2, y2))
        {
            printf("%d\n", findMax(x1, y1, x2, y2));
        }
        else
        {
            printf("OUTSIDE\n");
        }
    }
}