#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <queue>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int, T>> data) {
    //write your code here
    std::priority_queue<std::pair<int, T>> pq;

    resize(size() + data.size());
    for (auto i : data)
        pq.push(i);
    for (int c = size() - 1; c >= 0; c--) {
        if (!pq.empty() && c == pq.top().first + pq.size() - 1) {
            (*this)[c] = pq.top().second;
            pq.pop();
        } else {
            (*this)[c] = (*this)[c - pq.size()];
        }
    }
}

#endif
