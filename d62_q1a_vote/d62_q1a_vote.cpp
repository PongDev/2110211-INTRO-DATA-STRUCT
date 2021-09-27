#include <bits/stdc++.h>

#define pb push_back

using namespace std;

int main() {
    int n, k;
    map<string, int> hsh;
    vector<int> ans;

    scanf("%d%d", &n, &k);
    while (n--) {
        string i;
        cin >> i;
        hsh[i]++;
    }
    for (auto it : hsh) {
        ans.pb(it.second);
    }
    sort(ans.begin(), ans.end());
    printf("%d\n", int(ans.size()) - k < 0 ? ans[0] : ans[ans.size() - k]);
}