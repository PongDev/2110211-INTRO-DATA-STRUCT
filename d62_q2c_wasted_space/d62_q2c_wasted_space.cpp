#include <bits/stdc++.h>

int main() {
    int i;

    scanf("%d", &i);
    for (int c = 0; 1 << c <= 2e9; c++)
        if (1 << c >= i) {
            printf("%d\n", (1 << c) - i);
            break;
        }
}