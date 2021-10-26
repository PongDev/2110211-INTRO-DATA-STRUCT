#include <bits/stdc++.h>

using namespace std;

void find_child(vector<int> &ans, int &n, int a) {
    if (a >= n)
        return;
    ans.push_back(a);
    find_child(ans, n, (a * 2) + 1);
    find_child(ans, n, (a * 2) + 2);
}

int main() {
    int n, a;
    vector<int> ans;

    scanf("%d%d", &n, &a);
    find_child(ans, n, a);
    sort(ans.begin(), ans.end());
    printf("%d\n", ans.size());
    for (auto i : ans)
        printf("%d ", i);
    printf("\n");
}