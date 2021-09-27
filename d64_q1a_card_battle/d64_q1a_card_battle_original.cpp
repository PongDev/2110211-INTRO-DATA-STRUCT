#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, ans;
    multiset<int> card;
    vector<vector<int>> enemyCard;

    ans = -1;
    scanf("%d%d", &n, &m);
    enemyCard.resize(m);
    for (int c = 0; c < n; c++) {
        int i;

        scanf("%d", &i);
        card.insert(i);
    }
    for (int c = 0; c < m; c++) {
        int i;

        scanf("%d", &i);
        enemyCard[c].resize(i);
        for (int c2 = 0; c2 < i; c2++) {
            scanf("%d", &enemyCard[c][c2]);
        }
    }
    for (int c = 0; c < m; c++) {
        for (auto i : enemyCard[c]) {
            auto it = card.upper_bound(i);

            if (it == card.end()) {
                ans = c + 1;
                break;
            } else {
                card.erase(it);
            }
        }
        if (ans != -1)
            break;
    }
    printf("%d\n", ans == -1 ? m + 1 : ans);
}
