#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, v, i, addIdx = -1;
    vector<pair<int, int>> data;

    scanf("%d%d%d", &n, &k, &v);
    for (int c = 0; c < n; c++) {
        scanf("%d", &i);
        if (c == k) {
            if (data.empty() || data.back().first != v)
                data.push_back({v, 1});
            else
                data.back().second += 1;
            addIdx = data.size() - 1;
        }
        if (data.empty() || data.back().first != i)
            data.push_back({i, 1});
        else
            data.back().second += 1;
    }
    if (n == k) {
        if (data.empty() || data.back().first != v)
            data.push_back({v, 1});
        else
            data.back().second += 1;
        addIdx = data.size() - 1;
    }
    if (data[addIdx].second >= 3) {
        int ptr1 = addIdx - 1, ptr2 = addIdx + 1;
        data[addIdx].second = 0;
        while (ptr1 >= 0 && ptr2 < data.size() && data[ptr1].first == data[ptr2].first && data[ptr1].second + data[ptr2].second >= 3) {
            data[ptr1].second = 0;
            data[ptr2].second = 0;
            ptr1--;
            ptr2++;
        }
    }
    for (auto i : data) {
        for (int c = 0; c < i.second; c++)
            printf("%d ", i.first);
    }
    printf("\n");
}