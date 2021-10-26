#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> data[2];
    int n, m, i, ptr1, ptr2, lastPrintIdx;

    scanf("%d%d", &n, &m);
    for (int c = 0; c < n; c++) {
        scanf("%d", &i);
        data[0].push_back(i);
    }
    sort(data[0].begin(), data[0].end());
    for (int c = 0; c < m; c++) {
        scanf("%d", &i);
        data[1].push_back(i);
    }
    sort(data[1].begin(), data[1].end());
    ptr1 = 0, ptr2 = 0, lastPrintIdx = -1;
    while (ptr1 < data[0].size() && ptr2 < data[1].size()) {
        if (data[0][ptr1] == data[1][ptr2]) {
            if (lastPrintIdx == -1 || data[0][ptr1] != data[0][lastPrintIdx]) {
                printf("%d ", data[0][ptr1]);
                lastPrintIdx = ptr1;
            }
            ptr1++;
            ptr2++;
        } else if (data[0][ptr1] > data[1][ptr2])
            ptr2++;
        else if (data[0][ptr1] < data[1][ptr2])
            ptr1++;
    }
    printf("\n");
}