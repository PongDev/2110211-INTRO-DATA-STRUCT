#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    bool isLose = false;
    set<int> cardAvailable;
    map<int, int> cardLeft;
    vector<vector<int>> enemyCardList;

    scanf("%d%d", &n, &m);
    enemyCardList.resize(m);
    for (int c = 0; c < n; c++) {
        int i;

        scanf("%d", &i);
        cardAvailable.insert(i);
        cardLeft[i]++;
    }
    for (int c = 0; c < m; c++) {
        int i;

        scanf("%d", &i);
        enemyCardList[c].resize(i);
        for (int c2 = 0; c2 < i; c2++) {
            scanf("%d", &enemyCardList[c][c2]);
        }
    }
    for (int c = 0; c < m; c++) {
        for (auto card : enemyCardList[c]) {
            auto it = cardAvailable.upper_bound(card);
            if (it == cardAvailable.end()) {
                isLose = true;
                printf("%d\n", c + 1);
                break;
            } else {
                cardLeft[(*it)]--;
                if (cardLeft[(*it)] == 0) {
                    cardLeft.erase((*it));
                    cardAvailable.erase(it);
                }
            }
        }
        if (isLose)
            break;
    }
    if (!isLose)
        printf("%d\n", m + 1);
}
