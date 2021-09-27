#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, i;
    set<int> s1, ans;

    scanf("%d%d", &n, &m);
    while (n--) {
        scanf("%d", &i);
        s1.insert(i);
    }
    while (m--) {
        scanf("%d", &i);
        if (s1.find(i) != s1.end())
            ans.insert(i);
    }
    for (auto i : ans)
        printf("%d ", i);
    printf("\n");
}