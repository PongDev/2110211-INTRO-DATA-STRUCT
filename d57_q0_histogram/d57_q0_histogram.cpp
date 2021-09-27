#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    map<string, int> hsh;

    scanf("%d", &n);
    while (n--) {
        string s;

        cin >> s;
        hsh[s]++;
    }
    for (auto i : hsh)
        if (i.second > 1)
            printf("%s %d\n", i.first.c_str(), i.second);
}