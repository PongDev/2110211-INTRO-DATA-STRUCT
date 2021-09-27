#include <bits/stdc++.h>

#define pb push_back

using namespace std;

int main() {
    int q, i;
    char cmdi[10];
    vector<int> v;

    scanf("%d", &q);
    while (q--) {
        scanf("%s", cmdi);
        string cmd = cmdi;
        if (cmd == "pb") {
            scanf("%d", &i);
            v.pb(i);
        } else if (cmd == "sa") {
            sort(v.begin(), v.end());
        } else if (cmd == "sd") {
            sort(v.begin(), v.end(), greater<int>());
        } else if (cmd == "r") {
            reverse(v.begin(), v.end());
        } else if (cmd == "d") {
            scanf("%d", &i);
            v.erase(v.begin() + i);
        }
    }
    for (auto i : v)
        printf("%d ", i);
    printf("\n");
}