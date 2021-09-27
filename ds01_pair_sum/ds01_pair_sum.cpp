#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, i;
    map<int, int> hash;

    scanf("%d%d", &n, &m);
    for (int c = 0; c < n; c++) {
        scanf("%d", &i);
        hash[i]++;
    }
    while (m--) {
        bool isPrint = false;

        scanf("%d", &i);
        for (auto it = hash.begin(); it != hash.end() && it->first <= i / 2; it++) {
            auto it2 = hash.find(i - (it->first));

            if (it2 != hash.end() && (it != it2 || it->second > 1)) {
                printf("YES\n");
                isPrint = true;
                break;
            }
        }
        if (!isPrint)
            printf("NO\n");
    }
}