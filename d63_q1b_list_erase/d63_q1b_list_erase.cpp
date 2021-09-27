#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;
void list_erase(vector<int> &v, vector<int> &pos) {
    //write your code here
    vector<int> p = pos;
    int idx = 0;

    sort(p.begin(), p.end());
    for (size_t i = 0; i < v.size(); i++) {
        while (idx < p.size() && i + idx == p[idx]) {
            idx++;
        }
        v[i] = v[i + idx];
    }
    v.resize(v.size() - pos.size());
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> v(n), pos(m);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < m; i++)
        cin >> pos[i];

    list_erase(v, pos);

    cout << "After call list_erase" << endl
         << "Size = " << v.size() << endl;
    for (auto &x : v)
        cout << x << " ";
    cout << endl;
}