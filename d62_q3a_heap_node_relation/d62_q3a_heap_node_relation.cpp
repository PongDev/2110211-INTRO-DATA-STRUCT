#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, a, b;
    bool isSwap;

    scanf("%d%d", &n, &m);
    while (m--) {
        scanf("%d%d", &a, &b);
        if (a == b)
            printf("a and b are the same node\n");
        else {
            isSwap = false;
            if (a > b) {
                swap(a, b);
                isSwap = true;
            }
            while (b > a) {
                b = (b - 1) / 2;
            }
            if (a == b)
                printf("%c is an ancestor of %c\n", isSwap ? 'b' : 'a', isSwap ? 'a' : 'b');
            else
                printf("a and b are not related\n");
        }
    }
}