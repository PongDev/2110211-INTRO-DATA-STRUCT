#include <bits/stdc++.h>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int n, m, l, i;
    string stri;
    vector<int> key;
    map<string, bool> decrypt;

    cin >> n >> m >> l;
    for (int c = 0; c < l; c++) {
        cin >> i;
        key.push_back(i % 26);
    }
    for (int c = 0; c < n; c++) {
        cin >> stri;
        for (int c2 = 0; c2 < l; c2++) {
            stri[c2] = (((stri[c2] - 'a') - key[c2] + 26) % 26) + 'a';
        }
        decrypt[stri] = true;
    }
    for (int c = 0; c < m; c++) {
        cin >> stri;
        if (decrypt.count(stri))
            cout << "Match" << '\n';
        else
            cout << "Unknown" << '\n';
    }
}