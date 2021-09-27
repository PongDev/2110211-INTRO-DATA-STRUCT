#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main() {
    int q, score;
    string sid, tid;
    map<string, pair<int, int>> sscore, tscore;

    cout << std::fixed << std::setprecision(2);
    cin >> q;
    while (q--) {
        cin >> sid >> tid >> score;
        pair<int, int> &sref = sscore[sid];
        sref.first += score;
        sref.second += 1;
        pair<int, int> &tref = tscore[tid];
        tref.first += score;
        tref.second += 1;
    }
    for (auto i : sscore)
        cout << i.first << " " << (i.second.first + 0.0) / i.second.second << endl;
    for (auto i : tscore)
        cout << i.first << " " << (i.second.first + 0.0) / i.second.second << endl;
}