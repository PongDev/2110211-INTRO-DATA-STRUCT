#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    vector<pair<int, int>> v;

    scanf("%d%d", &n, &m);
    while (n--) {
        int a, b;

        scanf("%d%d", &a, &b);
        v.push_back({a, b});
    }
    sort(v.begin(), v.end());
    while (m--) {
        int i;

        scanf("%d", &i);
        auto it = upper_bound(v.begin(), v.end(), make_pair(i + 1, 0));

        if (it == v.begin()) {
            printf("0 ");
        } else {
            it--;
            printf("%d ", it->first <= i && i <= it->second ? 1 : 0);
        }
    }
    printf("\n");
}