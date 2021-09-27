#include <bits/stdc++.h>

using namespace std;

map<string, int> hsh;

int main() {
    int n;
    string str, ansstr;
    int ans = 0;

    cin >> n;
    while (n--) {
        cin >> str;
        hsh[str]++;
    }
    for (auto it = hsh.begin(); it != hsh.end(); it++)
        if (it->second >= ans) {
            ans = it->second;
            ansstr = it->first;
        }
    cout << ansstr << " " << ans << endl;
}