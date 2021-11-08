#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, w, i, ptr1, ptr2;
    vector<int> v, tmp;
    multiset<int> left, right;

    scanf("%d%d", &n, &w);
    for (int c = 0; c < n; c++) {
        scanf("%d", &i);
        v.push_back(i);
        if (c <= w)
            tmp.push_back(i);
    }
    sort(tmp.begin(), tmp.end());
    for (int c = 0; c < tmp.size(); c++) {
        if (c < w / 2)
            left.insert(tmp[c]);
        else
            right.insert(tmp[c]);
    }
    ptr1 = 0;
    ptr2 = tmp.size();
    while (ptr2 < v.size()) {
        printf("%d ", *right.begin());
        if (left.find(v[ptr1]) != left.end()) {
            left.erase(left.find(v[ptr1]));
            if (v[ptr2] < *right.begin())
                left.insert(v[ptr2]);
            else {
                left.insert(*right.begin());
                right.erase(right.begin());
                right.insert(v[ptr2]);
            }
        } else {
            right.erase(right.find(v[ptr1]));
            if (v[ptr2] < *right.begin()) {
                left.insert(v[ptr2]);
                multiset<int>::iterator it = left.end();
                it--;
                right.insert(*it);
                left.erase(it);
            } else
                right.insert(v[ptr2]);
        }
        ptr1++;
        ptr2++;
    }
    printf("%d\n", *right.begin());
}