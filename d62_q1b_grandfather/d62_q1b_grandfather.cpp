#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    map<long long, long long> p;

    scanf("%d%d", &n, &m);
    while (n--) {
        long long parent, child;
        scanf("%lld%lld", &parent, &child);
        p[child] = parent;
    }
    while (m--) {
        long long a, b, p1, p2;

        scanf("%lld%lld", &a, &b);
        if (a != b && p.find(a) != p.end() && p.find(b) != p.end() && p.find(p[a]) != p.end() && p.find(p[b]) != p.end() && p[p[a]] == p[p[b]]) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}