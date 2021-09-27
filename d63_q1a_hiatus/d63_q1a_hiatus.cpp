#include <bits/stdc++.h>

#define pb push_back
#define mkp make_pair
#define x first
#define y second

using namespace std;

int main() {
    int n, m, a, b;
    vector<pair<int, int>> v;
    vector<pair<int, int>>::iterator it;

    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &a, &b);
        v.pb(mkp(a, b));
    }
    sort(v.begin(), v.end());
    while (m--) {
        scanf("%d%d", &a, &b);
        it = lower_bound(v.begin(), v.end(), mkp(a, b));
        if (it == v.begin()) {
            if (it->x == a && it->y == b) {
                printf("0 0 ");
            } else {

                printf("-1 -1 ");
            }
        } else {
            if (it == v.end()) {
                it--;
                printf("%d %d ", it->x, it->y);
            } else if (it->x == a && it->y == b) {
                printf("0 0 ");
            } else {
                it--;
                printf("%d %d ", it->x, it->y);
            }
        }
    }
    printf("\n");
}