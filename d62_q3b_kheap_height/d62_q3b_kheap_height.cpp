#include <bits/stdc++.h>

int main() {
    long long n, k, h = 0, node = 1;

    scanf("%lld%lld", &n, &k);
    if (k == 1) {
        h = n - 1;
    } else {
        n -= node;
        while (n > 0) {
            node *= k;
            n -= node;
            h++;
        }
    }
    printf("%lld\n", h);
}