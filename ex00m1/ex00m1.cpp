#include <bits/stdc++.h>

#define mkp make_pair

using namespace std;

int main() {
    int n, m;
    vector<int> timeUse;

    scanf("%d%d", &n, &m);
    timeUse.resize(n);
    for (int c = 0; c < n; c++)
        scanf("%d", &timeUse[c]);
    {
        typedef pair<int, int> T;
        priority_queue<T, vector<T>, greater<T>> pq;

        for (int c = 0; c < n; c++) {
            pq.push(mkp(0, c));
        }
        for (int c = 0; c < m; c++) {
            T top = pq.top();
            pq.pop();
            printf("%d\n", top.first);
            pq.push(mkp(top.first + timeUse[top.second], top.second));
        }
    }
}