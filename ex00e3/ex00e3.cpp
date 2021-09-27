#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    set<int> s;
    bool ans = true;

    scanf("%d", &n);
    for (int c = 0; c < n; c++) {
        int i;

        scanf("%d", &i);
        if (s.find(i) != s.end()) {
            ans = false;
            break;
        } else {
            s.insert(i);
        }
    }
    if (ans) {
        auto mn = s.begin(), mx = s.end();
        mx--;
        if (*mn != 1 || *mx != n || s.size() != n)
            ans = false;
    }
    printf("%s\n", ans ? "YES" : "NO");
}