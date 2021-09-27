#include <bits/stdc++.h>

#define pb push_back
#define mkp make_pair

using namespace std;

int main() {
    int n, m, a, u, i, v;
    vector<int> amount;
    vector<map<int, int>> bid;
    vector<vector<int>> userItem;
    char cmd[10];

    scanf("%d%d%d", &n, &m, &a);
    amount.resize(n + 1);
    bid.resize(n + 1);
    userItem.resize(m + 1);
    for (int c = 1; c <= n; c++) {
        scanf("%d", &amount[c]);
    }
    for (int c = 0; c < a; c++) {
        scanf("%s", cmd);
        switch (cmd[0]) {
        case 'B':
            scanf("%d%d%d", &u, &i, &v);
            bid[i][u] = v;
            break;
        case 'W':
            scanf("%d%d", &u, &i);
            bid[i].erase(u);
            break;
        }
    }
    for (int c = 1; c <= n; c++) {
        vector<pair<int, int>> tmp;
        for (auto i : bid[c]) {
            tmp.pb(mkp(i.second, i.first));
        }
        sort(tmp.begin(), tmp.end(), greater<pair<int, int>>());
        if (tmp.size() > amount[c])
            tmp.resize(amount[c]);
        for (auto i : tmp) {
            userItem[i.second].pb(c);
        }
    }
    for (int c = 1; c <= m; c++) {
        if (userItem[c].empty())
            printf("NONE");
        else
            for (auto i : userItem[c])
                printf("%d ", i);
        printf("\n");
    }
}