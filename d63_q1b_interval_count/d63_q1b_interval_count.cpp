#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, k, i;
    vector<int> d;

    scanf("%d%d%d", &n, &m, &k);
    for (int c = 0; c < n; c++) {
        scanf("%d", &i);
        d.push_back(i);
    }
    sort(d.begin(), d.end());
    for (int c = 0; c < m; c++) {
        scanf("%d", &i);
        printf("%d ", upper_bound(d.begin(), d.end(), i + k) - lower_bound(d.begin(), d.end(), i - k));
    }
    printf("\n");
}